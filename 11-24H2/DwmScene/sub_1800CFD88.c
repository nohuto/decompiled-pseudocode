/*
 * XREFs of sub_1800CFD88 @ 0x1800CFD88
 * Callers:
 *     sub_1800CF158 @ 0x1800CF158 (sub_1800CF158.c)
 *     sub_1800CFE24 @ 0x1800CFE24 (sub_1800CFE24.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_52 @ 0x1800E24B3 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800E24B3.c)
 *     sub_1800E24FB @ 0x1800E24FB (sub_1800E24FB.c)
 *     sub_1800E2535 @ 0x1800E2535 (sub_1800E2535.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_1800CFD88(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0xB0uLL);
  return result;
}
