/*
 * XREFs of EtwTraceDisplayChange @ 0x1C0138EE0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0132E8C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0133290 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z @ 0x1C00D0E00 (-DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z.c)
 *     McTemplateK0qqhhh_EtwWriteTransfer @ 0x1C013D648 (McTemplateK0qqhhh_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceDisplayChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // bp
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14; // bx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rax

  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C0283068 - 1) > 2u
    && (qword_1C0283050 & 0x2000000000008000LL) != 0
    && (qword_1C0283058 & 0x2000000000008000LL) == qword_1C0283058 )
  {
    v4 = *(_WORD *)(SGDGetUserSessionState(a1, 0x2000000000008000LL, a3, a4) + 3076);
    v11 = *(_WORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 3080);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v14 = *(_WORD *)(SGDGetUserSessionState(v10, v9, v12, v13) + 3084);
      v19 = *(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 3024);
      v24 = SGDGetUserSessionState(v21, v20, v22, v23);
      McTemplateK0qqhhh_EtwWriteTransfer(v26, v25, v27, *(_DWORD *)(v24 + 3016), v19, v4, v11, v14);
    }
    v28 = SGDGetUserSessionState(v10, v9, v12, v13);
    InputTraceLogging::Power::DisplayChange((const struct _POWER_DISPLAY_STATE *)(v28 + 3016));
  }
}
