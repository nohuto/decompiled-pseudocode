/*
 * XREFs of HUBDSM_StoppingTimerAndRequestingCycleOnStopSuspend @ 0x140024E10
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StopTimer @ 0x140033B5C (HUBMISC_StopTimer.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_StoppingTimerAndRequestingCycleOnStopSuspend(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = HUBMISC_StopTimer(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3011LL);
  return v2;
}
