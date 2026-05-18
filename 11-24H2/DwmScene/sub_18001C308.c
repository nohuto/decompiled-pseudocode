/*
 * XREFs of sub_18001C308 @ 0x18001C308
 * Callers:
 *     sub_18001C38C @ 0x18001C38C (sub_18001C38C.c)
 *     sub_180029CB4 @ 0x180029CB4 (sub_180029CB4.c)
 *     sub_18002FD9C @ 0x18002FD9C (sub_18002FD9C.c)
 *     sub_180052EDC @ 0x180052EDC (sub_180052EDC.c)
 *     sub_18005ADB4 @ 0x18005ADB4 (sub_18005ADB4.c)
 *     sub_1800BC4C0 @ 0x1800BC4C0 (sub_1800BC4C0.c)
 *     sub_1800D5E5B @ 0x1800D5E5B (sub_1800D5E5B.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_9 @ 0x1800D6637 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D6637.c)
 *     sub_1800D6AAF @ 0x1800D6AAF (sub_1800D6AAF.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18001C308(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x48uLL);
  return result;
}
