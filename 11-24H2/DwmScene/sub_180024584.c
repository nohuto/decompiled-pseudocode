/*
 * XREFs of sub_180024584 @ 0x180024584
 * Callers:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_18002FD6C @ 0x18002FD6C (sub_18002FD6C.c)
 *     sub_18004B78C @ 0x18004B78C (sub_18004B78C.c)
 *     sub_18004B7BC @ 0x18004B7BC (sub_18004B7BC.c)
 *     sub_180059FF8 @ 0x180059FF8 (sub_180059FF8.c)
 *     sub_1800D6256 @ 0x1800D6256 (sub_1800D6256.c)
 *     sub_1800D697D @ 0x1800D697D (sub_1800D697D.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_30 @ 0x1800D94AC (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D94AC.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_180024584(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x40uLL);
  return result;
}
