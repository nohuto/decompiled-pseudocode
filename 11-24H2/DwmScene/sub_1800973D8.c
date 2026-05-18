/*
 * XREFs of sub_1800973D8 @ 0x1800973D8
 * Callers:
 *     sub_18009742C @ 0x18009742C (sub_18009742C.c)
 *     sub_18009745C @ 0x18009745C (sub_18009745C.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_47 @ 0x1800DBB3E (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DBB3E.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_1800973D8(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x1D0uLL);
  return result;
}
