/*
 * XREFs of ?UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z @ 0x140074DE0
 * Callers:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140074B00 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400ED7E8 (-InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     ?GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x140075440 (-GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ.c)
 *     ?Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXXZ @ 0x1400ED3B8 (-Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXXZ.c)
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
      SmFx::StateMachineEngine::StateMachineEngineImpl::Destroy((PVOID)a1);
  }
}
