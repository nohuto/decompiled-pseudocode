/*
 * XREFs of sub_18002FFC8 @ 0x18002FFC8
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
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_180061990 @ 0x180061990 (sub_180061990.c)
 *     sub_180061D60 @ 0x180061D60 (sub_180061D60.c)
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 *     sub_1800D7181 @ 0x1800D7181 (sub_1800D7181.c)
 *     sub_1800D732B @ 0x1800D732B (sub_1800D732B.c)
 *     sub_1800D7397 @ 0x1800D7397 (sub_1800D7397.c)
 *     sub_1800D7427 @ 0x1800D7427 (sub_1800D7427.c)
 *     unknown_libname_108 @ 0x1800D746F (unknown_libname_108.c)
 *     sub_1800D75E0 @ 0x1800D75E0 (sub_1800D75E0.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_1 @ 0x1800D76A6 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1800D76A6.c)
 *     sub_1800D76DC @ 0x1800D76DC (sub_1800D76DC.c)
 *     sub_1800D7712 @ 0x1800D7712 (sub_1800D7712.c)
 *     unknown_libname_41 @ 0x1800D9208 (unknown_libname_41.c)
 *     sub_1800D9262 @ 0x1800D9262 (sub_1800D9262.c)
 *     sub_1800D92F2 @ 0x1800D92F2 (sub_1800D92F2.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180036994 @ 0x180036994 (sub_180036994.c)
 *     sub_180095120 @ 0x180095120 (sub_180095120.c)
 */

__int64 __fastcall sub_18002FFC8(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  result = sub_180036994(a1, &v4);
  if ( v4 )
    result = sub_180095120(v4, *(_QWORD *)(a1 + 16));
  if ( v5 )
    result = sub_18001050C(v5);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010544(v3);
  return result;
}
