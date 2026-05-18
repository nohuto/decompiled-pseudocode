/*
 * XREFs of sub_18009729C @ 0x18009729C
 * Callers:
 *     sub_180096E48 @ 0x180096E48 (sub_180096E48.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_48 @ 0x1800DB9F0 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DB9F0.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

__int64 __fastcall sub_18009729C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011A5C(v2 + 32);
  return sub_180029ADC(a1);
}
