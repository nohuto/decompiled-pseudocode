/*
 * XREFs of PopFxIdleWorker @ 0x1403B4B50
 * Callers:
 *     PopFxIdleComponent @ 0x1403B4888 (PopFxIdleComponent.c)
 *     PopFxComponentWork @ 0x1403B4AD0 (PopFxComponentWork.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x1404EB37C (PopFxIdleWorkerTail.c)
 *     Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405CFD88 (Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1405D0E60 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1405D0E90 (PopFxDeviceCriticalRegionLeave.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxIdleWorker(__int64 *BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // rdi
  KIRQL v5; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // si
  __int64 result; // rax

  v4 = *(_QWORD *)(BugCheckParameter2[109] + 8LL * a2);
  if ( (unsigned int)Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline() )
    PopFxDeviceCriticalRegionEnter(BugCheckParameter2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 88), 0x40000000, 0x80000000) != 0x80000000 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 128), v5);
    goto LABEL_12;
  }
  KeResetEvent((PRKEVENT)(v4 + 104));
  *(_DWORD *)(v4 + 136) = 2;
  v8 = 0;
  if ( BugCheckParameter2[15] )
  {
    guard_dispatch_icall_no_overrides(BugCheckParameter2[24], a2, v6, v7);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFF) != 1 )
    {
      PopFxAddLogEntry(BugCheckParameter2[6], a2, 13, 0LL);
      goto LABEL_10;
    }
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFE);
  }
  v8 = 1;
LABEL_10:
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 128), v5);
  if ( v8 )
    PopFxIdleWorkerTail((ULONG_PTR)BugCheckParameter2);
LABEL_12:
  result = Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
  return result;
}
