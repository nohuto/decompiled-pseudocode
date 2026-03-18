/*
 * XREFs of ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x14005F880
 * Callers:
 *     <none>
 * Callees:
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x14005F8B8 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::_WorkerThreadRoutine(FxEventQueue *Context)
{
  FxEventQueue::EventQueueWorker(Context);
}
