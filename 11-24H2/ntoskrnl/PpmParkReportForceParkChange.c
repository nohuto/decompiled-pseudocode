/*
 * XREFs of PpmParkReportForceParkChange @ 0x1405D7BEC
 * Callers:
 *     PpmPerfAction @ 0x1402AFC80 (PpmPerfAction.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1403D720C (KeTransitionProcessorParkState.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403D7B30 (KeInterlockedClearProcessorAffinityEx.c)
 *     PpmEventCoreParkingForceParkedStateChange @ 0x1405D647C (PpmEventCoreParkingForceParkedStateChange.c)
 */

void __fastcall PpmParkReportForceParkChange(struct _KPRCB *a1)
{
  unsigned int Number; // r14d
  char v3; // si
  char v4; // bp
  unsigned int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // edx

  Number = a1->Number;
  v3 = 0;
  if ( (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewForceParkingMask.Count, Number) )
  {
    v4 = 1;
    v5 = 3;
  }
  else
  {
    v4 = 0;
    v5 = 1;
    if ( (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewSoftParkingMask.Count, Number) )
    {
      v3 = 1;
      v5 = 2;
    }
  }
  KeTransitionProcessorParkState(a1, v5);
  v6 = a1->Number;
  if ( v4 )
    KeInterlockedSetProcessorAffinityEx((__int64)&PpmParkForceParkingMask, v6);
  else
    KeInterlockedClearProcessorAffinityEx((__int64)&PpmParkForceParkingMask, v6);
  v7 = a1->Number;
  if ( v3 )
    KeInterlockedSetProcessorAffinityEx((__int64)&PpmParkSoftParkingMask, v7);
  else
    KeInterlockedClearProcessorAffinityEx((__int64)&PpmParkSoftParkingMask, v7);
  a1->PowerState.SoftParked = v3;
  PpmEventCoreParkingForceParkedStateChange((__int64)a1, v4);
}
