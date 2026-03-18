/*
 * XREFs of DxgkRequestSyncDisplaySwitchCallout @ 0x1401D7660
 * Callers:
 *     ?DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x14019D3E0 (-DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x140240710 (DpiFdoExcludeAdapterAccess.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D1FB8 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1401D68A8 (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall DxgkRequestSyncDisplaySwitchCallout(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        const struct _GUID *a2,
        __int64 a3)
{
  DISPLAY_CALLOUT_ENTRY *v6; // rax
  struct DISPLAY_CALLOUT_ENTRY *v7; // rbx
  struct DXGGLOBAL *Global; // rax

  v6 = (DISPLAY_CALLOUT_ENTRY *)operator new(0x50uLL, 0x4B677844u, 256LL);
  if ( v6 && (v7 = DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(v6, a1, a2)) != 0LL )
  {
    Global = DXGGLOBAL::GetGlobal();
    return DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout((struct DXGGLOBAL *)((char *)Global + 1808), v7, a3);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 856;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for display switch callout.",
      856LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
