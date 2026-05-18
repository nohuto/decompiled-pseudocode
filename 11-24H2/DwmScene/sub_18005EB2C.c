/*
 * XREFs of sub_18005EB2C @ 0x18005EB2C
 * Callers:
 *     ?dtor$0@?0???0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0 @ 0x1800D98D1 (-dtor$0@-0---0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0.c)
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x1800D98E7 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 *     sub_1800DA54D @ 0x1800DA54D (sub_1800DA54D.c)
 *     sub_1800DA8FB @ 0x1800DA8FB (sub_1800DA8FB.c)
 *     sub_1800DBD90 @ 0x1800DBD90 (sub_1800DBD90.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 */

__int64 __fastcall sub_18005EB2C(__int64 a1)
{
  return sub_18000B6A4(a1, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
