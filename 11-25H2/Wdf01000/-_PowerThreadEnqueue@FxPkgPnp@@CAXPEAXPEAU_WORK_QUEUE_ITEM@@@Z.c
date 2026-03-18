/*
 * XREFs of ?_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x140073F40
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z @ 0x140073F5C (-QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z.c)
 */

void __fastcall FxPkgPnp::_PowerThreadEnqueue(FxSystemThread **Context, _WORK_QUEUE_ITEM *WorkItem)
{
  FxSystemThread::QueueWorkItem(Context[156], WorkItem);
}
