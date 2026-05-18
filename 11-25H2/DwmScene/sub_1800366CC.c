/*
 * XREFs of sub_1800366CC @ 0x1800366CC
 * Callers:
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_180073E18 @ 0x180073E18 (sub_180073E18.c)
 *     sub_180073EA4 @ 0x180073EA4 (sub_180073EA4.c)
 *     sub_180074540 @ 0x180074540 (sub_180074540.c)
 *     sub_180076C00 @ 0x180076C00 (sub_180076C00.c)
 *     sub_1800D6AC5 @ 0x1800D6AC5 (sub_1800D6AC5.c)
 *     sub_1800D6B10 @ 0x1800D6B10 (sub_1800D6B10.c)
 *     sub_1800D7B7A @ 0x1800D7B7A (sub_1800D7B7A.c)
 *     unknown_libname_37 @ 0x1800D7E1D (unknown_libname_37.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_1 @ 0x1800D9DDE (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_1800D9DDE.c)
 *     sub_1800DACBD @ 0x1800DACBD (sub_1800DACBD.c)
 *     sub_1800DB1AA @ 0x1800DB1AA (sub_1800DB1AA.c)
 *     sub_1800DB3AE @ 0x1800DB3AE (sub_1800DB3AE.c)
 *     sub_1800E26AA @ 0x1800E26AA (sub_1800E26AA.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 */

__int64 __fastcall sub_1800366CC(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010134(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
