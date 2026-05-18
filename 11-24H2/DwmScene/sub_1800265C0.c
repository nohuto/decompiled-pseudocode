/*
 * XREFs of sub_1800265C0 @ 0x1800265C0
 * Callers:
 *     sub_180026644 @ 0x180026644 (sub_180026644.c)
 *     sub_18008DD6C @ 0x18008DD6C (sub_18008DD6C.c)
 *     sub_1800D64A7 @ 0x1800D64A7 (sub_1800D64A7.c)
 *     sub_1800D9877 @ 0x1800D9877 (sub_1800D9877.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_43 @ 0x1800DB4E6 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DB4E6.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_1800265C0(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x38uLL);
  return result;
}
