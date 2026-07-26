/*
 * XREFs of ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140074B00
 * Callers:
 *     ndisDispatchRequest @ 0x140029830 (ndisDispatchRequest.c)
 *     ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x140074A30 (-EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z.c)
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400837D0 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400ED7E8 (-InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400EDC64 (-WorkerCallback@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 * Callees:
 *     ?DequeueEventForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAGPEAUEVENT_ACTION@123@@Z @ 0x140074C50 (-DequeueEventForCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAGPEAUEVENT_ACTI.c)
 *     ?UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z @ 0x140074DE0 (-UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z.c)
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x140074FA0 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@XZ @ 0x1400ED414 (-ExecuteCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@XZ.c)
 *     ?FindAndDiscardSingleInstanceOfEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x1400ED5DC (-FindAndDiscardSingleInstanceOfEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  int v1; // eax
  bool v3; // bp
  unsigned int v4; // ebx
  KSPIN_LOCK *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 248);
  *((_DWORD *)this + 248) = 2;
  v3 = v1 == 5;
LABEL_2:
  v4 = 2;
  while ( v4 == 2 )
  {
    v6 = 0LL;
    if ( v3 )
    {
      v3 = 0;
      v6 = *((_OWORD *)this + 60);
    }
    else if ( !SmFx::StateMachineEngine::StateMachineEngineImpl::DequeueEventForCurrentState(
                 this,
                 (struct SmFx::StateMachineEngine::StateMachineEngineImpl::EVENT_ACTION *)&v6) )
    {
      v4 = 1;
      break;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)this + 125, *((_BYTE *)this + 1009));
    v4 = SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteEventAction(this, &v6);
    if ( v4 == 2 )
      v4 = SmFx::StateMachineEngine::StateMachineEngineImpl::ExecuteCurrentState(this);
    v5 = (KSPIN_LOCK *)((char *)this + 1000);
    if ( v4 == 1 )
    {
      v4 = 2;
      *((_BYTE *)this + 1009) = KeAcquireSpinLockRaiseToDpc(v5);
    }
    else
    {
      *((_BYTE *)this + 1009) = KeAcquireSpinLockRaiseToDpc(v5);
      if ( v4 == 5
        && SmFx::StateMachineEngine::StateMachineEngineImpl::FindAndDiscardSingleInstanceOfEvent(
             this,
             *((_WORD *)this + 440)) )
      {
        *((_WORD *)this + 440) = 0;
        v3 = 1;
        goto LABEL_2;
      }
    }
  }
  SmFx::StateMachineEngine::StateMachineEngineImpl::UpdateEngineState(this, v4);
}
