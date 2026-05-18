/*
 * XREFs of sub_18001C27C @ 0x18001C27C
 * Callers:
 *     sub_18001BC8C @ 0x18001BC8C (sub_18001BC8C.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_4 @ 0x1800D5D0D (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D5D0D.c)
 * Callees:
 *     sub_18000C288 @ 0x18000C288 (sub_18000C288.c)
 */

BOOL __fastcall sub_18001C27C(__int64 a1)
{
  BOOL result; // eax

  result = InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), 0LL);
  if ( !result )
    sub_18000C288();
  return result;
}
