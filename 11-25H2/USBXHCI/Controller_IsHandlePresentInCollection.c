/*
 * XREFs of Controller_IsHandlePresentInCollection @ 0x140032728
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400322E0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140043890 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     Controller_IsHandlePresentInCollectionLocked @ 0x140032778 (Controller_IsHandlePresentInCollectionLocked.c)
 */

char __fastcall Controller_IsHandlePresentInCollection(__int64 a1, __int64 a2)
{
  DynamicLock_Acquire(*(_QWORD *)(a1 + 1080));
  LOBYTE(a2) = Controller_IsHandlePresentInCollectionLocked(*(_QWORD *)(a1 + 1096), a2);
  DynamicLock_Release(*(_QWORD *)(a1 + 1080));
  return a2;
}
