/*
 * XREFs of PopFxIdleWorkerTail @ 0x1404E22FC
 * Callers:
 *     PopFxIdleWorker @ 0x1403A9020 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x14044E360 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     PopFxDeactivateComponentDependencies @ 0x140230AD4 (PopFxDeactivateComponentDependencies.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x1402AE658 (PopFxActivateComponentWorker.c)
 *     PopFxCompleteComponentActivation @ 0x1402BFDF0 (PopFxCompleteComponentActivation.c)
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x1402C0850 (PopPluginComponentActive.c)
 *     PopFxUpdateAccountingActiveTime @ 0x1403A7928 (PopFxUpdateAccountingActiveTime.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140434D90 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x14044DB74 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1405CE580 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1405CE5B0 (PopFxDeviceCriticalRegionLeave.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxIdleWorkerTail(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  KIRQL v8; // r11
  char v9; // r8
  KIRQL v10; // dl

  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * a2);
  PopFxDeviceCriticalRegionEnter();
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(_DWORD *)(v6 + 216) == 1 )
  {
    PopFxUpdateAccountingActiveTime(v6 + 200, v7, 0LL);
    *(_BYTE *)(v6 + 208) = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 200), v8);
  PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(BugCheckParameter2 + 48), a2);
  PpmInterlockedUpdateTimeNoFence((volatile signed __int64 *)(BugCheckParameter2 + 544), v7, 0LL);
  _m_prefetchw((const void *)(v6 + 88));
  if ( _InterlockedOr((volatile signed __int32 *)(v6 + 88), 0) == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, v9, a3) == 1 )
      PopFxProcessWork(0LL, a3);
    PopFxDeactivateComponentDependencies(v6);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000) != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      PopFxActivateComponentWorker(BugCheckParameter2, v6, 0, 0LL);
    }
  }
  else
  {
    PopFxReferenceDevice(BugCheckParameter2, 8);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(_DWORD *)(v6 + 216) == 1 )
    {
      *(_QWORD *)(v6 + 224) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v6 + 208) = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 200), v10);
    PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(BugCheckParameter2 + 48), a2);
    if ( *(_QWORD *)(BugCheckParameter2 + 112) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter2 + 192), a2);
    PopFxCompleteComponentActivation(BugCheckParameter2, v6, 1);
  }
  return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
}
