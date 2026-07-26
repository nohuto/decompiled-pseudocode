/*
 * XREFs of ??1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ @ 0x1400E63C8
 * Callers:
 *     ?Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z @ 0x1400E6488 (-Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z.c)
 * Callees:
 *     ?Deinitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E63F8 (-Deinitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?Deinitialize@Worker@SmFx@@QEAAXXZ @ 0x1400E6EC0 (-Deinitialize@Worker@SmFx@@QEAAXXZ.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::~StateMachineEngineImpl(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  SmFx::StateMachineEngine::StateMachineEngineImpl::Deinitialize(this);
  SmFx::Worker::Deinitialize((SmFx::StateMachineEngine::StateMachineEngineImpl *)((char *)this + 1016));
  *((_BYTE *)this + 1008) = 0;
}
