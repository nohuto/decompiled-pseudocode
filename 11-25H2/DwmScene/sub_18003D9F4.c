/*
 * XREFs of sub_18003D9F4 @ 0x18003D9F4
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_21 @ 0x1800D7E2F (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D7E2F.c)
 *     unknown_libname_38 @ 0x1800D7E53 (unknown_libname_38.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18003D9F4(_QWORD *a1)
{
  _DWORD *result; // rax

  result = (_DWORD *)*a1;
  *(_DWORD *)*a1 = 0;
  return result;
}
