/*
 * XREFs of Controller_IsHandlePresentInCollection @ 0x140014248
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x140013E00 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1400433E0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     Controller_IsHandlePresentInCollectionLocked @ 0x140014298 (Controller_IsHandlePresentInCollectionLocked.c)
 */

char __fastcall Controller_IsHandlePresentInCollection(__int64 a1, __int64 a2)
{
  DynamicLock_Acquire(*(_QWORD *)(a1 + 1072));
  LOBYTE(a2) = Controller_IsHandlePresentInCollectionLocked(*(_QWORD *)(a1 + 1088), a2);
  DynamicLock_Release(*(_QWORD *)(a1 + 1072));
  return a2;
}
