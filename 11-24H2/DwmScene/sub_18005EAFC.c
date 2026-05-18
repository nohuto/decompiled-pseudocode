/*
 * XREFs of sub_18005EAFC @ 0x18005EAFC
 * Callers:
 *     sub_18005E200 @ 0x18005E200 (sub_18005E200.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_33 @ 0x1800D97E3 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D97E3.c)
 * Callees:
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 */

__int64 __fastcall sub_18005EAFC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180013228(v2 + 16);
  return sub_18002FB84(a1);
}
