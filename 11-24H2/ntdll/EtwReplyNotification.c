/*
 * XREFs of EtwReplyNotification @ 0x180109CF0
 * Callers:
 *     EtwDeliverDataBlock @ 0x18004AB50 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180163B00 (NtTraceControl.c)
 */

ULONG __cdecl EtwReplyNotification(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG NotificationSize; // r8d
  ULONG v2; // ebx
  NTSTATUS v3; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  NotificationSize = Notification->NotificationSize;
  v2 = 0;
  ReturnLength = 0;
  v3 = NtTraceControl(EtwSendReplyDataBlock, Notification, NotificationSize, 0LL, 0, &ReturnLength);
  if ( v3 )
    return RtlNtStatusToDosError(v3);
  return v2;
}
