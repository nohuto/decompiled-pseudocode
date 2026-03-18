/*
 * XREFs of PopPowerAggregatorNotifyCsStateExited @ 0x140902C54
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140902B80 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     PoBlockConsoleSwitchEx @ 0x14042F0D4 (PoBlockConsoleSwitchEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x1406A6FF0 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     TtmNotifyLowPowerStateExited @ 0x140902F78 (TtmNotifyLowPowerStateExited.c)
 *     PopDispatchStateCallout @ 0x1409B9D64 (PopDispatchStateCallout.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409BB330 (PopInvokeWin32CalloutWithWatchdog.c)
 *     TtmIsEnabled @ 0x1409BBDE8 (TtmIsEnabled.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x1409BD01C (PopDiagTraceWin32kCalloutStart.c)
 *     PopIsStateTransitionBlockingThread @ 0x140B6A160 (PopIsStateTransitionBlockingThread.c)
 */

__int64 PopPowerAggregatorNotifyCsStateExited()
{
  unsigned int v0; // esi
  int v1; // edi
  char IsStateTransitionBlockingThread; // bl
  int v3; // r9d
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v7; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 OutputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  __int128 OutputBuffer_8; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v12; // [rsp+68h] [rbp-A0h]
  __int128 v13; // [rsp+78h] [rbp-90h]
  __int64 v14; // [rsp+88h] [rbp-80h]
  __int128 *p_OutputBuffer_8; // [rsp+90h] [rbp-78h] BYREF
  int InputBuffer; // [rsp+98h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-68h]
  char v18; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v20; // [rsp+108h] [rbp+0h]
  __int64 v21; // [rsp+118h] [rbp+10h]
  __int64 v22; // [rsp+120h] [rbp+18h]

  v20 = 0LL;
  LODWORD(v14) = 0;
  v21 = 0LL;
  v8 = 0;
  DWORD2(v20) = 1;
  OutputBuffer_8 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  UserData = 0LL;
  PoBlockConsoleSwitchEx((__int64)&UserData, &v8, 0LL);
  v7 = v8;
  if ( (unsigned __int8)TtmIsEnabled() )
  {
    TtmNotifyLowPowerStateExited(v7);
  }
  else
  {
    v14 = 0LL;
    v12 = 0LL;
    LODWORD(v12) = 5;
    BYTE4(v12) = 0;
    DWORD2(v12) = 0;
    v13 = 0uLL;
    OutputBuffer_8 = 0LL;
    memset_0(&InputBuffer, 0, 0x60uLL);
    v0 = 0;
    OutputBuffer = 0LL;
    v1 = 0;
    IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
    LOBYTE(v3) = 1;
    PopDiagTraceWin32kCalloutStart(5, (unsigned int)&OutputBuffer_8, 1, v3, (__int64)&v7);
    if ( IsStateTransitionBlockingThread
      || (InputBuffer = 21, ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) >= 0) )
    {
      v4 = PopInvokeWin32CalloutWithWatchdog(5, (unsigned int)&OutputBuffer_8, 1, (unsigned int)&v7, OutputBuffer);
      v5 = OutputBuffer;
      v0 = v4;
      if ( OutputBuffer )
      {
        memset_0(&InputBuffer, 0, 0x60uLL);
        InputBuffer = 21;
        v17 = v5;
        v18 = 1;
        ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
      }
    }
    else
    {
      v1 = 1;
    }
    p_OutputBuffer_8 = &OutputBuffer_8;
    LODWORD(v9) = v1;
    v8 = v0;
    if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END) )
    {
      UserData.Ptr = (ULONGLONG)&p_OutputBuffer_8;
      *(_QWORD *)&UserData.Size = 8LL;
      *(_QWORD *)&v20 = &v8;
      *((_QWORD *)&v20 + 1) = 4LL;
      v21 = (__int64)&v9;
      v22 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END, 0LL, 3u, &UserData);
    }
  }
  v20 = 0LL;
  LODWORD(v9) = v7;
  UserData = 0LL;
  DWORD2(v20) = 1;
  v21 = 7LL;
  return PopDispatchStateCallout(&UserData, &v9);
}
