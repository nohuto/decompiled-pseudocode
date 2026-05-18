/*
 * XREFs of sub_180010F2C @ 0x180010F2C
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_5 @ 0x1800D5D55 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D5D55.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_5 @ 0x1800D9D72 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800D9D72.c)
 *     unknown_libname_65 @ 0x1800DB218 (unknown_libname_65.c)
 *     unknown_libname_66 @ 0x1800DB23C (unknown_libname_66.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_11 @ 0x1800E230B (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_11.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180010F2C(_Mtx_t *a1)
{
  return Mtx_unlock(*a1);
}
