/*
 * XREFs of sub_18001C184 @ 0x18001C184
 * Callers:
 *     sub_18001B694 @ 0x18001B694 (sub_18001B694.c)
 *     sub_18004B5CC @ 0x18004B5CC (sub_18004B5CC.c)
 *     sub_18004F1D8 @ 0x18004F1D8 (sub_18004F1D8.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_3 @ 0x1800D5CE9 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D5CE9.c)
 *     sub_1800D8CDD @ 0x1800D8CDD (sub_1800D8CDD.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18001C184(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x68uLL);
  return result;
}
