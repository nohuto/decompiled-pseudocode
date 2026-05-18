/*
 * XREFs of ?dtor$0@?0??VirtualProcessorActiveNotification@UMSThreadScheduler@details@Concurrency@@MEAAX_NJ@Z@4HA @ 0x1800D59D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::UMSThreadScheduler::VirtualProcessorActiveNotification'::`1'::dtor$0(
        __int64 a1,
        __int64 a2)
{
  Concurrency::details::TaskStack::~TaskStack(*(Concurrency::details::TaskStack **)(a2 + 136));
}
