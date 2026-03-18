/*
 * XREFs of ExLocalTimeToSystemTime @ 0x140348040
 * Callers:
 *     HalpAcpiRealTimeToUtcTime @ 0x1406FCBF8 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x14075C844 (PopNetGetNextDueRefreshTime.c)
 *     ExpRefreshSystemTime @ 0x1407B6864 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B68020 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _QWORD *v3; // r10
  _QWORD *v4; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  *v4 = (char *)CurrentServerSiloGlobals[76].Blink[27].Blink + *v3;
}
