/*
 * XREFs of sub_180029C3C @ 0x180029C3C
 * Callers:
 *     sub_180028D48 @ 0x180028D48 (sub_180028D48.c)
 *     sub_180054430 @ 0x180054430 (sub_180054430.c)
 *     sub_180055230 @ 0x180055230 (sub_180055230.c)
 *     sub_180055260 @ 0x180055260 (sub_180055260.c)
 *     sub_1800973FC @ 0x1800973FC (sub_1800973FC.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_7 @ 0x1800D6613 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D6613.c)
 *     sub_1800D91A5 @ 0x1800D91A5 (sub_1800D91A5.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_180029C3C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x58uLL);
  return result;
}
