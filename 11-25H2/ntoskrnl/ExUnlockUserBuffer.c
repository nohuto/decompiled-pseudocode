/*
 * XREFs of ExUnlockUserBuffer @ 0x1402D31E0
 * Callers:
 *     ExpGetLookasideInformation @ 0x1402D1FA8 (ExpGetLookasideInformation.c)
 *     KdSystemDebugControl @ 0x14072E220 (KdSystemDebugControl.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407ADB28 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x1407AE400 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407AE860 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407AEB10 (NtQueryDriverEntryOrder.c)
 *     MiCopyLargeVad @ 0x1407F06EC (MiCopyLargeVad.c)
 *     NtEnumerateBootEntries @ 0x140820970 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140821260 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140821EF0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140822258 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     NtSystemDebugControl @ 0x140A53910 (NtSystemDebugControl.c)
 * Callees:
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExUnlockUserBuffer(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
