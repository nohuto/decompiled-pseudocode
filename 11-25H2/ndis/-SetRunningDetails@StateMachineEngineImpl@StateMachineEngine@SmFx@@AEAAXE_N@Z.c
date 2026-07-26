/*
 * XREFs of ?SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z @ 0x140075470
 * Callers:
 *     ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x140074A30 (-EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z.c)
 *     ?InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400ED7E8 (-InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400EDC64 (-WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::SetRunningDetails(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned __int8 a2,
        char a3)
{
  *((_BYTE *)this + 983) = a2;
  *((_BYTE *)this + 982) = a3;
  if ( a2 >= 2u )
    *((_DWORD *)this + 246) = KeGetPcr()->Prcb.Number;
  else
    *((_QWORD *)this + 123) = KeGetCurrentThread();
}
