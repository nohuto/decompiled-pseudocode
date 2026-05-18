/*
 * XREFs of sub_18009742C @ 0x18009742C
 * Callers:
 *     sub_180096E70 @ 0x180096E70 (sub_180096E70.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_45 @ 0x1800DBB1A (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DBB1A.c)
 * Callees:
 *     sub_180095990 @ 0x180095990 (sub_180095990.c)
 */

__int64 __fastcall sub_18009742C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180095990(v2 + 32);
  return sub_1800973D8(a1);
}
