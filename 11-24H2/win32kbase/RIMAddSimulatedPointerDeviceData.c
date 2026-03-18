/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1401DE95C
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x140180484 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401EE1CC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMSetContactBoundary @ 0x1400AD560 (RIMSetContactBoundary.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CHAR **a5,
        ULONG *a6)
{
  __int64 v6; // rdi
  __int64 v10; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  ULONG ReportLength; // esi
  int v13; // ebx
  CHAR *v14; // rax
  CHAR *v15; // rdi
  char v16; // di
  bool v17; // si
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  __int16 Report; // [rsp+30h] [rbp-48h]
  char v23; // [rsp+40h] [rbp-38h]

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3280);
  if ( a2 != *(_QWORD *)(v6 + 456) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3281);
  v10 = *(_QWORD *)(v6 + 440);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v10 + 16);
  ReportLength = *(unsigned __int16 *)(v10 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
    || (v13 = RIMSetContactBoundary(a2, (_DWORD *)(a4 + 128), *(_QWORD *)(a3 + 2620), 0, 0), v13 >= 0) )
  {
    v14 = (CHAR *)Win32AllocPoolZInitImpl(256LL, *(unsigned __int16 *)(*(_QWORD *)(v6 + 440) + 44LL), 0x63707352u);
    v15 = v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    v13 = HidP_SetUsageValue(HidP_Input, 1u, 0, 0x30u, *(_DWORD *)(a3 + 2620), PreparsedData, v14, ReportLength);
    if ( v13 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = v13;
        v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        Report = 41;
        goto LABEL_25;
      }
    }
    else
    {
      v13 = HidP_SetUsageValue(HidP_Input, 1u, 0, 0x31u, *(_DWORD *)(a3 + 2624), PreparsedData, v15, ReportLength);
      if ( v13 >= 0 )
      {
        *a5 = v15;
        *a6 = ReportLength;
        return (unsigned int)v13;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = v13;
        v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        Report = 40;
LABEL_25:
        LOBYTE(v19) = v17;
        LOBYTE(v18) = v16;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v19,
          v20,
          3,
          1,
          Report,
          (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
          v23);
      }
    }
  }
  return (unsigned int)v13;
}
