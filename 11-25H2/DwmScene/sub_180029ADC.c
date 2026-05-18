/*
 * XREFs of sub_180029ADC @ 0x180029ADC
 * Callers:
 *     sub_180028BE8 @ 0x180028BE8 (sub_180028BE8.c)
 *     sub_1800542D0 @ 0x1800542D0 (sub_1800542D0.c)
 *     sub_1800550D0 @ 0x1800550D0 (sub_1800550D0.c)
 *     sub_180055100 @ 0x180055100 (sub_180055100.c)
 *     sub_18009729C @ 0x18009729C (sub_18009729C.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_7 @ 0x1800D64B3 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D64B3.c)
 *     sub_1800D9045 @ 0x1800D9045 (sub_1800D9045.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_180029ADC(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x58uLL);
  return result;
}
