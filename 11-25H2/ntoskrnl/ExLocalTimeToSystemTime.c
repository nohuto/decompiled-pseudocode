/*
 * XREFs of ExLocalTimeToSystemTime @ 0x1403104A0
 * Callers:
 *     HalpAcpiRealTimeToUtcTime @ 0x1406F0E08 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x14074FF84 (PopNetGetNextDueRefreshTime.c)
 *     ExpRefreshSystemTime @ 0x1407A73C4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B581F0 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _QWORD *v3; // r10
  _QWORD *v4; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  *v4 = (char *)CurrentServerSiloGlobals[76].Blink[27].Blink + *v3;
}
