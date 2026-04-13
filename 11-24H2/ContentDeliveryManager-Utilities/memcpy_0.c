/*
 * XREFs of memcpy_0 @ 0x1800227E6
 * Callers:
 *     ?do_narrow@?$ctype@D@std@@MEBAPEBDPEBD0DPEAD@Z @ 0x18000B010 (-do_narrow@-$ctype@D@std@@MEBAPEBDPEBD0DPEAD@Z.c)
 *     ?do_widen@?$ctype@D@std@@MEBAPEBDPEBD0PEAD@Z @ 0x18000BAD0 (-do_widen@-$ctype@D@std@@MEBAPEBDPEBD0PEAD@Z.c)
 *     _FXp_movx @ 0x18000CA18 (_FXp_movx.c)
 *     _FXp_mulx @ 0x18000CC44 (_FXp_mulx.c)
 *     _Xp_movx @ 0x18000D784 (_Xp_movx.c)
 *     _Xp_mulx @ 0x18000D9B8 (_Xp_mulx.c)
 *     _LXp_mulx @ 0x18000E478 (_LXp_mulx.c)
 *     ??$_Getvals@_W@?$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z @ 0x18000EE5C (--$_Getvals@_W@-$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z.c)
 *     ?do_out@?$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z @ 0x180019A20 (-do_out@-$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18001BB10 (-do_unshift@-$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     _Wcsxfrm @ 0x180021D54 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021E84 (_Strxfrm.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x18002E2D8 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18003D464 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003DE1C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003E008 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18003E10C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005C494 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180067300 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006A0B0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18006A194 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?do_out@?$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x18006A740 (-do_out@-$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18006A9B0 (-do_unshift@-$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEB_W1HPEAPEAXPEAK@Z @ 0x1800A3154 (-SHRegAllocData@@YAJPEAUHKEY__@@PEB_W1HPEAPEAXPEAK@Z.c)
 *     ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800B30E0 (--4-$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z.c)
 *     ?_Maklocwcs@std@@YAPEA_WPEB_W@Z @ 0x1800B3A54 (-_Maklocwcs@std@@YAPEA_WPEB_W@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
