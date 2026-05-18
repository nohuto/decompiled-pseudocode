/*
 * XREFs of sub_18005AC0C @ 0x18005AC0C
 * Callers:
 *     sub_180059BF0 @ 0x180059BF0 (sub_180059BF0.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_28 @ 0x1800D9328 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D9328.c)
 * Callees:
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 */

__int64 __fastcall sub_18005AC0C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18004A4F4(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
