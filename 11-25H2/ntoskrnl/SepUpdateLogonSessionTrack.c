/*
 * XREFs of SepUpdateLogonSessionTrack @ 0x140A49044
 * Callers:
 *     SepRmAddLogonSessionInfoWrkr @ 0x140A49020 (SepRmAddLogonSessionInfoWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepUpdateLogonSessionTrack(__int64 a1)
{
  unsigned int v1; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 *i; // rbx
  void *v7; // rcx
  char *Pool2; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  v1 = 1529154084 * *(_DWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = v1 >> 28;
  ExAcquireResourceExclusiveLite((PERESOURCE)&SepRmDbLock + (v5 & 3), 1u);
  for ( i = *(__int64 **)(SepLogonSessions + 8 * v5); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v4 = -1073741729;
      goto LABEL_10;
    }
    if ( *(_DWORD *)a1 == *((_DWORD *)i + 2) && *(_DWORD *)(a1 + 4) == *((_DWORD *)i + 3) )
      break;
  }
  v7 = (void *)i[8];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    i[8] = 0LL;
    i[10] = 0LL;
  }
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    i[8] = (__int64)Pool2;
    i[10] = (__int64)&Pool2[(*(unsigned __int16 *)(a1 + 8) + 9LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(Pool2, (const void *)(a1 + 40), *(unsigned __int16 *)(a1 + 8));
    v9 = *(unsigned __int16 *)(a1 + 8);
    *((_WORD *)i + 28) = v9;
    *((_WORD *)i + 29) = v9 + 2;
    *(_WORD *)(i[8] + 2 * (v9 >> 1)) = 0;
    memmove(
      (void *)i[10],
      (const void *)(a1 + ((*(unsigned __int16 *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40),
      *(unsigned __int16 *)(a1 + 24));
    v10 = *(unsigned __int16 *)(a1 + 24);
    *((_WORD *)i + 36) = v10;
    *((_WORD *)i + 37) = v10 + 2;
    *(_WORD *)(i[10] + 2 * (v10 >> 1)) = 0;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_10:
  ExReleaseResourceLite((PERESOURCE)&SepRmDbLock + (v5 & 3));
  KeLeaveCriticalRegion();
  return v4;
}
