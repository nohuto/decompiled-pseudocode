/*
 * XREFs of ExSystemTimeToLocalTime @ 0x1403266E0
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTracePassiveCooling @ 0x140754E5C (PopDiagTracePassiveCooling.c)
 *     PopPowerAdapterPublishRecState @ 0x14075A5D4 (PopPowerAdapterPublishRecState.c)
 *     PopNetGetNextDueRefreshTime @ 0x14075B7E4 (PopNetGetNextDueRefreshTime.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x140761CB0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407DAE44 (CmpUpdateReorganizeRegistryValues.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140A7BD0C (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTraceActiveCooling @ 0x140AB8AC8 (PopDiagTraceActiveCooling.c)
 *     ExpSetSystemTime @ 0x140B6E630 (ExpSetSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  __int64 CurrentServerSiloGlobals; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(SystemTime, LocalTime);
  *v4 = *v3 - *(_QWORD *)(*(_QWORD *)(CurrentServerSiloGlobals + 1224) + 440LL);
}
