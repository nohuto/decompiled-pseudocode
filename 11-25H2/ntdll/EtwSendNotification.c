/*
 * XREFs of EtwSendNotification @ 0x1800EF950
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EFBE8 (EtwpReceiveReplyDataBlock.c)
 *     _tlgKeywordOn @ 0x18010FC38 (_tlgKeywordOn.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // r15
  ULONG Timeout; // esi
  char v8; // r14
  NTSTATUS v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG v14; // edi
  ULONG ReplyCount; // r15d
  void *Reserved2; // r14
  ULONG v18; // edi
  __int64 v19; // r8
  _BYTE *v20; // rax
  __int64 v21; // r9
  ETW_NOTIFICATION_TYPE v22; // [rsp+40h] [rbp-C0h]
  ULONG v23; // [rsp+50h] [rbp-B0h] BYREF
  ETW_NOTIFICATION_TYPE NotificationType; // [rsp+54h] [rbp-ACh] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp-A8h] BYREF
  ETW_NOTIFICATION_TYPE v26; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  _BYTE v29[128]; // [rsp+70h] [rbp-90h] BYREF
  _EVENT_DATA_DESCRIPTOR v30[2]; // [rsp+F0h] [rbp-10h] BYREF
  GUID *p_DestinationGuid; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  ETW_NOTIFICATION_TYPE *p_NotificationType; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  ULONG *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  ETW_NOTIFICATION_TYPE *v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]

  ReplyRequested = DataBlock->ReplyRequested;
  Timeout = DataBlock->Timeout;
  v8 = 1;
  v28 = (__int64)ReplyReceived;
  v27 = (__int64)ReplySizeNeeded;
  ReturnLength = 0;
  if ( ReplyRequested == 1 )
  {
    DataBlock->Reserved2 = 0LL;
    if ( !Timeout )
      Timeout = 60000;
  }
  v11 = NtTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &ReturnLength);
  if ( v11 )
    v14 = RtlNtStatusToDosError(v11);
  else
    v14 = 0;
  if ( ReplyRequested )
  {
    ReplyCount = DataBlock->ReplyCount;
    if ( v14 )
    {
      if ( (unsigned int)dword_1801CE6F0 > 2 )
      {
        if ( (byte_1801CE700 & 0xA) == 0 || (qword_1801CE708 & 0xA) != qword_1801CE708 )
          v8 = 0;
        if ( v8 )
        {
          p_DestinationGuid = &DataBlock->DestinationGuid;
          NotificationType = DataBlock->NotificationType;
          p_NotificationType = &NotificationType;
          v34 = 4LL;
          v36 = 4LL;
          v35 = &v23;
          v32 = 16LL;
          v23 = v14;
          tlgWriteTransfer_EtwEventWriteTransfer(
            (__int64)&dword_1801CE6F0,
            (unsigned __int8 *)dword_1801A4598,
            v12,
            v13,
            5u,
            v30);
        }
      }
    }
    else
    {
      Reserved2 = (void *)DataBlock->Reserved2;
      if ( ReplyCount )
      {
        v18 = 120;
        memset_thunk_772440563353939046(v29, 0, 0x78uLL);
        if ( (unsigned int)dword_1801CE6F0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801CE6F0, 10LL) )
        {
          v32 = 16LL;
          p_DestinationGuid = &DataBlock->DestinationGuid;
          v26 = DataBlock->NotificationType;
          v35 = &v23;
          p_NotificationType = &v26;
          v37 = &NotificationType;
          v34 = 4LL;
          v23 = ReplyCount;
          v36 = 4LL;
          NotificationType = Timeout;
          v38 = 4LL;
          tlgWriteTransfer_EtwEventWriteTransfer(
            (__int64)&dword_1801CE6F0,
            (unsigned __int8 *)dword_1801A45E7,
            v19,
            v21,
            6u,
            v30);
        }
        v20 = v29;
        v22 = DataBlock->NotificationType;
        if ( DataBlock->NotificationType != EtwNotificationTypeEnable )
          v18 = ReceiveDataBlockSize;
        if ( v22 != EtwNotificationTypeEnable )
          v20 = ReceiveDataBlock;
        LOBYTE(v19) = v22 == EtwNotificationTypeEnable;
        v14 = EtwpReceiveReplyDataBlock((int)Reserved2, Timeout, v19, ReplyCount, v20, v18, v28, v27, v22);
      }
      if ( Reserved2 )
        NtClose(Reserved2);
    }
  }
  return v14;
}
