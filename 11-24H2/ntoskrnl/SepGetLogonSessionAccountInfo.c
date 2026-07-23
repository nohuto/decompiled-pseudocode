/*
 * XREFs of SepGetLogonSessionAccountInfo @ 0x140A3C49C
 * Callers:
 *     AdtpBuildLogonIdStrings @ 0x140A3C34C (AdtpBuildLogonIdStrings.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepGetLogonSessionAccountInfo(_DWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  struct _KTHREAD *CurrentThread; // rax
  int v10; // edi
  __int64 v11; // rbx
  struct _ERESOURCE *v12; // r13
  __int64 *i; // rbx
  void *v14; // rsi
  __int64 v15; // rax
  __int64 Pool2; // rax
  __int64 v17; // rbp
  void *v19; // rcx
  void *v20; // rcx

  v4 = 1529154084 * *a1;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  --CurrentThread->KernelApcDisable;
  v4 >>= 28;
  v11 = v4;
  v12 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v4 & 3));
  ExAcquireResourceSharedLite(v12, 1u);
  for ( i = *(__int64 **)(SepLogonSessions + 8 * v11); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v10 = -1073741729;
      goto LABEL_14;
    }
    if ( *a1 == *((_DWORD *)i + 2) && a1[1] == *((_DWORD *)i + 3) )
      break;
  }
  v14 = 0LL;
  *(_OWORD *)a2 = *((_OWORD *)i + 4);
  *(_OWORD *)a3 = *((_OWORD *)i + 5);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  if ( i[9]
    && (v15 = ExAllocatePool2(0x100uLL, *((unsigned __int16 *)i + 33), 0x6B416553u), (*(_QWORD *)(a2 + 8) = v15) == 0LL) )
  {
    v10 = -1073741670;
  }
  else if ( i[11] )
  {
    Pool2 = ExAllocatePool2(0x100uLL, *((unsigned __int16 *)i + 41), 0x6B416553u);
    *(_QWORD *)(a3 + 8) = Pool2;
    if ( !Pool2 )
      v10 = -1073741670;
  }
  v17 = i[7];
  if ( v10 < 0 )
    goto LABEL_20;
  if ( a4 )
  {
    if ( v17 )
    {
      v14 = (void *)ExAllocatePool2(
                      0x100uLL,
                      4LL * *(unsigned __int8 *)(**(_QWORD **)(v17 + 152) + 1LL) + 8,
                      0x69536553u);
      if ( !v14 )
      {
        v10 = -1073741670;
LABEL_20:
        v19 = *(void **)(a2 + 8);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        v20 = *(void **)(a3 + 8);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        goto LABEL_14;
      }
    }
  }
  memmove(*(void **)(a2 + 8), (const void *)i[9], *((unsigned __int16 *)i + 33));
  memmove(*(void **)(a3 + 8), (const void *)i[11], *((unsigned __int16 *)i + 41));
  if ( v14 )
  {
    memmove(v14, **(const void ***)(v17 + 152), 4LL * *(unsigned __int8 *)(**(_QWORD **)(v17 + 152) + 1LL) + 8);
    *a4 = v14;
  }
LABEL_14:
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
