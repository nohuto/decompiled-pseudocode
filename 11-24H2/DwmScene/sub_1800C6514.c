/*
 * XREFs of sub_1800C6514 @ 0x1800C6514
 * Callers:
 *     sub_1800C6DB0 @ 0x1800C6DB0 (sub_1800C6DB0.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_16 @ 0x1800E222F (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_16.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

char __fastcall sub_1800C6514(__int64 a1)
{
  char result; // al

  result = sub_180011B5C(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
