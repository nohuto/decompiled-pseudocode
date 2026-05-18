/*
 * XREFs of sub_180097278 @ 0x180097278
 * Callers:
 *     sub_1800972CC @ 0x1800972CC (sub_1800972CC.c)
 *     sub_1800972FC @ 0x1800972FC (sub_1800972FC.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_47 @ 0x1800DB9DE (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DB9DE.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_180097278(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x1D0uLL);
  return result;
}
