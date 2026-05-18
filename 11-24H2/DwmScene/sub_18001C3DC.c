/*
 * XREFs of sub_18001C3DC @ 0x18001C3DC
 * Callers:
 *     sub_18001BDEC @ 0x18001BDEC (sub_18001BDEC.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_4 @ 0x1800D5E6D (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D5E6D.c)
 * Callees:
 *     sub_18000C6E8 @ 0x18000C6E8 (sub_18000C6E8.c)
 */

BOOL __fastcall sub_18001C3DC(__int64 a1)
{
  BOOL result; // eax

  result = InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), 0LL);
  if ( !result )
    sub_18000C6E8();
  return result;
}
