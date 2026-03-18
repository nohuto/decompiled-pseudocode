/*
 * XREFs of PopNotifyConsoleUserPresent @ 0x1409BB660
 * Callers:
 *     PopUserPresentSetWorker @ 0x140492270 (PopUserPresentSetWorker.c)
 *     PopSetSystemAwayMode @ 0x140753DC0 (PopSetSystemAwayMode.c)
 *     NtSetThreadExecutionState @ 0x140AC6F10 (NtSetThreadExecutionState.c)
 *     PopSessionWinlogonNotification @ 0x140ACB1FC (PopSessionWinlogonNotification.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     RtlGetActiveConsoleId @ 0x14042F190 (RtlGetActiveConsoleId.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x1406A6FF0 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409BAC8C (TtmNotifyConsoleUserPresent.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409BB330 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PopDiagTraceNotifyConsoleUserPresent @ 0x1409BB8E0 (PopDiagTraceNotifyConsoleUserPresent.c)
 *     TtmIsEnabled @ 0x1409BBDE8 (TtmIsEnabled.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409BD01C (PopDiagTraceWin32kCalloutStart.c)
 *     PopIsStateTransitionBlockingThread @ 0x140B6A160 (PopIsStateTransitionBlockingThread.c)
 */

__int64 __fastcall PopNotifyConsoleUserPresent(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // r12
  unsigned int ActiveConsoleId; // eax
  int v6; // r15d
  int v7; // r14d
  char IsStateTransitionBlockingThread; // bl
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rbx
  char v12; // di
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-C4h]
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 OutputBuffer; // [rsp+50h] [rbp-B0h] BYREF
  __int128 *v20; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h]
  __int128 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  int InputBuffer; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h]
  char v27; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  int *v29; // [rsp+110h] [rbp+10h]
  int v30; // [rsp+118h] [rbp+18h]
  int v31; // [rsp+11Ch] [rbp+1Ch]
  int *v32; // [rsp+120h] [rbp+20h]
  int v33; // [rsp+128h] [rbp+28h]
  int v34; // [rsp+12Ch] [rbp+2Ch]

  LOBYTE(v16) = 0;
  v15 = 0;
  v4 = a1;
  LODWORD(v24) = 0;
  ActiveConsoleId = -1;
  v21 = 0LL;
  v14 = -1;
  v22 = 0LL;
  v23 = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    v14 = ActiveConsoleId;
    if ( ActiveConsoleId == -1 )
    {
      v12 = 2;
    }
    else
    {
      if ( (unsigned __int8)TtmIsEnabled() )
      {
        TtmNotifyConsoleUserPresent(v14, a2);
      }
      else
      {
        DWORD2(v23) = 0;
        v24 = 0LL;
        BYTE4(v22) = 0;
        LOBYTE(v15) = v4;
        v16 = a2;
        LODWORD(v22) = 1;
        DWORD2(v22) = 8;
        *(_QWORD *)&v23 = &v15;
        memset_0(&InputBuffer, 0, 0x60uLL);
        v6 = 0;
        v7 = 0;
        OutputBuffer = 0LL;
        IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
        LOBYTE(v9) = 1;
        PopDiagTraceWin32kCalloutStart(5, (unsigned int)&v21, 1, v9, (__int64)&v14);
        if ( IsStateTransitionBlockingThread
          || (InputBuffer = 21, ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) >= 0) )
        {
          v10 = PopInvokeWin32CalloutWithWatchdog(5, &v21, 1, (int *)&v14, OutputBuffer);
          v11 = OutputBuffer;
          v6 = v10;
          if ( OutputBuffer )
          {
            memset_0(&InputBuffer, 0, 0x60uLL);
            InputBuffer = 21;
            v26 = v11;
            v27 = 1;
            ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
          }
        }
        else
        {
          v7 = 1;
        }
        v20 = &v21;
        v18 = v7;
        v17 = v6;
        if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END) )
        {
          UserData.Reserved = 0;
          v31 = 0;
          v34 = 0;
          UserData.Ptr = (ULONGLONG)&v20;
          v30 = 4;
          v29 = &v17;
          v32 = &v18;
          v33 = 4;
          UserData.Size = 8;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END, 0LL, 3u, &UserData);
        }
      }
      ActiveConsoleId = v14;
      v12 = 0;
    }
  }
  else
  {
    v12 = 1;
  }
  LOBYTE(a3) = v4;
  LOBYTE(a1) = v12;
  return PopDiagTraceNotifyConsoleUserPresent(a1, ActiveConsoleId, a3, a2);
}
