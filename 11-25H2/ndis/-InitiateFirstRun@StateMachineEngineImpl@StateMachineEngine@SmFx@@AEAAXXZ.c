/*
 * XREFs of ?InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400ED7E8
 * Callers:
 *     ?Initialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@@Z @ 0x1400ED6BC (-Initialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAJAEBUSTATE_MACHINE_ENGINE_CONFIG.c)
 * Callees:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140074B00 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z @ 0x140074DE0 (-UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x140074FA0 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z @ 0x140075470 (-SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z.c)
 *     ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400ED414 (-ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@XZ.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::InitiateFirstRun(KSPIN_LOCK *this)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  unsigned __int8 v4; // bl
  unsigned __int8 *v5; // rax
  int v6; // r8d
  int v7; // ebx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v1 = this + 125;
  v3 = KeAcquireSpinLockRaiseToDpc(this + 125);
  *((_BYTE *)v1 + 9) = v3;
  *((_DWORD *)this + 248) = 2;
  v4 = v3;
  KeReleaseSpinLock(v1, *((_BYTE *)v1 + 9));
  SmFx::StateMachineEngine::StateMachineEngineImpl::SetRunningDetails(
    (SmFx::StateMachineEngine::StateMachineEngineImpl *)this,
    v4,
    0);
  v5 = (unsigned __int8 *)this[111];
  DWORD1(v8) &= v6;
  LODWORD(v8) = 6;
  *((_QWORD *)&v8 + 1) = *((_QWORD *)v5 + 1) + 2LL * *v5;
  v7 = SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteEventAction((__int64)this, &v8);
  if ( v7 == 2 )
    v7 = SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteCurrentState((SmFx::StateMachineEngine::StateMachineEngineImpl *)this);
  *((_BYTE *)v1 + 9) = KeAcquireSpinLockRaiseToDpc(v1);
  if ( v7 == 1 )
    SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue((SmFx::StateMachineEngine::StateMachineEngineImpl *)this);
  else
    SmFx::StateMachineEngine::StateMachineEngineImpl::UpdateEngineState((__int64)this, v7);
}
