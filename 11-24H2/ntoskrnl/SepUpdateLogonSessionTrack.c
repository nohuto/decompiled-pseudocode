/*
 * XREFs of SepUpdateLogonSessionTrack @ 0x140A427E4
 * Callers:
 *     SepRmAddLogonSessionInfoWrkr @ 0x140A427C0 (SepRmAddLogonSessionInfoWrkr.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  v7 = (void *)i[9];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    i[9] = 0LL;
    i[11] = 0LL;
  }
  Pool2 = (char *)ExAllocatePool2(
                    0x100uLL,
                    ((*(unsigned __int16 *)(a1 + 8) + 9LL) & 0xFFFFFFF8LL) + *(unsigned __int16 *)(a1 + 24) + 2LL,
                    0x734C6553u);
  if ( Pool2 )
  {
    i[9] = (__int64)Pool2;
    i[11] = (__int64)&Pool2[(*(unsigned __int16 *)(a1 + 8) + 9LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(Pool2, (const void *)(a1 + 40), *(unsigned __int16 *)(a1 + 8));
    v9 = *(unsigned __int16 *)(a1 + 8);
    *((_WORD *)i + 32) = v9;
    *((_WORD *)i + 33) = v9 + 2;
    *(_WORD *)(i[9] + 2 * (v9 >> 1)) = 0;
    memmove(
      (void *)i[11],
      (const void *)(a1 + ((*(unsigned __int16 *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 40),
      *(unsigned __int16 *)(a1 + 24));
    v10 = *(unsigned __int16 *)(a1 + 24);
    *((_WORD *)i + 40) = v10;
    *((_WORD *)i + 41) = v10 + 2;
    *(_WORD *)(i[11] + 2 * (v10 >> 1)) = 0;
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
