/*
 * XREFs of sub_18005AC30 @ 0x18005AC30
 * Callers:
 *     sub_180059CA0 @ 0x180059CA0 (sub_180059CA0.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_29 @ 0x1800D933A (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D933A.c)
 * Callees:
 *     sub_18005A330 @ 0x18005A330 (sub_18005A330.c)
 */

__int64 __fastcall sub_18005AC30(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18005A330(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
