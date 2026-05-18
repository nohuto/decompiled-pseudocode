/*
 * XREFs of sub_1800972CC @ 0x1800972CC
 * Callers:
 *     sub_180096D10 @ 0x180096D10 (sub_180096D10.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_45 @ 0x1800DB9BA (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DB9BA.c)
 * Callees:
 *     sub_180095830 @ 0x180095830 (sub_180095830.c)
 */

__int64 __fastcall sub_1800972CC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180095830(v2 + 32);
  return sub_180097278(a1);
}
