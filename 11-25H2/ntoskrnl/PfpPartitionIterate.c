/*
 * XREFs of PfpPartitionIterate @ 0x140301540
 * Callers:
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x1405C849C (PfpPartitionIterateAndCheckCanAnyDoAccessLogging.c)
 *     PfpProcessScenarioPhase @ 0x1408EA25C (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140B5C910 (PfPowerActionNotify.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402ADA40 (ExAcquireRundownProtectionCacheAware.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140302690 (ExReleaseRundownProtectionCacheAware.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     PfpPartitionGetFirst @ 0x140302770 (PfpPartitionGetFirst.c)
 *     PfpPartitionReferenceParentSafe @ 0x140302AA8 (PfpPartitionReferenceParentSafe.c)
 *     PfTFiNotifyFileStreamCreateCallback @ 0x140470850 (PfTFiNotifyFileStreamCreateCallback.c)
 *     PfTFiNotifyFileInfoDeleteCallback @ 0x140471280 (PfTFiNotifyFileInfoDeleteCallback.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PfpPartitionIterate(__int64 a1, char a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  __int64 v7; // rdx
  __int64 First; // rdi
  __int64 v9; // r8
  volatile __int64 *v11; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB **v13; // rdx
  volatile __int64 *v14; // r14
  volatile __int64 *v15; // rbx
  volatile __int64 *v16; // rbp
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  bool v19; // bl
  __int64 v20; // r8
  __int64 v21; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v24; // rbx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rbx
  __int64 v28; // r9
  __int64 v29; // r10
  int Callback; // eax
  int v31; // ebp
  __int64 v32; // r9
  signed __int64 *v33; // rcx
  signed __int64 v34; // r8
  unsigned __int64 v35; // r8
  signed __int32 v36[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v37; // [rsp+20h] [rbp-58h] BYREF
  __int64 v38; // [rsp+30h] [rbp-48h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v4 = 0;
  v5 = a3;
  First = PfpPartitionGetFirst(&unk_140E66D18);
  if ( !First )
    return 0LL;
  while ( 1 )
  {
    if ( ((a2 & 1) == 0 || *(_DWORD *)(First + 600) < *(_DWORD *)(First + 604))
      && ((a2 & 2) == 0 || *(_DWORD *)(First + 608) < *(_DWORD *)(First + 612))
      && ((a2 & 4) == 0 || (*(_DWORD *)(First + 76) & 1) == 0) )
    {
      v27 = PfpPartitionReferenceParentSafe(First, v7, v9, PfTFiNotifyFileInfoDeleteCallback);
      if ( v27 )
      {
        if ( a1 == v28 )
        {
          Callback = PfTFiNotifyFileInfoDeleteCallback(First, v5);
        }
        else if ( a1 == v29 )
        {
          Callback = PfTFiNotifyFileStreamCreateCallback(First, v5);
        }
        else
        {
          Callback = guard_dispatch_icall_no_overrides(First, v5);
        }
        v31 = Callback;
        PsDereferencePartition(v27, 1951426128LL);
        if ( v31 < 0 && (v4 & 0x80000000) == 0 )
          v4 = v31;
        if ( (a2 & 8) != 0 && v31 >= 0 )
          break;
      }
    }
    v37 = 0LL;
    v38 = 0LL;
    v11 = (volatile __int64 *)(*(_QWORD *)(First + 8) + 888LL);
    *(_QWORD *)&v37 = 0LL;
    *((_QWORD *)&v37 + 1) = v11;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    LOBYTE(v38) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v13 = (struct _KPRCB **)_InterlockedExchange64(v11, (__int64)&v37);
      if ( v13 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&v37, v13);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v37, v11);
    }
    v14 = *(volatile __int64 **)(First + 24);
    v15 = v11 + 1;
    while ( v14 != v15 )
    {
      v16 = v14 - 3;
      if ( ExAcquireRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v14 - 1)) )
        goto LABEL_13;
      v14 = (volatile __int64 *)*v14;
    }
    v16 = 0LL;
LABEL_13:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&v37);
      v17 = v37;
      if ( !(_QWORD)v37 )
      {
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v37 + 1),
                           0LL,
                           (signed __int64)&v37) == &v37 )
          goto LABEL_21;
        v17 = KxWaitForLockChainValid((__int64 *)&v37);
      }
      *(_QWORD *)&v37 = 0LL;
      v18 = BYTE8(v37);
      if ( ((v18 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v17 + 8), *((__int64 *)&v37 + 1))) & 4) != 0 )
      {
        _InterlockedOr(v36, 0);
        v19 = KeDisableInterrupts();
        KiHaltOnAddressWakeEntireList(v21, _InterlockedExchange64(&KiHaltOnAddressHashTable[v20], 0LL));
        if ( v19 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v25 = *SchedulerAssist;
            do
            {
              v26 = v25;
              v25 = _InterlockedCompareExchange(SchedulerAssist, v25 & 0xFFDFFFFF, v25);
            }
            while ( v26 != v25 );
            if ( (v25 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
      }
    }
    else
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v37, retaddr);
    }
LABEL_21:
    v24 = (unsigned __int8)v38;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v38);
    __writecr8(v24);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(First + 16));
    First = (__int64)v16;
    if ( !v16 )
      return v4;
    v5 = a3;
  }
  if ( First )
  {
    v32 = *(_QWORD *)(First + 16);
    v33 = (signed __int64 *)(*(_QWORD *)v32 + *(_DWORD *)(v32 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v32 + 20)));
    _m_prefetchw(v33);
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = *v33;
        if ( (*v33 & 1) != 0 )
          break;
        if ( v34 == _InterlockedCompareExchange64(v33, v34 - 2, v34) )
          return v4;
      }
      if ( v34 != 1 )
        break;
      v33 = *(signed __int64 **)v32;
    }
    v35 = v34 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v35, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeSetEvent((PRKEVENT)(v35 + 8), 0, 0);
  }
  return v4;
}
