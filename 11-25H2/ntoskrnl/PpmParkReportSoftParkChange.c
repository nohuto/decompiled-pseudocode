/*
 * XREFs of PpmParkReportSoftParkChange @ 0x1403DFE2C
 * Callers:
 *     PpmPerfAction @ 0x1403B0150 (PpmPerfAction.c)
 * Callees:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x140204140 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1403DFF18 (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x1403E0698 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403E07B0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403E0820 (KeInterlockedClearProcessorAffinityEx.c)
 */

__int64 __fastcall PpmParkReportSoftParkChange(struct _KPRCB *a1)
{
  unsigned int Number; // r14d
  char v3; // bp
  char v4; // si
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx

  Number = a1->Number;
  v3 = 0;
  if ( (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewSoftParkingMask.Count, Number) )
  {
    v4 = 1;
    v5 = 2;
  }
  else
  {
    v4 = 0;
    v5 = 1;
    if ( (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewForceParkingMask.Count, Number) )
    {
      v3 = 1;
      v5 = 3;
    }
  }
  KeTransitionProcessorParkState(a1, v5);
  v8 = a1->Number;
  if ( v4 )
    KeInterlockedSetProcessorAffinityEx(&PpmParkSoftParkingMask, v8, v6, v7);
  else
    KeInterlockedClearProcessorAffinityEx(&PpmParkSoftParkingMask, v8);
  v11 = a1->Number;
  if ( v3 )
    KeInterlockedSetProcessorAffinityEx(&PpmParkForceParkingMask, v11, v9, v10);
  else
    KeInterlockedClearProcessorAffinityEx(&PpmParkForceParkingMask, v11);
  LOBYTE(v12) = v4;
  a1->PowerState.SoftParked = v4;
  PpmEventCoreParkingSoftParkedStateChange(a1, v12);
  return PpmIdleUpdateProcessorLatencyLimit(a1, 0LL);
}
