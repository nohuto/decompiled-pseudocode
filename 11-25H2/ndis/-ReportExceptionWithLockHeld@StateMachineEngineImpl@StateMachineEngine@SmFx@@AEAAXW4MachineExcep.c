/*
 * XREFs of ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x14008F980
 * Callers:
 *     ndisDispatchRequest @ 0x140029830 (ndisDispatchRequest.c)
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400837D0 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x140096130 (-AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 *     ?ReportException@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x1400EDBC0 (-ReportException@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z.c)
 * Callees:
 *     ?GetStateIdFromStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGG@Z @ 0x140075410 (-GetStateIdFromStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGG@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned int a2,
        __int16 a3,
        unsigned __int16 a4)
{
  unsigned __int16 StateIdFromStateIndex; // ax
  __int64 v8; // r8
  void (__fastcall *v9)(_QWORD, _QWORD, __int64, _QWORD); // r10

  *((_DWORD *)this + 2 * *((unsigned __int8 *)this + 977) + 192) = a2;
  *((_WORD *)this + 4 * *((unsigned __int8 *)this + 977) + 386) = a3;
  *((_WORD *)this + 4 * *((unsigned __int8 *)this + 977) + 387) = a4;
  *((_BYTE *)this + 977) = (*((_BYTE *)this + 977) + 1) & 7;
  KeReleaseSpinLock((PKSPIN_LOCK)this + 125, *((_BYTE *)this + 1009));
  if ( *((_QWORD *)this + 115) )
  {
    StateIdFromStateIndex = SmFx::StateMachineEngine::StateMachineEngineImpl::GetStateIdFromStateIndex(this, a4);
    v9(*((_QWORD *)this + 112), a2, v8, StateIdFromStateIndex);
  }
}
