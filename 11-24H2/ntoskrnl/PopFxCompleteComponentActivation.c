/*
 * XREFs of PopFxCompleteComponentActivation @ 0x1402BFDF0
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1402AE658 (PopFxActivateComponentWorker.c)
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PopFxActivateComponentDependents @ 0x1403A91E0 (PopFxActivateComponentDependents.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1405CE580 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1405CE5B0 (PopFxDeviceCriticalRegionLeave.c)
 */

__int64 __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v6; // rdx

  PopFxDeviceCriticalRegionEnter();
  _InterlockedOr((volatile signed __int32 *)(v6 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(v6 + 104), 0, 0);
  if ( a3 )
    PopFxActivateComponentDependents(a2);
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  PopFxDereferenceDevice(BugCheckParameter2, 8LL);
  return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
}
