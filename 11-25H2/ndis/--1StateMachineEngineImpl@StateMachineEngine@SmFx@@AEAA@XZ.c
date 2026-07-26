/*
 * XREFs of ??1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ @ 0x1400ED2F8
 * Callers:
 *     ?Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXXZ @ 0x1400ED3B8 (-Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXXZ.c)
 * Callees:
 *     ?Deinitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400ED328 (-Deinitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?Deinitialize@Worker@SmFx@@QEAAXXZ @ 0x1400EDD50 (-Deinitialize@Worker@SmFx@@QEAAXXZ.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::~StateMachineEngineImpl(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  SmFx::StateMachineEngine::StateMachineEngineImpl::Deinitialize(this);
  SmFx::Worker::Deinitialize((SmFx::StateMachineEngine::StateMachineEngineImpl *)((char *)this + 1016));
  *((_BYTE *)this + 1008) = 0;
}
