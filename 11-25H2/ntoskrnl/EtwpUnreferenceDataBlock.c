/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140896A38
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x14079E660 (SendCaptureStateNotificationsWorker.c)
 *     EtwpReceiveReplyDataBlock @ 0x140893A8C (EtwpReceiveReplyDataBlock.c)
 *     EtwpRundownNotifications @ 0x140895250 (EtwpRundownNotifications.c)
 *     EtwpReceiveNotification @ 0x1408967E0 (EtwpReceiveNotification.c)
 *     EtwpNotifyGuid @ 0x140897964 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x14089CEA0 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1409E471C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409EED94 (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpQueueReply @ 0x1409FB2D0 (EtwpQueueReply.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
