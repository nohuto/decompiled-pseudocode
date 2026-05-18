/*
 * XREFs of sub_1800277C0 @ 0x1800277C0
 * Callers:
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_18003D7A4 @ 0x18003D7A4 (sub_18003D7A4.c)
 *     sub_180040ABC @ 0x180040ABC (sub_180040ABC.c)
 *     sub_18007ADF4 @ 0x18007ADF4 (sub_18007ADF4.c)
 *     sub_18009536C @ 0x18009536C (sub_18009536C.c)
 *     sub_1800D63ED @ 0x1800D63ED (sub_1800D63ED.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_20 @ 0x1800D7B52 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D7B52.c)
 *     sub_1800DB887 @ 0x1800DB887 (sub_1800DB887.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_1800277C0(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x28uLL);
  return result;
}
