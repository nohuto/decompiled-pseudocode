/*
 * XREFs of ?_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z @ 0x140067ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x14000C8D0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPowerIdleMachine::_PowerTimeoutDpcRoutine(
        _KDPC *Dpc,
        FxPowerIdleMachine *Context,
        void *SystemArgument1,
        void *SystemArgument2)
{
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  char v6; // [rsp+20h] [rbp-18h]
  int (__fastcall *pDriverDeviceAdd)(WDFDRIVER__ *, WDFDEVICE_INIT *); // [rsp+48h] [rbp+10h] BYREF

  KeAcquireSpinLockAtDpcLevel(&Context->m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(Context, PowerIdleEventTimerExpired);
  pDriverDeviceAdd = (int (__fastcall *)(WDFDRIVER__ *, WDFDEVICE_INIT *))Context[2].m_TagTracker->m_OwningObject->m_ChildEntry.Blink[11].Flink;
  DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
  if ( DpcNotifyRoutine )
  {
    v6 = 2;
    DpcNotifyRoutine(&pDriverDeviceAdd, 8u, 2164260864u, 3938u, v6);
  }
  KeReleaseSpinLockFromDpcLevel(&Context->m_Lock.m_Lock);
}
