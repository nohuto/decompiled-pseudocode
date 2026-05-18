/*
 * XREFs of sub_180030128 @ 0x180030128
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
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_180061AF0 @ 0x180061AF0 (sub_180061AF0.c)
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 *     sub_18008CEA0 @ 0x18008CEA0 (sub_18008CEA0.c)
 *     sub_1800D72E1 @ 0x1800D72E1 (sub_1800D72E1.c)
 *     sub_1800D748B @ 0x1800D748B (sub_1800D748B.c)
 *     sub_1800D74F7 @ 0x1800D74F7 (sub_1800D74F7.c)
 *     sub_1800D7587 @ 0x1800D7587 (sub_1800D7587.c)
 *     unknown_libname_108 @ 0x1800D75CF (unknown_libname_108.c)
 *     sub_1800D7740 @ 0x1800D7740 (sub_1800D7740.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_1 @ 0x1800D7806 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1800D7806.c)
 *     sub_1800D783C @ 0x1800D783C (sub_1800D783C.c)
 *     sub_1800D7872 @ 0x1800D7872 (sub_1800D7872.c)
 *     unknown_libname_41 @ 0x1800D9368 (unknown_libname_41.c)
 *     sub_1800D93C2 @ 0x1800D93C2 (sub_1800D93C2.c)
 *     sub_1800D9452 @ 0x1800D9452 (sub_1800D9452.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180036AF4 @ 0x180036AF4 (sub_180036AF4.c)
 *     sub_180095280 @ 0x180095280 (sub_180095280.c)
 */

__int64 __fastcall sub_180030128(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  result = sub_180036AF4(a1, &v4);
  if ( v4 )
    result = sub_180095280(v4, *(_QWORD *)(a1 + 16));
  if ( v5 )
    result = sub_18001060C(v5);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010644(v3);
  return result;
}
