/*
 * XREFs of ExSystemTimeToLocalTime @ 0x140347CE0
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTracePassiveCooling @ 0x1407569DC (PopDiagTracePassiveCooling.c)
 *     PopPowerAdapterPublishRecState @ 0x14075B8C8 (PopPowerAdapterPublishRecState.c)
 *     PopNetGetNextDueRefreshTime @ 0x14075C844 (PopNetGetNextDueRefreshTime.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407624E0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     ExpRefreshSystemTime @ 0x1407B6864 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407DA8F4 (CmpUpdateReorganizeRegistryValues.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140A812AC (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTraceActiveCooling @ 0x140ABDA58 (PopDiagTraceActiveCooling.c)
 *     ExpSetSystemTime @ 0x140B6CD90 (ExpSetSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  __int64 CurrentServerSiloGlobals; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(SystemTime, LocalTime);
  *v4 = *v3 - *(_QWORD *)(*(_QWORD *)(CurrentServerSiloGlobals + 1224) + 440LL);
}
