/*
 * XREFs of TtmiLogError @ 0x140903A9C
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140768290 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140768590 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140768650 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1407687DC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1407689AC (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x140768C24 (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x140768D10 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x140768E2C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140768EDC (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x140769130 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x140769690 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x140769760 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140769BB0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiAcquireCurrentSession @ 0x140769DB0 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x140769F5C (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x14076A01C (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x14076A2B0 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x14076A34C (TtmiWriteEventToAllQueues.c)
 *     TtmpFindPowerRequestEntryById @ 0x14076A664 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x14076A838 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSetDisplayRequestEnded @ 0x14076AEC4 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x14076B0A4 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14076B174 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x14076B238 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B2E4 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x14076B410 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x14076B4B8 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x14076B5F8 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x14076B6E8 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x14076B794 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x14076B858 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x14076B8F4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x14076B9B0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14076BA5C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x14076BB10 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x14076BBCC (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateTerminal @ 0x14076F4E8 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x14076F9C0 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x14076FEC8 (TtmiTerminalMonitorControl.c)
 *     TtmiCreateEventQueue @ 0x1407707B4 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140770A58 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140770BA4 (TtmiWriteEventToSingleQueue.c)
 *     TtmNotifyLowPowerStateExited @ 0x140902F78 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140902FF4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140903084 (TtmNotifySessionTerminalInput.c)
 *     TtmInitCurrentSession @ 0x140903118 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x140903408 (TtmDispatchApi.c)
 *     TtmSessionMonitorControl @ 0x140903874 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x140903A00 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140903D68 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409BAC8C (TtmNotifyConsoleUserPresent.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1404397B4 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
    && (!dword_140FD71DC || dword_140FD71DC == a2)
    && (!dword_140FD71E0 || dword_140FD71E0 == a3)
    && (!dword_140FD71E4 || dword_140FD71E4 == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140FD78B8 > 5 && tlgKeywordOn((__int64)&dword_140FD78B8, 2LL) )
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD78B8, (unsigned __int8 *)&word_14004FA46, 0LL, 0LL, 7u, &v14);
  }
}
