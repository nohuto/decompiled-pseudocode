/*
 * XREFs of sub_1800C63B4 @ 0x1800C63B4
 * Callers:
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_16 @ 0x1800E20CF (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_16.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

char __fastcall sub_1800C63B4(__int64 a1)
{
  char result; // al

  result = sub_180011A5C(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
