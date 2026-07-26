/*
 * XREFs of ndisWdfIdleTimerFired @ 0x1400B7BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x140074A30 (-EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z.c)
 */

void __fastcall ndisWdfIdleTimerFired(
        struct _KDPC *Dpc,
        SmFx::StateMachineEngine::StateMachineEngineImpl **DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEvent(*DeferredContext, 9u);
}
