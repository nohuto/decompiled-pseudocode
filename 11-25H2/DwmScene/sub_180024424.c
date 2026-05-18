/*
 * XREFs of sub_180024424 @ 0x180024424
 * Callers:
 *     sub_1800244A8 @ 0x1800244A8 (sub_1800244A8.c)
 *     sub_18002FC0C @ 0x18002FC0C (sub_18002FC0C.c)
 *     sub_18004B62C @ 0x18004B62C (sub_18004B62C.c)
 *     sub_18004B65C @ 0x18004B65C (sub_18004B65C.c)
 *     sub_180059E98 @ 0x180059E98 (sub_180059E98.c)
 *     sub_1800D60F6 @ 0x1800D60F6 (sub_1800D60F6.c)
 *     sub_1800D681D @ 0x1800D681D (sub_1800D681D.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_30 @ 0x1800D934C (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D934C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_180024424(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x40uLL);
  return result;
}
