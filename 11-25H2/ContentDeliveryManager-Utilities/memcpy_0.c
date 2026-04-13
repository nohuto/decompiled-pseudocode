/*
 * XREFs of memcpy_0 @ 0x1800227D6
 * Callers:
 *     ?do_narrow@?$ctype@D@std@@MEBAPEBDPEBD0DPEAD@Z @ 0x18000B000 (-do_narrow@-$ctype@D@std@@MEBAPEBDPEBD0DPEAD@Z.c)
 *     ?do_widen@?$ctype@D@std@@MEBAPEBDPEBD0PEAD@Z @ 0x18000BAC0 (-do_widen@-$ctype@D@std@@MEBAPEBDPEBD0PEAD@Z.c)
 *     _FXp_movx @ 0x18000CA08 (_FXp_movx.c)
 *     _FXp_mulx @ 0x18000CC34 (_FXp_mulx.c)
 *     _Xp_movx @ 0x18000D774 (_Xp_movx.c)
 *     _Xp_mulx @ 0x18000D9A8 (_Xp_mulx.c)
 *     _LXp_mulx @ 0x18000E468 (_LXp_mulx.c)
 *     ??$_Getvals@_W@?$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z @ 0x18000EE4C (--$_Getvals@_W@-$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z.c)
 *     ?do_out@?$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z @ 0x180019A10 (-do_out@-$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18001BB00 (-do_unshift@-$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     _Wcsxfrm @ 0x180021D44 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x180021E74 (_Strxfrm.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x18002E308 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18003D284 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003DC3C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003DE28 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18003DF2C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005BFB8 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180066E60 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069C10 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180069CF4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?do_out@?$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x18006A2A0 (-do_out@-$codecvt@GDH@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z.c)
 *     ?do_unshift@?$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18006A510 (-do_unshift@-$codecvt@GDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEB_W1HPEAPEAXPEAK@Z @ 0x1800A2DE4 (-SHRegAllocData@@YAJPEAUHKEY__@@PEB_W1HPEAPEAXPEAK@Z.c)
 *     ??4?$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z @ 0x1800B2DC0 (--4-$_Yarn@_W@std@@QEAAAEAV01@PEB_W@Z.c)
 *     ?_Maklocwcs@std@@YAPEA_WPEB_W@Z @ 0x1800B3734 (-_Maklocwcs@std@@YAPEA_WPEB_W@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
