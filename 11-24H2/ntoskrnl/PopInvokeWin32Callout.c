/*
 * XREFs of PopInvokeWin32Callout @ 0x1409A49A8
 * Callers:
 *     PopUserPresentSetWorker @ 0x14048D0E0 (PopUserPresentSetWorker.c)
 *     PopEventCalloutDispatch @ 0x1404A50B8 (PopEventCalloutDispatch.c)
 *     PoSessionBuiltinPanelState @ 0x1405D8290 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x1405D8328 (PoSessionEngagementUpdate.c)
 *     PoSessionPowerControl @ 0x14075E95C (PoSessionPowerControl.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x14099B3A0 (PopPowerRequestCallbackDisplayRequired.c)
 *     PopControlMonitor @ 0x14099E5D0 (PopControlMonitor.c)
 *     PopSendSessionInfo @ 0x1409A02DC (PopSendSessionInfo.c)
 *     PopDispatchStateCallout @ 0x1409A03B4 (PopDispatchStateCallout.c)
 *     PopBroadcastSessionInfo @ 0x140A90620 (PopBroadcastSessionInfo.c)
 *     PopLidSwitchChangeCallback @ 0x140A9CE60 (PopLidSwitchChangeCallback.c)
 * Callees:
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     ZwPowerInformation @ 0x1406A7F90 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409A1980 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409A366C (PopDiagTraceWin32kCalloutStart.c)
 *     PopDiagTraceWin32kCalloutEnd @ 0x1409A4B78 (PopDiagTraceWin32kCalloutEnd.c)
 *     PsGetNextSession @ 0x140A9F8E0 (PsGetNextSession.c)
 *     PopIsStateTransitionBlockingThread @ 0x140B6B870 (PopIsStateTransitionBlockingThread.c)
 */

__int64 __fastcall PopInvokeWin32Callout(unsigned int a1, __int128 *a2, int a3, int *a4)
{
  unsigned int v4; // edi
  unsigned int v9; // esi
  char IsStateTransitionBlockingThread; // bl
  int *v11; // r9
  int v12; // r8d
  __int64 v13; // rbx
  _QWORD *NextSession; // rbx
  __int64 v16; // r12
  __int64 OutputBuffer; // [rsp+38h] [rbp-39h] BYREF
  int InputBuffer; // [rsp+48h] [rbp-29h] BYREF
  __int64 v19; // [rsp+50h] [rbp-21h]
  char v20; // [rsp+A0h] [rbp+2Fh]
  int SessionId; // [rsp+F0h] [rbp+7Fh] BYREF

  v4 = 0;
  SessionId = 0;
  memset_0(&InputBuffer, 0, 0x60uLL);
  v9 = 0;
  OutputBuffer = 0LL;
  IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
  PopDiagTraceWin32kCalloutStart(a1, (__int64)a2, a3, a4 != 0LL, a4);
  if ( !IsStateTransitionBlockingThread )
  {
    InputBuffer = 21;
    if ( ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) < 0 )
    {
      v4 = 1;
      goto LABEL_9;
    }
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v11 = a4;
      v12 = 1;
    }
    else
    {
      NextSession = (_QWORD *)PsGetNextSession(0LL);
      if ( NextSession )
      {
        v16 = PdcCreateWatchdogAroundClientCall();
        do
        {
          if ( *(_QWORD *)(NextSession[93] + 160LL) == v16 )
          {
            SessionId = PsGetSessionId((__int64)NextSession);
            v9 = PopInvokeWin32CalloutWithWatchdog(a1, a2, 1, &SessionId, OutputBuffer);
          }
          NextSession = (_QWORD *)PsGetNextSession(NextSession);
        }
        while ( NextSession );
        goto LABEL_7;
      }
      v11 = 0LL;
      v12 = 2;
    }
  }
  else
  {
    v11 = 0LL;
    v12 = 0;
  }
  v9 = PopInvokeWin32CalloutWithWatchdog(a1, a2, v12, v11, OutputBuffer);
LABEL_7:
  v13 = OutputBuffer;
  if ( OutputBuffer )
  {
    memset_0(&InputBuffer, 0, 0x60uLL);
    InputBuffer = 21;
    v19 = v13;
    v20 = 1;
    ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
  }
LABEL_9:
  PopDiagTraceWin32kCalloutEnd(a1, a2, v9, v4);
  return v9;
}
