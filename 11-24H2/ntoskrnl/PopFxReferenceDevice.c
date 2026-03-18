/*
 * XREFs of PopFxReferenceDevice @ 0x14029F788
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14029F720 (PopFxQueueWorkOrder.c)
 *     PopFxActivateComponentWorker @ 0x1403B6358 (PopFxActivateComponentWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x14048DAD8 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140490504 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 *     PopFxClearDeviceConstraints @ 0x1404A6344 (PopFxClearDeviceConstraints.c)
 *     PopFxIdleWorkerTail @ 0x1404EB37C (PopFxIdleWorkerTail.c)
 *     PoFxAddComponentRelation @ 0x1405CFDE0 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405D0050 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405D0490 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405D06F0 (PoFxRemoveDeviceRelation.c)
 *     PopFxGetParentFxDevice @ 0x1405D13FC (PopFxGetParentFxDevice.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405D168C (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
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
