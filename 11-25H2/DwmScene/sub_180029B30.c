/*
 * XREFs of sub_180029B30 @ 0x180029B30
 * Callers:
 *     sub_180029658 @ 0x180029658 (sub_180029658.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_11 @ 0x1800D6579 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D6579.c)
 * Callees:
 *     sub_18002909C @ 0x18002909C (sub_18002909C.c)
 */

__int64 __fastcall sub_180029B30(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18002909C(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
