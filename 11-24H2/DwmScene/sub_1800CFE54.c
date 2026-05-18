/*
 * XREFs of sub_1800CFE54 @ 0x1800CFE54
 * Callers:
 *     sub_1800CF224 @ 0x1800CF224 (sub_1800CF224.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_53 @ 0x1800E24C5 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800E24C5.c)
 * Callees:
 *     sub_1800CF3D8 @ 0x1800CF3D8 (sub_1800CF3D8.c)
 */

_QWORD *__fastcall sub_1800CFE54(_QWORD *a1)
{
  _QWORD *result; // rax
  char *v2; // rbx
  char *v3; // rdx

  if ( a1[1] )
  {
    *(_QWORD *)(a1[3] + 8LL) = 0LL;
    result = (_QWORD *)a1[2];
    *result = 0LL;
    v2 = (char *)a1[3];
    while ( v2 )
    {
      v3 = v2;
      v2 = *(char **)v2;
      result = (_QWORD *)sub_1800CF3D8((__int64)a1, v3);
    }
  }
  return result;
}
