/*
 * XREFs of PpmParkReportParkedCore @ 0x1402B0804
 * Callers:
 *     PpmPerfAction @ 0x1402AFC80 (PpmPerfAction.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1402AE9D0 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1403D720C (KeTransitionProcessorParkState.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x1404857A4 (PpmEventCoreParkingStateChangeEx.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  __int64 v14; // rdx
  unsigned __int32 *SchedulerAssist; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 v18; // eax
  unsigned __int32 v19; // ett

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
  v13 = KeDisableInterrupts(v10, v9, v11, v12);
  a1->InterruptRate = 0;
  a1->InterruptLastCount = a1->InterruptCount;
  if ( v13 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v14 = v18;
        LODWORD(v14) = v18 & 0xFFDFFFFF;
        v19 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
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
  LOBYTE(v14) = v6;
  PpmEventCoreParkingStateChangeEx(a1, v14);
  return PpmIdleUpdateProcessorLatencyLimit(a1, 0LL);
}
