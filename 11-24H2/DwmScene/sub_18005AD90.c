/*
 * XREFs of sub_18005AD90 @ 0x18005AD90
 * Callers:
 *     sub_180059E00 @ 0x180059E00 (sub_180059E00.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_29 @ 0x1800D949A (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D949A.c)
 * Callees:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 */

__int64 __fastcall sub_18005AD90(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18005A490(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
