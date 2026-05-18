/*
 * XREFs of sub_1800973FC @ 0x1800973FC
 * Callers:
 *     sub_180096FA8 @ 0x180096FA8 (sub_180096FA8.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_48 @ 0x1800DBB50 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DBB50.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

__int64 __fastcall sub_1800973FC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B5C(v2 + 32);
  return sub_180029C3C(a1);
}
