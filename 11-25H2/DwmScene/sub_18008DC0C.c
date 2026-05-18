/*
 * XREFs of sub_18008DC0C @ 0x18008DC0C
 * Callers:
 *     sub_18008D908 @ 0x18008D908 (sub_18008D908.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_42 @ 0x1800DB374 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DB374.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

__int64 __fastcall sub_18008DC0C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011A5C(v2 + 16);
  return sub_180026460(a1);
}
