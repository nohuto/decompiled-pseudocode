/*
 * XREFs of sub_180039024 @ 0x180039024
 * Callers:
 *     sub_1800D78DE @ 0x1800D78DE (sub_1800D78DE.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_17 @ 0x1800D7902 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D7902.c)
 * Callees:
 *     sub_180030C00 @ 0x180030C00 (sub_180030C00.c)
 */

__int64 __fastcall sub_180039024(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 16LL )
    result = sub_180030C00(i);
  return result;
}
