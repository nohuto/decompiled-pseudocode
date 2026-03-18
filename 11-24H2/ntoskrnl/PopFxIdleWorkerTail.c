/*
 * XREFs of PopFxIdleWorkerTail @ 0x1404EB37C
 * Callers:
 *     PopFxIdleWorker @ 0x1403B4B50 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x1404592B0 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDeactivateComponentDependencies @ 0x14027B544 (PopFxDeactivateComponentDependencies.c)
 *     PopFxReferenceDevice @ 0x14029F788 (PopFxReferenceDevice.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140311C70 (PopFxUpdateAccountingActiveTime.c)
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x140317CC0 (PopPluginComponentActive.c)
 *     PopFxActivateComponentWorker @ 0x1403B6358 (PopFxActivateComponentWorker.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14043F1E0 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1404586C4 (PpmInterlockedUpdateTimeNoFence.c)
 *     Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405CFD88 (Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1405D0E60 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1405D0E90 (PopFxDeviceCriticalRegionLeave.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxIdleWorkerTail(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  KIRQL v8; // r11
  __int64 v9; // r8
  KIRQL v10; // dl
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * a2);
  if ( (unsigned int)Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline() )
    PopFxDeviceCriticalRegionEnter(BugCheckParameter2);
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
      PopFxProcessWork(0LL, a3, v13, v14);
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
      guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter2 + 192), a2, v11, v12);
    PopFxCompleteComponentActivation(BugCheckParameter2, v6, 1);
  }
  result = Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
  return result;
}
