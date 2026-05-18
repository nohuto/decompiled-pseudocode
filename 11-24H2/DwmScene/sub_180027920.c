/*
 * XREFs of sub_180027920 @ 0x180027920
 * Callers:
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 *     sub_18003D904 @ 0x18003D904 (sub_18003D904.c)
 *     sub_180040C1C @ 0x180040C1C (sub_180040C1C.c)
 *     sub_18007AF54 @ 0x18007AF54 (sub_18007AF54.c)
 *     sub_1800954CC @ 0x1800954CC (sub_1800954CC.c)
 *     sub_1800D654D @ 0x1800D654D (sub_1800D654D.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_20 @ 0x1800D7CB2 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D7CB2.c)
 *     sub_1800DB9E7 @ 0x1800DB9E7 (sub_1800DB9E7.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_180027920(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_180010234(v1, 0x28uLL);
  return result;
}
