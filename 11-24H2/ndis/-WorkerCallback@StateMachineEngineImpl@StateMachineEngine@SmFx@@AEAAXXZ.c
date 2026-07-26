/*
 * XREFs of ?WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E6D50
 * Callers:
 *     _lambda_c276094d149607b901f7fae525da7e78_::_lambda_invoker_cdecl_ @ 0x1400E63B0 (_lambda_c276094d149607b901f7fae525da7e78_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140059E80 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z @ 0x14005A160 (-UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005A320 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z @ 0x14005A7F0 (-SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z.c)
 *     ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400E6500 (-ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@XZ.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::WorkerCallback(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  KSPIN_LOCK *v1; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // ebx
  SmFx::StateMachineEngine::StateMachineEngineImpl *v6; // rcx
  int v7; // ebx

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
    *((_BYTE *)v1 + 9) = KeAcquireSpinLockRaiseToDpc(v1);
    v6 = this;
    goto LABEL_5;
  }
  SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteEventAction(v4, (__int128 *)this + 60);
  *((_OWORD *)this + 60) = 0LL;
  v7 = SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteCurrentState(this);
  *((_BYTE *)v1 + 9) = KeAcquireSpinLockRaiseToDpc(v1);
  v6 = this;
  if ( v7 == 1 )
  {
LABEL_5:
    SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(v6);
    return;
  }
  SmFx::StateMachineEngine::StateMachineEngineImpl::UpdateEngineState((__int64)this, v7);
}
