/*
 * XREFs of sub_18002FA00 @ 0x18002FA00
 * Callers:
 *     sub_18002FBDC @ 0x18002FBDC (sub_18002FBDC.c)
 *     sub_18002FC6C @ 0x18002FC6C (sub_18002FC6C.c)
 *     sub_18002FC9C @ 0x18002FC9C (sub_18002FC9C.c)
 *     sub_180038030 @ 0x180038030 (sub_180038030.c)
 *     sub_180072F28 @ 0x180072F28 (sub_180072F28.c)
 *     sub_1800733D0 @ 0x1800733D0 (sub_1800733D0.c)
 *     sub_1800D67F9 @ 0x1800D67F9 (sub_1800D67F9.c)
 *     sub_1800D6961 @ 0x1800D6961 (sub_1800D6961.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_16 @ 0x1800D7790 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D7790.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18002FA00(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x60uLL);
  return result;
}
