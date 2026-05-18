/*
 * XREFs of sub_1800CCF60 @ 0x1800CCF60
 * Callers:
 *     sub_1800CCC14 @ 0x1800CCC14 (sub_1800CCC14.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_51 @ 0x1800E2265 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800E2265.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 __fastcall sub_1800CCF60(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18000E854((__int64 *)(v2 + 40));
  return sub_18002FA24(a1);
}
