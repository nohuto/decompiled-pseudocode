/*
 * XREFs of PpmParkReportParkedCore @ 0x1403B0AB8
 * Callers:
 *     PpmPerfAction @ 0x1403B0150 (PpmPerfAction.c)
 * Callees:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x140204140 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTransitionProcessorParkState @ 0x1403DFF18 (KeTransitionProcessorParkState.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403E07B0 (KeInterlockedSetProcessorAffinityEx.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x14048B284 (PpmEventCoreParkingStateChangeEx.c)
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
  __int64 v9; // r9
  bool v10; // al
  __int64 v11; // rdx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v13; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // ett

  Number = a1->Number;
  v3 = (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewSoftParkingMask.Count, Number) != 0;
  v4 = KeCheckProcessorAffinityEx(&PpmParkNewForceParkingMask.Count, Number);
  v5 = v3 + 1;
  if ( v4 )
    v5 = 3;
  v6 = 0;
  if ( !v4 )
    v6 = v3;
  KeTransitionProcessorParkState(a1, v5);
  v7 = a1->Number;
  a1->PowerState.Parked = 1;
  KeInterlockedSetProcessorAffinityEx(&PpmPerfCoreParkingMask, v7, v8, v9);
  v10 = KeDisableInterrupts();
  a1->InterruptRate = 0;
  a1->InterruptLastCount = a1->InterruptCount;
  if ( v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v11 = v16;
        LODWORD(v11) = v16 & 0xFFDFFFFF;
        v17 = v16;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( v6 )
  {
    KeInterlockedSetProcessorAffinityEx(&PpmParkSoftParkingMask, a1->Number, SchedulerAssist, v13);
    a1->PowerState.SoftParked = 1;
  }
  if ( v4 )
    KeInterlockedSetProcessorAffinityEx(&PpmParkForceParkingMask, a1->Number, SchedulerAssist, v13);
  LOBYTE(v11) = v6;
  PpmEventCoreParkingStateChangeEx(a1, v11);
  return PpmIdleUpdateProcessorLatencyLimit(a1, 0LL);
}
