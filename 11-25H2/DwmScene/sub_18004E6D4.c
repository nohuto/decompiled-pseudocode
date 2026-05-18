/*
 * XREFs of sub_18004E6D4 @ 0x18004E6D4
 * Callers:
 *     sub_18004DB54 @ 0x18004DB54 (sub_18004DB54.c)
 *     sub_18004DBC8 @ 0x18004DBC8 (sub_18004DBC8.c)
 *     sub_18005112C @ 0x18005112C (sub_18005112C.c)
 *     sub_1800511BC @ 0x1800511BC (sub_1800511BC.c)
 *     sub_180051370 @ 0x180051370 (sub_180051370.c)
 *     sub_180051484 @ 0x180051484 (sub_180051484.c)
 *     sub_180051520 @ 0x180051520 (sub_180051520.c)
 *     sub_180051910 @ 0x180051910 (sub_180051910.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_50 @ 0x1800E2099 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800E2099.c)
 *     sub_1800E20AB @ 0x1800E20AB (sub_1800E20AB.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_18004E6D4(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010134(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
