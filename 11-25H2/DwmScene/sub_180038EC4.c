/*
 * XREFs of sub_180038EC4 @ 0x180038EC4
 * Callers:
 *     sub_1800D777E @ 0x1800D777E (sub_1800D777E.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_17 @ 0x1800D77A2 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D77A2.c)
 * Callees:
 *     sub_180030AA0 @ 0x180030AA0 (sub_180030AA0.c)
 */

__int64 __fastcall sub_180038EC4(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 16LL )
    result = sub_180030AA0(i);
  return result;
}
