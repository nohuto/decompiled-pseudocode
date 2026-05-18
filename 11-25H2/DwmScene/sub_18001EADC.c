/*
 * XREFs of sub_18001EADC @ 0x18001EADC
 * Callers:
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 *     sub_1800336B0 @ 0x1800336B0 (sub_1800336B0.c)
 *     sub_18003385C @ 0x18003385C (sub_18003385C.c)
 *     sub_180033EE4 @ 0x180033EE4 (sub_180033EE4.c)
 *     sub_1800340C4 @ 0x1800340C4 (sub_1800340C4.c)
 *     sub_180034548 @ 0x180034548 (sub_180034548.c)
 *     sub_1800350F8 @ 0x1800350F8 (sub_1800350F8.c)
 *     sub_1800356CC @ 0x1800356CC (sub_1800356CC.c)
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 *     sub_180061990 @ 0x180061990 (sub_180061990.c)
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 *     unknown_libname_26 @ 0x1800D714B (unknown_libname_26.c)
 *     unknown_libname_30 @ 0x1800D7307 (unknown_libname_30.c)
 *     sub_1800D733D @ 0x1800D733D (sub_1800D733D.c)
 *     sub_1800D7361 @ 0x1800D7361 (sub_1800D7361.c)
 *     sub_1800D73F1 @ 0x1800D73F1 (sub_1800D73F1.c)
 *     sub_1800D7439 @ 0x1800D7439 (sub_1800D7439.c)
 *     sub_1800D7694 @ 0x1800D7694 (sub_1800D7694.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_2 @ 0x1800D76B8 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800D76B8.c)
 *     sub_1800D76EE @ 0x1800D76EE (sub_1800D76EE.c)
 *     sub_1800D7724 @ 0x1800D7724 (sub_1800D7724.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001ECD4 @ 0x18001ECD4 (sub_18001ECD4.c)
 *     sub_18001ED7C @ 0x18001ED7C (sub_18001ED7C.c)
 */

__int64 __fastcall sub_18001EADC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 48) )
    result = sub_18001ED7C(
               *(_QWORD *)a1,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 56));
  else
    result = sub_18001ECD4(
               *(_QWORD *)a1,
               2,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    return sub_18001050C(v3);
  return result;
}
