/*
 * XREFs of ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_1 @ 0x1800DAB8B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::ScheduleGroupSegmentBase::~ScheduleGroupSegmentBase'::`1'::dtor$0(
        __int64 a1,
        __int64 a2)
{
  Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(*(_QWORD *)(a2 + 64) + 48LL));
}
