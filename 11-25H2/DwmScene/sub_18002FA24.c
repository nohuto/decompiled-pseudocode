/*
 * XREFs of sub_18002FA24 @ 0x18002FA24
 * Callers:
 *     sub_18002DE9C @ 0x18002DE9C (sub_18002DE9C.c)
 *     sub_180059F64 @ 0x180059F64 (sub_180059F64.c)
 *     sub_18005AC84 @ 0x18005AC84 (sub_18005AC84.c)
 *     sub_18005E99C @ 0x18005E99C (sub_18005E99C.c)
 *     sub_1800BC268 @ 0x1800BC268 (sub_1800BC268.c)
 *     sub_1800CCF60 @ 0x1800CCF60 (sub_1800CCF60.c)
 *     sub_1800D680B @ 0x1800D680B (sub_1800D680B.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_31 @ 0x1800D935E (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D935E.c)
 *     sub_1800E2277 @ 0x1800E2277 (sub_1800E2277.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18002FA24(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x30uLL);
  return result;
}
