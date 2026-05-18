/*
 * XREFs of sub_18004E834 @ 0x18004E834
 * Callers:
 *     sub_18004DCB4 @ 0x18004DCB4 (sub_18004DCB4.c)
 *     sub_18004DD28 @ 0x18004DD28 (sub_18004DD28.c)
 *     sub_18005128C @ 0x18005128C (sub_18005128C.c)
 *     sub_18005131C @ 0x18005131C (sub_18005131C.c)
 *     sub_1800514D0 @ 0x1800514D0 (sub_1800514D0.c)
 *     sub_1800515E4 @ 0x1800515E4 (sub_1800515E4.c)
 *     sub_180051680 @ 0x180051680 (sub_180051680.c)
 *     sub_180051A70 @ 0x180051A70 (sub_180051A70.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_50 @ 0x1800E21F9 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800E21F9.c)
 *     sub_1800E220B @ 0x1800E220B (sub_1800E220B.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18004E834(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010234(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
