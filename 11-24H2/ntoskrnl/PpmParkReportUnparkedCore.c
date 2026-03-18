/*
 * XREFs of PpmParkReportUnparkedCore @ 0x140351950
 * Callers:
 *     PpmPerfAction @ 0x140351770 (PpmPerfAction.c)
 * Callees:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1403B5A90 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeTransitionProcessorParkState @ 0x1403E9560 (KeTransitionProcessorParkState.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403E9E90 (KeInterlockedClearProcessorAffinityEx.c)
 *     PpmEventCoreParkingStateChange @ 0x14048E1F8 (PpmEventCoreParkingStateChange.c)
 */

_PPM_IDLE_STATES *__fastcall PpmParkReportUnparkedCore(struct _KPRCB *a1)
{
  __int64 Number; // rdx
  _PPM_IDLE_STATES *result; // rax

  KeTransitionProcessorParkState(a1, 0);
  Number = a1->Number;
  a1->PowerState.Parked = 0;
  KeInterlockedClearProcessorAffinityEx(&PpmPerfCoreParkingMask, Number);
  KeInterlockedClearProcessorAffinityEx(&PpmParkForceParkingMask, a1->Number);
  if ( a1->PowerState.SoftParked )
  {
    KeInterlockedClearProcessorAffinityEx(&PpmParkSoftParkingMask, a1->Number);
    a1->PowerState.SoftParked = 0;
  }
  PpmEventCoreParkingStateChange(a1);
  PpmIdleUpdateProcessorLatencyLimit(a1, 0LL);
  result = a1->PowerState.IdleStates;
  if ( result )
  {
    if ( result->EnforceStateConstraints )
      a1->PowerState.IdlePolicy.ForceLightIdle = 1;
  }
  return result;
}
