/*
 * XREFs of sub_18002F9DC @ 0x18002F9DC
 * Callers:
 *     sub_18002FA48 @ 0x18002FA48 (sub_18002FA48.c)
 *     sub_18005ABAC @ 0x18005ABAC (sub_18005ABAC.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_13 @ 0x1800D67B1 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D67B1.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18002F9DC(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x20uLL);
  return result;
}
