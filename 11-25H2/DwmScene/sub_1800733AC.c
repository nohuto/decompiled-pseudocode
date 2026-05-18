/*
 * XREFs of sub_1800733AC @ 0x1800733AC
 * Callers:
 *     sub_180072E1C @ 0x180072E1C (sub_180072E1C.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_36 @ 0x1800DA014 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DA014.c)
 * Callees:
 *     sub_18002CB3C @ 0x18002CB3C (sub_18002CB3C.c)
 */

__int64 __fastcall sub_1800733AC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18002CB3C(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
