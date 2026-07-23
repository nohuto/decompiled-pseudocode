/*
 * XREFs of PpmParkReportSoftParkChange @ 0x1403D7120
 * Callers:
 *     PpmPerfAction @ 0x1402AFC80 (PpmPerfAction.c)
 * Callees:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1402AE9D0 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1403D720C (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x1403D79A8 (PpmEventCoreParkingSoftParkedStateChange.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403D7B30 (KeInterlockedClearProcessorAffinityEx.c)
 */

__int64 __fastcall PpmParkReportSoftParkChange(struct _KPRCB *a1)
{
  unsigned int Number; // r14d
  char v3; // bp
  char v4; // si
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx

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
  v7 = a1->Number;
  if ( v4 )
    KeInterlockedSetProcessorAffinityEx(&PpmParkSoftParkingMask, v7, v6);
  else
    KeInterlockedClearProcessorAffinityEx(&PpmParkSoftParkingMask, v7);
  v9 = a1->Number;
  if ( v3 )
    KeInterlockedSetProcessorAffinityEx(&PpmParkForceParkingMask, v9, v8);
  else
    KeInterlockedClearProcessorAffinityEx(&PpmParkForceParkingMask, v9);
  LOBYTE(v10) = v4;
  a1->PowerState.SoftParked = v4;
  PpmEventCoreParkingSoftParkedStateChange(a1, v10);
  return PpmIdleUpdateProcessorLatencyLimit(a1, 0LL);
}
