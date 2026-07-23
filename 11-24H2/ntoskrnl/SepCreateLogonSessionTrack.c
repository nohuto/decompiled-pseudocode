/*
 * XREFs of SepCreateLogonSessionTrack @ 0x140A16FEC
 * Callers:
 *     SeInitServerSilo @ 0x14078ED1C (SeInitServerSilo.c)
 *     SepRmCreateLogonSessionWrkr @ 0x140A16FC0 (SepRmCreateLogonSessionWrkr.c)
 *     SepRmDbInitialization @ 0x140C3D180 (SepRmDbInitialization.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateLogonSessionTrack(__int64 a1)
{
  __int64 **Pool2; // rax
  __int64 **v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 **v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp
  __int64 *v8; // rdi
  void *CurrentServerSilo; // rsi

  Pool2 = (__int64 **)ExAllocatePool2(0x100uLL, 0xC8uLL, 0x734C6553u);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, 0xC8uLL);
  v3[1] = *(__int64 **)a1;
  v3[4] = (__int64 *)1;
  v3[18] = (__int64 *)(v3 + 17);
  v3[17] = (__int64 *)(v3 + 17);
  v3[19] = 0LL;
  v3[20] = 0LL;
  if ( SeTokenLeakTracking )
  {
    v3[24] = (__int64 *)(v3 + 23);
    v3[23] = (__int64 *)(v3 + 23);
  }
  v4 = (unsigned __int64)(unsigned int)(1529154084 * *(_DWORD *)a1) >> 28;
  v5 = (__int64 **)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v4 & 3));
  ExAcquireResourceExclusiveLite(v7, 1u);
  v8 = *v5;
  CurrentServerSilo = (void *)PsGetCurrentServerSilo();
  while ( v8 )
  {
    if ( CurrentServerSilo == (void *)v8[21]
      && *(_DWORD *)a1 == *((_DWORD *)v8 + 2)
      && *(_DWORD *)(a1 + 4) == *((_DWORD *)v8 + 3) )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v3, 0);
      return 3221225710LL;
    }
    v8 = (__int64 *)*v8;
  }
  if ( CurrentServerSilo )
    ObfReferenceObjectWithTag(CurrentServerSilo, 0x734C6553u);
  v3[21] = (__int64 *)CurrentServerSilo;
  *v3 = *v5;
  *v5 = (__int64 *)v3;
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  return 0LL;
}
