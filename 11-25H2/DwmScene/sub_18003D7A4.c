/*
 * XREFs of sub_18003D7A4 @ 0x18003D7A4
 * Callers:
 *     sub_18003D16C @ 0x18003D16C (sub_18003D16C.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_19 @ 0x1800D7B40 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D7B40.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_18003D7A4(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(volatile signed __int32 **)(v2 + 32);
    if ( v3 )
      sub_180010544(v3);
  }
  return sub_1800277C0(a1);
}
