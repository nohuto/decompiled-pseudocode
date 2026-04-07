/*
 * XREFs of __delayLoadHelper2 @ 0x180021270
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18005D6D6 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x18005D761 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18005D86A (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x18005D907 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18005D9D4 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll @ 0x18005DA83 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18005DC18 (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll @ 0x18005DCB5 (__tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll @ 0x18005DD40 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18005DDCB (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_comctl32_dll @ 0x18005DE7A (__tailMerge_comctl32_dll.c)
 *     __tailMerge_windowscodecs_dll @ 0x18005DF17 (__tailMerge_windowscodecs_dll.c)
 *     __tailMerge_winsta_dll @ 0x18005DFA2 (__tailMerge_winsta_dll.c)
 *     __tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll @ 0x18005E0A8 (__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll.c)
 *     __tailMerge_virtualmonitormanager_dll @ 0x18005E133 (__tailMerge_virtualmonitormanager_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x18005E1AC (__tailMerge_wuceffects_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
