/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140836678
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x1407ADE80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpQueueReply @ 0x1408320AC (EtwpQueueReply.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     EtwpReceiveNotification @ 0x14083641C (EtwpReceiveNotification.c)
 *     EtwpRundownNotifications @ 0x140837D94 (EtwpRundownNotifications.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140837F48 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpDeleteRegistrationObject @ 0x1408389E0 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
