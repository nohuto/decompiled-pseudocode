/*
 * XREFs of ?UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z @ 0x14005A160
 * Callers:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140059E80 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E68D4 (-InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E6D50 (-WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     ?GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x14005A7C0 (-GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ.c)
 *     ?Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z @ 0x1400E6488 (-Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::UpdateEngineState(__int64 a1, int a2)
{
  unsigned __int16 CurrentStateIndex; // bx

  if ( (unsigned int)(a2 - 3) <= 1 )
  {
    *(_DWORD *)(a1 + 992) = a2;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1000), *(_BYTE *)(a1 + 1009));
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(a1 + 1016),
      lambda_9395206af589ac42132775cb7e45a067_::_lambda_invoker_cdecl_,
      DelayedWorkQueue,
      (PVOID)(a1 + 1016));
  }
  else if ( a2 == 5 )
  {
    *(_DWORD *)(a1 + 992) = 5;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1000), *(_BYTE *)(a1 + 1009));
  }
  else
  {
    *(_DWORD *)(a1 + 992) = a2;
    CurrentStateIndex = SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex((SmFx::StateMachineEngine::StateMachineEngineImpl *)a1);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1000), *(_BYTE *)(a1 + 1009));
    if ( !CurrentStateIndex )
      SmFx::StateMachineEngine::StateMachineEngineImpl::Destroy((PVOID)a1, 1);
  }
}
