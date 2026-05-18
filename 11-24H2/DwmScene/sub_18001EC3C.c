/*
 * XREFs of sub_18001EC3C @ 0x18001EC3C
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_1800339BC @ 0x1800339BC (sub_1800339BC.c)
 *     sub_180034044 @ 0x180034044 (sub_180034044.c)
 *     sub_180034224 @ 0x180034224 (sub_180034224.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 *     sub_180061AF0 @ 0x180061AF0 (sub_180061AF0.c)
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 *     unknown_libname_26 @ 0x1800D72AB (unknown_libname_26.c)
 *     unknown_libname_30 @ 0x1800D7467 (unknown_libname_30.c)
 *     sub_1800D749D @ 0x1800D749D (sub_1800D749D.c)
 *     sub_1800D74C1 @ 0x1800D74C1 (sub_1800D74C1.c)
 *     sub_1800D7551 @ 0x1800D7551 (sub_1800D7551.c)
 *     sub_1800D7599 @ 0x1800D7599 (sub_1800D7599.c)
 *     sub_1800D77F4 @ 0x1800D77F4 (sub_1800D77F4.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_2 @ 0x1800D7818 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800D7818.c)
 *     sub_1800D784E @ 0x1800D784E (sub_1800D784E.c)
 *     sub_1800D7884 @ 0x1800D7884 (sub_1800D7884.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001EE34 @ 0x18001EE34 (sub_18001EE34.c)
 *     sub_18001EEDC @ 0x18001EEDC (sub_18001EEDC.c)
 */

__int64 __fastcall sub_18001EC3C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 48) )
    result = sub_18001EEDC(
               *(_QWORD *)a1,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 56));
  else
    result = sub_18001EE34(
               *(_QWORD *)a1,
               2,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    return sub_18001060C(v3);
  return result;
}
