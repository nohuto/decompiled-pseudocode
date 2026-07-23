/*
 * XREFs of PfpPartitionIterate @ 0x14022A280
 * Callers:
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 *     PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x1405CA1DC (PfpPartitionIterateAndCheckCanAnyDoAccessLogging.c)
 *     PfpProcessScenarioPhase @ 0x1408F77E8 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140B6CE28 (PfPowerActionNotify.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14022B370 (ExReleaseRundownProtectionCacheAware.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     PfpPartitionGetFirst @ 0x14022B450 (PfpPartitionGetFirst.c)
 *     PfpPartitionReferenceParentSafe @ 0x14022BCDC (PfpPartitionReferenceParentSafe.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140238FA0 (ExAcquireRundownProtectionCacheAware.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x14044B840 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x14044B9D0 (PfTFiNotifyFileInfoDeleteCallback.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PfpPartitionIterate(__int64 (__fastcall *a1)(_QWORD, _QWORD), char a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v7; // rdx
  __int64 First; // rbx
  __int64 v9; // r8
  unsigned __int64 v11; // rdi
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // r9
  volatile __int64 *v13; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // rdx
  volatile __int64 *v16; // r14
  volatile __int64 *v17; // rdi
  volatile __int64 *v18; // rbp
  __int64 v19; // rcx
  volatile __int64 *v20; // rcx
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(_QWORD, _QWORD); // r10
  int Callback; // eax
  int v26; // ebp
  __int64 v27; // r9
  signed __int64 *v28; // rcx
  signed __int64 v29; // r8
  unsigned __int64 v30; // r8
  __int128 v31; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+30h] [rbp-48h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = 0;
  v5 = a3;
  First = PfpPartitionGetFirst(&unk_140E67128);
  if ( !First )
    return 0LL;
  while ( 1 )
  {
    v12 = PfTFiNotifyFileInfoDeleteCallback;
    if ( ((a2 & 1) == 0 || *(_DWORD *)(First + 600) < *(_DWORD *)(First + 604))
      && ((a2 & 2) == 0 || *(_DWORD *)(First + 608) < *(_DWORD *)(First + 612))
      && ((a2 & 4) == 0 || (*(_DWORD *)(First + 76) & 1) == 0) )
    {
      v23 = PfpPartitionReferenceParentSafe(First, v7, v9, PfTFiNotifyFileInfoDeleteCallback);
      if ( v23 )
      {
        if ( a1 == v12 )
        {
          Callback = PfTFiNotifyFileInfoDeleteCallback(First, v5);
        }
        else if ( a1 == v24 )
        {
          Callback = PfTFiNotifyFileStreamCreateCallback(First, v5);
        }
        else
        {
          Callback = guard_dispatch_icall_no_overrides(First, v5, v9, v12);
        }
        v26 = Callback;
        PsDereferencePartition(v23, 1951426128LL);
        if ( v26 < 0 && (v4 & 0x80000000) == 0 )
          v4 = v26;
        if ( (a2 & 8) != 0 && v26 >= 0 )
          break;
      }
    }
    v31 = 0LL;
    v32 = 0LL;
    v13 = (volatile __int64 *)(*(_QWORD *)(First + 8) + 888LL);
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = v13;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LOBYTE(v32) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v15 = _InterlockedExchange64(v13, (__int64)&v31);
      if ( v15 )
        KxWaitForLockOwnerShip(&v31, v15);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v31, v13);
    }
    v16 = *(volatile __int64 **)(First + 24);
    v17 = v13 + 1;
    while ( v16 != v17 )
    {
      v18 = v16 - 3;
      if ( ExAcquireRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v16 - 1)) )
        goto LABEL_20;
      v16 = (volatile __int64 *)*v16;
    }
    v18 = 0LL;
LABEL_20:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v31, retaddr, v9, v12);
      goto LABEL_5;
    }
    _m_prefetchw(&v31);
    v19 = v31;
    if ( !(_QWORD)v31 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v31 + 1), 0LL, (signed __int64)&v31) == &v31 )
        goto LABEL_5;
      v19 = KxWaitForLockChainValid(&v31, v15, v9, v12);
    }
    *(_QWORD *)&v31 = 0LL;
    v20 = (volatile __int64 *)(v19 + 8);
    v21 = BYTE8(v31);
    v22 = _InterlockedExchange64(v20, *((__int64 *)&v31 + 1));
    LOBYTE(v22) = v21 ^ v22;
    if ( (v22 & 4) != 0 )
      KeWakeAddressAll(v20, v22, v9, v12);
LABEL_5:
    v11 = (unsigned __int8)v32;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v32);
    __writecr8(v11);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(First + 16));
    First = (__int64)v18;
    if ( !v18 )
      return v4;
    v5 = a3;
  }
  if ( First )
  {
    v27 = *(_QWORD *)(First + 16);
    v28 = (signed __int64 *)(*(_QWORD *)v27 + *(_DWORD *)(v27 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v27 + 20)));
    _m_prefetchw(v28);
    while ( 1 )
    {
      while ( 1 )
      {
        v29 = *v28;
        if ( (*v28 & 1) != 0 )
          break;
        if ( v29 == _InterlockedCompareExchange64(v28, v29 - 2, v29) )
          return v4;
      }
      if ( v29 != 1 )
        break;
      v28 = *(signed __int64 **)v27;
    }
    v30 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeSetEvent((PRKEVENT)(v30 + 8), 0, 0);
  }
  return v4;
}
