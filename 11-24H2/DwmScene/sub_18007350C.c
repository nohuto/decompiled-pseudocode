/*
 * XREFs of sub_18007350C @ 0x18007350C
 * Callers:
 *     sub_180072F7C @ 0x180072F7C (sub_180072F7C.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_36 @ 0x1800DA174 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800DA174.c)
 * Callees:
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 */

__int64 __fastcall sub_18007350C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18002CC9C(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
