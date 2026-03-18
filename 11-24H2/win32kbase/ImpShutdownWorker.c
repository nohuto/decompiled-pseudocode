/*
 * XREFs of ImpShutdownWorker @ 0x140145278
 * Callers:
 *     ImSessionStart @ 0x140133EB4 (ImSessionStart.c)
 *     ?ShutdownImWorker@@YAJXZ @ 0x1401451F0 (-ShutdownImWorker@@YAJXZ.c)
 * Callees:
 *     ImpAcquireLock @ 0x140012564 (ImpAcquireLock.c)
 *     ImpReleaseLock @ 0x1400125B8 (ImpReleaseLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 ImpShutdownWorker()
{
  __int64 InputMonitorSessionState; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  int v4; // eax
  int v5; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v6[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  int *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  _DWORD *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ImpAcquireLock(InputMonitorSessionState + 72);
  if ( !*(_BYTE *)(InputMonitorSessionState + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *(_BYTE *)(InputMonitorSessionState + 48) = 0;
  ImpReleaseLock(InputMonitorSessionState + 72, v1, v2);
  if ( !*(_QWORD *)(InputMonitorSessionState + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeSetEvent(*(PRKEVENT *)(InputMonitorSessionState + 24), 0, 0);
  if ( (unsigned int)dword_14029B1B0 > 5 )
  {
    v4 = *(unsigned __int8 *)(InputMonitorSessionState + 561);
    v14 = 0;
    v17 = 0;
    EventDescriptor.Keyword = 0LL;
    v5 = v4;
    v12 = &v5;
    v6[0] = *(_DWORD *)InputMonitorSessionState;
    v15 = v6;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_14029B1B8;
    v13 = 4;
    v16 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_14029B1B8;
    v9 = &unk_1402814DB;
    UserData.Reserved = 2;
    v10 = 46;
    v11 = 1;
    v6[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0LL;
}
