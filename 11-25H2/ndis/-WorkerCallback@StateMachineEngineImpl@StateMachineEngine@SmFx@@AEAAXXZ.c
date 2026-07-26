/*
 * XREFs of ?WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400EDC64
 * Callers:
 *     _lambda_c276094d149607b901f7fae525da7e78_::_lambda_invoker_cdecl_ @ 0x1400ED2E0 (_lambda_c276094d149607b901f7fae525da7e78_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140074B00 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x140074FA0 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z @ 0x140075470 (-SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z.c)
 *     ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400ED414 (-ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@XZ.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::WorkerCallback(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  KSPIN_LOCK *v1; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // ebx

  v1 = (KSPIN_LOCK *)((char *)this + 1000);
  *((_BYTE *)this + 1009) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)this + 125);
  v3 = *((_DWORD *)this + 248);
  *((_DWORD *)this + 248) = 2;
  KeReleaseSpinLock(v1, *((_BYTE *)v1 + 9));
  SmFx::StateMachineEngine::StateMachineEngineImpl::SetRunningDetails(this, 0, 1);
  v5 = v3 - 3;
  if ( v5 )
  {
    if ( v5 != 1 )
      return;
    SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteEventAction(v4, (__int128 *)this + 60);
    *((_OWORD *)this + 60) = 0LL;
  }
  else
  {
    SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteEventAction(v4, (__int128 *)this + 60);
    SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteCurrentState(this);
  }
  *((_BYTE *)v1 + 9) = KeAcquireSpinLockRaiseToDpc(v1);
  SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(this);
}
