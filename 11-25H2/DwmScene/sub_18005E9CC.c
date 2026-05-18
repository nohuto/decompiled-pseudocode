/*
 * XREFs of sub_18005E9CC @ 0x18005E9CC
 * Callers:
 *     ?dtor$0@?0???0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0 @ 0x1800D9771 (-dtor$0@-0---0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0.c)
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x1800D9787 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 *     sub_1800DA3ED @ 0x1800DA3ED (sub_1800DA3ED.c)
 *     sub_1800DA79B @ 0x1800DA79B (sub_1800DA79B.c)
 *     sub_1800DBC30 @ 0x1800DBC30 (sub_1800DBC30.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 */

__int64 __fastcall sub_18005E9CC(__int64 a1)
{
  return sub_18000B2D4(a1, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
