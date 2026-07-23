/*
 * XREFs of PopFxReferenceDevice @ 0x1403AA248
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1402AE658 (PopFxActivateComponentWorker.c)
 *     PopFxQueueWorkOrder @ 0x1403AA1E0 (PopFxQueueWorkOrder.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140488370 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x14048AB44 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 *     PopFxClearDeviceConstraints @ 0x1404CDF98 (PopFxClearDeviceConstraints.c)
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 *     PoFxAddComponentRelation @ 0x1405CD500 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405CD770 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CDBB0 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CDE10 (PoFxRemoveDeviceRelation.c)
 *     PopFxGetParentFxDevice @ 0x1405CEB1C (PopFxGetParentFxDevice.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405CEDAC (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxReferenceDevice(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 244));
  if ( *(_BYTE *)(BugCheckParameter2 + 240) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
    PopFxBugCheck(0x607uLL, BugCheckParameter2, 0xFFFFFFFFC0000056uLL, 0LL);
  }
  result = a2;
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 4LL * a2 + 272));
  return result;
}
