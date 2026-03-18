/*
 * XREFs of ImpRpcAsyncUnInit @ 0x140149504
 * Callers:
 *     ImpInitializeWork @ 0x1401341E0 (ImpInitializeWork.c)
 *     ImpRpcDisconnect @ 0x140145ED8 (ImpRpcDisconnect.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void ImpRpcAsyncUnInit()
{
  __int64 InputMonitorSessionState; // rbx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  void *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_QWORD *)(InputMonitorSessionState + 520) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ExFreePoolWithTag(*(PVOID *)(InputMonitorSessionState + 520), 0);
  *(_QWORD *)(InputMonitorSessionState + 520) = 0LL;
  if ( (unsigned int)dword_14029B1B0 > 5 )
  {
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_14029B1B8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_14029B1B8;
    v3 = &unk_14028174F;
    UserData.Reserved = 2;
    v4 = 22;
    v5 = 1;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
}
