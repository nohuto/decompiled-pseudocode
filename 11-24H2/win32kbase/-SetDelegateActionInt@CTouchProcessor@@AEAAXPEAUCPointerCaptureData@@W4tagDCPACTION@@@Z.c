/*
 * XREFs of ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1402058A4
 * Callers:
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1400D31E8 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1401F99B4 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D900C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, int a3)
{
  char v4; // bp
  char v5; // bl
  __int64 UserSessionState; // rax
  int v7; // eax
  int v8; // [rsp+28h] [rbp-40h]

  switch ( a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 304) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 304) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 304) |= 4u;
      break;
    case 4:
      if ( (*(_DWORD *)(a2 + 304) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12650);
      if ( (*(_DWORD *)(a2 + 304) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12651);
      if ( (*(_DWORD *)(a2 + 304) & 8) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12652);
      *(_DWORD *)(a2 + 304) |= 8u;
      break;
    case 5:
      if ( !gbIgnoreStressedOutStuff )
      {
        v7 = *(_DWORD *)(a2 + 304);
        if ( (v7 & 4) == 0 && (v7 & 8) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12658);
      }
      *(_DWORD *)(a2 + 304) |= 0x10u;
      break;
    case 6:
      if ( (*(_DWORD *)(a2 + 304) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12665);
      *(_DWORD *)(a2 + 304) |= 0x20u;
      break;
    default:
      v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_L(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v4,
          v5,
          *(_QWORD *)(UserSessionState + 69400),
          2u,
          v8,
          0x126u,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      }
      break;
  }
}
