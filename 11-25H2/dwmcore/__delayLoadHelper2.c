/*
 * XREFs of __delayLoadHelper2 @ 0x1802281C0
 * Callers:
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x18025D2F3 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x18025D37E (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll @ 0x18025D506 (__tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_3_0_dll @ 0x18025D591 (__tailMerge_ext_ms_win_compositor_hosting_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_2_1_dll @ 0x18025D62E (__tailMerge_ext_ms_win_compositor_hosting_l1_2_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x18025D6DD (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x18025D78C (__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll @ 0x18025D83B (__tailMerge_ext_ms_win_ntuser_private_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x18025D8C6 (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll @ 0x18025D963 (__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x18025D9EE (__tailMerge_ext_ms_win_gdi_private_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x18025DA79 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll @ 0x18025DB04 (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_9_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll @ 0x18025DB8F (__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_4_dll.c)
 *     __tailMerge_ext_ms_win_mininput_systeminputhost_l1_2_0_dll @ 0x18025DC2C (__tailMerge_ext_ms_win_mininput_systeminputhost_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x18025DCB7 (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_wuceffects_dll @ 0x18025DD42 (__tailMerge_wuceffects_dll.c)
 *     __tailMerge_ninput_dll @ 0x18025DDDF (__tailMerge_ninput_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll @ 0x18025DEA6 (__tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18025DF31 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x18025E03A (__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll @ 0x18025E152 (__tailMerge_ext_ms_win_composition_holographic_l1_1_0_dll.c)
 *     __tailMerge_d3d12_dll @ 0x18025E1DD (__tailMerge_d3d12_dll.c)
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
