/*
 * XREFs of PpmParkReportParkedCore @ 0x1403519DC
 * Callers:
 *     PpmPerfAction @ 0x140351770 (PpmPerfAction.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1403B5A90 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeCheckProcessorAffinityEx @ 0x1403C9F30 (KeCheckProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1403E9560 (KeTransitionProcessorParkState.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403E9E20 (KeInterlockedSetProcessorAffinityEx.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x14048A97C (PpmEventCoreParkingStateChangeEx.c)
 */

__int64 __fastcall PpmParkReportParkedCore(struct _KPRCB *a1)
{
  unsigned int Number; // ebx
  bool v3; // si
  int v4; // r14d
  int v5; // edx
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // al
  __int64 v10; // rdx
  unsigned __int32 *SchedulerAssist; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 v14; // eax
  unsigned __int32 v15; // ett

  Number = a1->Number;
  v3 = (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewSoftParkingMask, Number) != 0;
  v4 = KeCheckProcessorAffinityEx(&PpmParkNewForceParkingMask, Number);
  v5 = v3 + 1;
  if ( v4 )
    v5 = 3;
  v6 = 0;
  if ( !v4 )
    v6 = v3;
  KeTransitionProcessorParkState(a1, v5);
  v7 = a1->Number;
  a1->PowerState.Parked = 1;
  KeInterlockedSetProcessorAffinityEx(&PpmPerfCoreParkingMask, v7, v8);
  v9 = KeDisableInterrupts();
  a1->InterruptRate = 0;
  a1->InterruptLastCount = a1->InterruptCount;
  if ( v9 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v14 = *SchedulerAssist;
      do
      {
        v10 = v14;
        LODWORD(v10) = v14 & 0xFFDFFFFF;
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v14 & 0xFFDFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( v6 )
  {
    KeInterlockedSetProcessorAffinityEx(&PpmParkSoftParkingMask, a1->Number, SchedulerAssist);
    a1->PowerState.SoftParked = 1;
  }
  if ( v4 )
    KeInterlockedSetProcessorAffinityEx(&PpmParkForceParkingMask, a1->Number, SchedulerAssist);
  LOBYTE(v10) = v6;
  PpmEventCoreParkingStateChangeEx(a1, v10);
  return PpmIdleUpdateProcessorLatencyLimit(a1, 0LL);
}
