/*
 * XREFs of ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_0 @ 0x1800D7752
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::FairScheduleGroup::AllocateSegment'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  Concurrency::details::TaskStack::~TaskStack(*(Concurrency::details::TaskStack **)(a2 + 104));
}
