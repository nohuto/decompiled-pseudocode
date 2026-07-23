/*
 * XREFs of PopPowerAggregatorNotifyCsStateExited @ 0x140A2C294
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140A2C1C0 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     PoBlockConsoleSwitchEx @ 0x140311910 (PoBlockConsoleSwitchEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x14069BD20 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x140962B30 (PopInvokeWin32CalloutWithWatchdog.c)
 *     TtmIsEnabled @ 0x140964038 (TtmIsEnabled.c)
 *     PopDiagTraceWin32kCalloutStart @ 0x140965310 (PopDiagTraceWin32kCalloutStart.c)
 *     PopDispatchStateCallout @ 0x140A2C7C0 (PopDispatchStateCallout.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A2CFA4 (TtmNotifyLowPowerStateExited.c)
 *     PopIsStateTransitionBlockingThread @ 0x140B5A66C (PopIsStateTransitionBlockingThread.c)
 */

__int64 PopPowerAggregatorNotifyCsStateExited()
{
  ULONG v0; // esi
  int v1; // edi
  char IsStateTransitionBlockingThread; // bl
  ULONG v3; // eax
  __int64 v4; // rbx
  unsigned int v6; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v7; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+48h] [rbp-C0h] BYREF
  __int64 OutputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  __int128 OutputBuffer_8; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v11; // [rsp+68h] [rbp-A0h]
  __int128 v12; // [rsp+78h] [rbp-90h]
  __int64 v13; // [rsp+88h] [rbp-80h]
  __int128 *p_OutputBuffer_8; // [rsp+90h] [rbp-78h] BYREF
  int InputBuffer; // [rsp+98h] [rbp-70h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-68h]
  char v17; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v19; // [rsp+108h] [rbp+0h]
  __int64 v20; // [rsp+118h] [rbp+10h]
  __int64 v21; // [rsp+120h] [rbp+18h]

  v19 = 0LL;
  LODWORD(v13) = 0;
  v20 = 0LL;
  v7 = 0;
  DWORD2(v19) = 1;
  OutputBuffer_8 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  UserData = 0LL;
  PoBlockConsoleSwitchEx((__int64)&UserData, &v7, 0LL);
  v6 = v7;
  if ( TtmIsEnabled() )
  {
    TtmNotifyLowPowerStateExited(v6);
  }
  else
  {
    v13 = 0LL;
    v11 = 0LL;
    LODWORD(v11) = 5;
    BYTE4(v11) = 0;
    DWORD2(v11) = 0;
    v12 = 0uLL;
    OutputBuffer_8 = 0LL;
    memset_0(&InputBuffer, 0, 0x60uLL);
    v0 = 0;
    OutputBuffer = 0LL;
    v1 = 0;
    IsStateTransitionBlockingThread = PopIsStateTransitionBlockingThread();
    PopDiagTraceWin32kCalloutStart(5, (__int64)&OutputBuffer_8, 1u, 1, (int *)&v6);
    if ( IsStateTransitionBlockingThread
      || (InputBuffer = 21, ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u) >= 0) )
    {
      v3 = PopInvokeWin32CalloutWithWatchdog(5, &OutputBuffer_8, 1, (int *)&v6, OutputBuffer);
      v4 = OutputBuffer;
      v0 = v3;
      if ( OutputBuffer )
      {
        memset_0(&InputBuffer, 0, 0x60uLL);
        InputBuffer = 21;
        v16 = v4;
        v17 = 1;
        ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
      }
    }
    else
    {
      v1 = 1;
    }
    p_OutputBuffer_8 = &OutputBuffer_8;
    LODWORD(v8) = v1;
    v7 = v0;
    if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END) )
    {
      UserData.Ptr = (ULONGLONG)&p_OutputBuffer_8;
      *(_QWORD *)&UserData.Size = 8LL;
      *(_QWORD *)&v19 = &v7;
      *((_QWORD *)&v19 + 1) = 4LL;
      v20 = (__int64)&v8;
      v21 = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END, 0LL, 3u, &UserData);
    }
  }
  v19 = 0LL;
  LODWORD(v8) = v6;
  UserData = 0LL;
  DWORD2(v19) = 1;
  v20 = 7LL;
  return PopDispatchStateCallout(&UserData, &v8);
}
