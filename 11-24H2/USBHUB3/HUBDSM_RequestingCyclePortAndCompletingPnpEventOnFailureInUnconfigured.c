/*
 * XREFs of HUBDSM_RequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured @ 0x140023340
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerEvent @ 0x14001BAFC (HUBPDO_SignalPnpPowerEvent.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_RequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3011LL);
  HUBPDO_SignalPnpPowerEvent(v1);
  return 4077LL;
}
