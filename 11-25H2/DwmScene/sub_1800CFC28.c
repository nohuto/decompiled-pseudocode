/*
 * XREFs of sub_1800CFC28 @ 0x1800CFC28
 * Callers:
 *     sub_1800CEFF8 @ 0x1800CEFF8 (sub_1800CEFF8.c)
 *     sub_1800CFCC4 @ 0x1800CFCC4 (sub_1800CFCC4.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_52 @ 0x1800E2353 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800E2353.c)
 *     sub_1800E239B @ 0x1800E239B (sub_1800E239B.c)
 *     sub_1800E23D5 @ 0x1800E23D5 (sub_1800E23D5.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_1800CFC28(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0xB0uLL);
  return result;
}
