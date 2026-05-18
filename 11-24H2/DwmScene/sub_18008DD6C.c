/*
 * XREFs of sub_18008DD6C @ 0x18008DD6C
 * Callers:
 *     sub_18008DA68 @ 0x18008DA68 (sub_18008DA68.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_42 @ 0x1800DB4D4 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DB4D4.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

__int64 __fastcall sub_18008DD6C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B5C(v2 + 16);
  return sub_1800265C0(a1);
}
