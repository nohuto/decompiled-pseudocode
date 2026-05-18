/*
 * XREFs of sub_18005E99C @ 0x18005E99C
 * Callers:
 *     sub_18005E0A0 @ 0x18005E0A0 (sub_18005E0A0.c)
 *     sub_18005E1C4 @ 0x18005E1C4 (sub_18005E1C4.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_33 @ 0x1800D9683 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D9683.c)
 * Callees:
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 */

__int64 __fastcall sub_18005E99C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180013128(v2 + 16);
  return sub_18002FA24(a1);
}
