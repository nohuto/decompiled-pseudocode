/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14030F0D0
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTracePassiveCooling @ 0x14074A928 (PopDiagTracePassiveCooling.c)
 *     PopPowerAdapterPublishRecState @ 0x14074F05C (PopPowerAdapterPublishRecState.c)
 *     PopNetGetNextDueRefreshTime @ 0x14074FF84 (PopNetGetNextDueRefreshTime.c)
 *     ExpRefreshSystemTime @ 0x1407A73C4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CB130 (CmpUpdateReorganizeRegistryValues.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140A7DC2C (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTraceActiveCooling @ 0x140AB9958 (PopDiagTraceActiveCooling.c)
 *     ExpSetSystemTime @ 0x140B5DCB0 (ExpSetSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  *v4 = *v3 - (unsigned __int64)CurrentServerSiloGlobals[76].Blink[27].Blink;
}
