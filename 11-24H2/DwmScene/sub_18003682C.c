/*
 * XREFs of sub_18003682C @ 0x18003682C
 * Callers:
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_180073F78 @ 0x180073F78 (sub_180073F78.c)
 *     sub_180074004 @ 0x180074004 (sub_180074004.c)
 *     sub_1800746A0 @ 0x1800746A0 (sub_1800746A0.c)
 *     sub_180076D60 @ 0x180076D60 (sub_180076D60.c)
 *     sub_1800D6C25 @ 0x1800D6C25 (sub_1800D6C25.c)
 *     sub_1800D6C70 @ 0x1800D6C70 (sub_1800D6C70.c)
 *     sub_1800D7CDA @ 0x1800D7CDA (sub_1800D7CDA.c)
 *     unknown_libname_37 @ 0x1800D7F7D (unknown_libname_37.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_1 @ 0x1800D9F3E (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_1800D9F3E.c)
 *     sub_1800DAE1D @ 0x1800DAE1D (sub_1800DAE1D.c)
 *     sub_1800DB30A @ 0x1800DB30A (sub_1800DB30A.c)
 *     sub_1800DB50E @ 0x1800DB50E (sub_1800DB50E.c)
 *     sub_1800E280A @ 0x1800E280A (sub_1800E280A.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18003682C(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010234(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
