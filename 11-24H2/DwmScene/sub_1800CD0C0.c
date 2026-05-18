/*
 * XREFs of sub_1800CD0C0 @ 0x1800CD0C0
 * Callers:
 *     sub_1800CCD74 @ 0x1800CCD74 (sub_1800CCD74.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_51 @ 0x1800E23C5 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800E23C5.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800CD0C0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18000E954((__int64 *)(v2 + 40));
  return sub_18002FB84(a1);
}
