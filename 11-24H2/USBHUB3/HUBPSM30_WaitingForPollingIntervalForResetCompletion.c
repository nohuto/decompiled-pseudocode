/*
 * XREFs of HUBPSM30_WaitingForPollingIntervalForResetCompletion @ 0x140014830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPSM30_WaitingForPollingIntervalForResetCompletion(__int64 a1)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 240LL),
    -5000000LL);
  return 1000LL;
}
