/*
 * XREFs of sub_180026460 @ 0x180026460
 * Callers:
 *     sub_1800264E4 @ 0x1800264E4 (sub_1800264E4.c)
 *     sub_18008DC0C @ 0x18008DC0C (sub_18008DC0C.c)
 *     sub_1800D6347 @ 0x1800D6347 (sub_1800D6347.c)
 *     sub_1800D9717 @ 0x1800D9717 (sub_1800D9717.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_43 @ 0x1800DB386 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DB386.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_180026460(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x38uLL);
  return result;
}
