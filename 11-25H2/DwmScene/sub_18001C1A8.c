/*
 * XREFs of sub_18001C1A8 @ 0x18001C1A8
 * Callers:
 *     sub_18001C22C @ 0x18001C22C (sub_18001C22C.c)
 *     sub_180029B54 @ 0x180029B54 (sub_180029B54.c)
 *     sub_18002FC3C @ 0x18002FC3C (sub_18002FC3C.c)
 *     sub_180052D7C @ 0x180052D7C (sub_180052D7C.c)
 *     sub_18005AC54 @ 0x18005AC54 (sub_18005AC54.c)
 *     sub_1800BC360 @ 0x1800BC360 (sub_1800BC360.c)
 *     sub_1800D5CFB @ 0x1800D5CFB (sub_1800D5CFB.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_9 @ 0x1800D64D7 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D64D7.c)
 *     sub_1800D694F @ 0x1800D694F (sub_1800D694F.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18001C1A8(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010134(v1, 0x48uLL);
  return result;
}
