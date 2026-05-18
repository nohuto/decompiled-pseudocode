/*
 * XREFs of sub_18001C2E4 @ 0x18001C2E4
 * Callers:
 *     sub_18001B7F4 @ 0x18001B7F4 (sub_18001B7F4.c)
 *     sub_18004B72C @ 0x18004B72C (sub_18004B72C.c)
 *     sub_18004F338 @ 0x18004F338 (sub_18004F338.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_3 @ 0x1800D5E49 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D5E49.c)
 *     sub_1800D8E3D @ 0x1800D8E3D (sub_1800D8E3D.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18001C2E4(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x68uLL);
  return result;
}
