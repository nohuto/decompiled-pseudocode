/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140835FF0
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x1407ADA30 (SendCaptureStateNotificationsWorker.c)
 *     EtwpRundownNotifications @ 0x1408348C0 (EtwpRundownNotifications.c)
 *     EtwpReceiveNotification @ 0x140835D94 (EtwpReceiveNotification.c)
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x14083C380 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14083ECD8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409F6160 (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpQueueReply @ 0x1409F6EB4 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x140A712D0 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
