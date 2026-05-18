/*
 * XREFs of sub_180029C90 @ 0x180029C90
 * Callers:
 *     sub_1800297B8 @ 0x1800297B8 (sub_1800297B8.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_11 @ 0x1800D66D9 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D66D9.c)
 * Callees:
 *     sub_1800291FC @ 0x1800291FC (sub_1800291FC.c)
 */

__int64 __fastcall sub_180029C90(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_1800291FC(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
