/*
 * XREFs of sub_18002FB60 @ 0x18002FB60
 * Callers:
 *     sub_18002FD3C @ 0x18002FD3C (sub_18002FD3C.c)
 *     sub_18002FDCC @ 0x18002FDCC (sub_18002FDCC.c)
 *     sub_18002FDFC @ 0x18002FDFC (sub_18002FDFC.c)
 *     sub_180038190 @ 0x180038190 (sub_180038190.c)
 *     sub_180073088 @ 0x180073088 (sub_180073088.c)
 *     sub_180073530 @ 0x180073530 (sub_180073530.c)
 *     sub_1800D6959 @ 0x1800D6959 (sub_1800D6959.c)
 *     sub_1800D6AC1 @ 0x1800D6AC1 (sub_1800D6AC1.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_16 @ 0x1800D78F0 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D78F0.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18002FB60(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x60uLL);
  return result;
}
