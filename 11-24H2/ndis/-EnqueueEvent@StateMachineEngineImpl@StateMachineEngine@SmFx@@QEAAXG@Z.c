/*
 * XREFs of ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x140059DB0
 * Callers:
 *     ?UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z @ 0x14006CF80 (-UpdateIdleCondition@NdisWdfIdle@@QEAAXW4_NDIS_IDLE_CONDITION@@@Z.c)
 *     ??1NdisWdfIdle@@QEAA@XZ @ 0x140071BF0 (--1NdisWdfIdle@@QEAA@XZ.c)
 *     ndisWdfIdleTimerFired @ 0x1400AFC50 (ndisWdfIdleTimerFired.c)
 * Callees:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140059E80 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z @ 0x14005A7F0 (-SetRunningDetails@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXE_N@Z.c)
 *     ?EnqueueEventWithDisposition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x14005A830 (-EnqueueEventWithDisposition@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 *     ?LogEventEnqueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXG@Z @ 0x1400E69AC (-LogEventEnqueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXG@Z.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEvent(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned __int16 a2)
{
  KIRQL v4; // si
  int v5; // eax
  bool v6; // di
  SmFx::StateMachineEngine::StateMachineEngineImpl *v7; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)this + 125);
  *((_BYTE *)this + 1009) = v4;
  v5 = *((_DWORD *)this + 248);
  if ( v5 == 5 )
  {
    if ( a2 == *((_WORD *)this + 440) )
    {
      SmFx::StateMachineEngine::StateMachineEngineImpl::LogEventEnqueue(this, a2);
      *((_WORD *)this + 440) = 0;
      goto LABEL_5;
    }
    v6 = 0;
  }
  else
  {
    v6 = v5 == 1;
  }
  if ( !SmFx::StateMachineEngine::StateMachineEngineImpl::EnqueueEventWithDisposition(this, a2) )
    return;
  if ( !v6 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)this + 125, *((_BYTE *)this + 1009));
    return;
  }
LABEL_5:
  SmFx::StateMachineEngine::StateMachineEngineImpl::SetRunningDetails(this, v4, 0);
  SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(v7);
}
