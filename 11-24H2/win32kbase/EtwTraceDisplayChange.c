/*
 * XREFs of EtwTraceDisplayChange @ 0x140091F00
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x140090AE4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AE764 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140093B30 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     McTemplateK0qqhhh_EtwWriteTransfer @ 0x140093B6C (McTemplateK0qqhhh_EtwWriteTransfer.c)
 *     ?DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z @ 0x1401B3F10 (-DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z.c)
 */

void __fastcall EtwTraceDisplayChange(__int64 a1)
{
  __int64 UserSessionState; // rax
  int v2; // ecx
  int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x2000000000008000LL) != 0
    && (qword_14029ADB8 & 0x2000000000008000LL) == qword_14029ADB8 )
  {
    UserSessionState = W32GetUserSessionState(a1);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0qqhhh_EtwWriteTransfer(
        v2,
        *(_DWORD *)(UserSessionState + 2832),
        v3,
        *(_DWORD *)(UserSessionState + 2824),
        *(_DWORD *)(UserSessionState + 2832),
        *(_WORD *)(UserSessionState + 2892),
        *(_WORD *)(UserSessionState + 2896),
        *(_WORD *)(UserSessionState + 2900));
  }
  if ( (unsigned __int8)InputTraceLogging::Enabled(2LL) )
  {
    v5 = W32GetUserSessionState(v4);
    InputTraceLogging::Power::DisplayChange((const struct _POWER_DISPLAY_STATE *)(v5 + 2824));
  }
}
