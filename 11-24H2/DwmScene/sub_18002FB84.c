/*
 * XREFs of sub_18002FB84 @ 0x18002FB84
 * Callers:
 *     sub_18002DFFC @ 0x18002DFFC (sub_18002DFFC.c)
 *     sub_18005A0C4 @ 0x18005A0C4 (sub_18005A0C4.c)
 *     sub_18005ADE4 @ 0x18005ADE4 (sub_18005ADE4.c)
 *     sub_18005EAFC @ 0x18005EAFC (sub_18005EAFC.c)
 *     sub_1800BC3C8 @ 0x1800BC3C8 (sub_1800BC3C8.c)
 *     sub_1800CD0C0 @ 0x1800CD0C0 (sub_1800CD0C0.c)
 *     sub_1800D696B @ 0x1800D696B (sub_1800D696B.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_31 @ 0x1800D94BE (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D94BE.c)
 *     sub_1800E23D7 @ 0x1800E23D7 (sub_1800E23D7.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18002FB84(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x30uLL);
  return result;
}
