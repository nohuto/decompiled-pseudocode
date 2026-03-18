/*
 * XREFs of PopFxReferenceDevice @ 0x140281350
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1402812E8 (PopFxQueueWorkOrder.c)
 *     PopFxIdleWorkerTail @ 0x1403492B0 (PopFxIdleWorkerTail.c)
 *     PopFxClearDeviceConstraints @ 0x140354884 (PopFxClearDeviceConstraints.c)
 *     PopFxActivateDevice @ 0x14047D560 (PopFxActivateDevice.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x14048DEFC (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140490CC8 (PopFxBuildDripsBlockingDeviceList.c)
 *     PoFxAddComponentRelation @ 0x1405CB690 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405CB900 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CBD40 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CBFA0 (PoFxRemoveDeviceRelation.c)
 *     PopFxGetParentFxDevice @ 0x1405CCC4C (PopFxGetParentFxDevice.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405CCEDC (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
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
