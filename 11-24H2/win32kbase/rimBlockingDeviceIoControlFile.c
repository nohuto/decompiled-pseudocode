/*
 * XREFs of rimBlockingDeviceIoControlFile @ 0x140144F3C
 * Callers:
 *     RIMLoadDeviceLegacyInfo @ 0x1401D2038 (RIMLoadDeviceLegacyInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall rimBlockingDeviceIoControlFile(HANDLE FileHandle, __int64 a2, __int64 a3, __int64 a4, PVOID a5)
{
  __int64 v6; // rcx
  NTSTATUS Status; // ebx
  bool v8; // di
  bool v9; // si
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  __int16 v14; // [rsp+38h] [rbp-19h]
  char OutputBuffer; // [rsp+48h] [rbp-9h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  void *EventHandle; // [rsp+B8h] [rbp+67h] BYREF

  EventHandle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  IoStatusBlock = 0LL;
  ObjectAttributes.Attributes = 512;
  Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( Status < 0 )
  {
    v8 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v6 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v6 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v8 = 1;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      OutputBuffer = Status;
      v12 = *(_QWORD *)(W32GetUserSessionState(v6) + 19392);
      v14 = 24;
LABEL_30:
      LOBYTE(v11) = v9;
      LOBYTE(v10) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v11,
        v12,
        2,
        1,
        v14,
        (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids,
        OutputBuffer);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  Status = ZwDeviceIoControlFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, 0xB01A8u, 0LL, 0, a5, 0xCu);
  if ( Status != 259 )
  {
LABEL_21:
    if ( Status < 0 )
    {
      v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        OutputBuffer = Status;
        v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        v14 = 26;
        goto LABEL_30;
      }
    }
    goto LABEL_31;
  }
  Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
  if ( Status >= 0 )
  {
    Status = IoStatusBlock.Status;
    goto LABEL_21;
  }
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    OutputBuffer = Status;
    v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
    v14 = 25;
    goto LABEL_30;
  }
LABEL_31:
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)Status;
}
