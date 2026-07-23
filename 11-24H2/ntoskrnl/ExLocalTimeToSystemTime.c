/*
 * XREFs of ExLocalTimeToSystemTime @ 0x140326A40
 * Callers:
 *     HalpAcpiRealTimeToUtcTime @ 0x1406FA838 (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x14075B7E4 (PopNetGetNextDueRefreshTime.c)
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B6A160 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _QWORD *v3; // r10
  _QWORD *v4; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  *v4 = (char *)CurrentServerSiloGlobals[76].Blink[27].Blink + *v3;
}
