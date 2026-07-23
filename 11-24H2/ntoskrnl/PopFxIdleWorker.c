/*
 * XREFs of PopFxIdleWorker @ 0x1403A9020
 * Callers:
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PopFxComponentWork @ 0x1403A8FA0 (PopFxComponentWork.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1405CE580 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1405CE5B0 (PopFxDeviceCriticalRegionLeave.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxIdleWorker(__int64 *BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // rbx
  KIRQL v5; // r15
  char v6; // si

  v4 = *(_QWORD *)(BugCheckParameter2[109] + 8LL * a2);
  PopFxDeviceCriticalRegionEnter();
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 88), 0x40000000, 0x80000000) != 0x80000000 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 128), v5);
    return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
  }
  KeResetEvent((PRKEVENT)(v4 + 104));
  *(_DWORD *)(v4 + 136) = 2;
  v6 = 0;
  if ( BugCheckParameter2[15] )
  {
    guard_dispatch_icall_no_overrides(BugCheckParameter2[24], a2);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFF) != 1 )
    {
      PopFxAddLogEntry(BugCheckParameter2[6], a2, 13, 0LL);
      goto LABEL_8;
    }
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFE);
  }
  v6 = 1;
LABEL_8:
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 128), v5);
  if ( v6 )
    PopFxIdleWorkerTail((ULONG_PTR)BugCheckParameter2);
  return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
}
