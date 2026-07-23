/*
 * XREFs of TtmiLogError @ 0x14099E04C
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407684B0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407687B0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140768870 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1407689FC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x140768BCC (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x140768E44 (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x140768F30 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x14076904C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1407690FC (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x140769350 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1407698B0 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x140769980 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140769DD0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiAcquireCurrentSession @ 0x140769FD0 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x14076A17C (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x14076A23C (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x14076A4D0 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x14076A56C (TtmiWriteEventToAllQueues.c)
 *     TtmpFindPowerRequestEntryById @ 0x14076A884 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x14076AA58 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSetDisplayRequestEnded @ 0x14076B0E4 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x14076B2C4 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14076B394 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x14076B458 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B504 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x14076B630 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x14076B6D8 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x14076B818 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x14076B908 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x14076B9B4 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x14076BA78 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x14076BB14 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x14076BBD0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14076BC7C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x14076BD30 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x14076BDEC (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateTerminal @ 0x14076F708 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x14076FBE0 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1407700E8 (TtmiTerminalMonitorControl.c)
 *     TtmiCreateEventQueue @ 0x1407709D4 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140770C78 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140770DC4 (TtmiWriteEventToSingleQueue.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x14099D3C4 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifyLowPowerStateExited @ 0x14099D528 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x14099D5A4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x14099D634 (TtmNotifySessionTerminalInput.c)
 *     TtmInitCurrentSession @ 0x14099D6C8 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x14099D9B8 (TtmDispatchApi.c)
 *     TtmSessionMonitorControl @ 0x14099DE24 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x14099DFB0 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x14099E1A4 (TtmpAcquireSessionById.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409A12DC (TtmNotifyConsoleUserPresent.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall TtmiLogError(const CHAR *a1, int a2, int a3, int a4)
{
  int SessionId; // eax
  int v9; // r8d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  _BYTE v18[16]; // [rsp+70h] [rbp-9h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( TtmpBreakOnError
    && (!dword_140FD81DC || dword_140FD81DC == a2)
    && (!dword_140FD81E0 || dword_140FD81E0 == a3)
    && (!dword_140FD81E4 || dword_140FD81E4 == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140FD88C8 > 5 && tlgKeywordOn((__int64)&dword_140FD88C8, 2LL) )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v17 = 0;
    v10 = SessionId;
    v16 = 4;
    v15 = &v10;
    tlgCreate1Sz_char((__int64)v18, a1);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v11;
    v20 = v9;
    v22 = &v12;
    v25 = &v13;
    v23 = v9;
    v26 = v9;
    v11 = a2;
    v12 = a3;
    v13 = a4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD88C8, (unsigned __int8 *)byte_140050CA9, 0LL, 0LL, 7u, &v14);
  }
}
