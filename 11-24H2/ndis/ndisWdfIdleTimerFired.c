/*
 * XREFs of ndisWdfIdleTimerFired @ 0x1400AFC50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x140059DB0 (-EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z.c)
 */

void __fastcall ndisWdfIdleTimerFired(
        struct _KDPC *Dpc,
        SmFx::StateMachineEngine::StateMachineEngineImpl **DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEvent(*DeferredContext, 9u);
}
