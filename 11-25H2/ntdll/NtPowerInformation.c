/*
 * XREFs of NtPowerInformation @ 0x180163DF0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800DE890 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpSystemBootStatusRequest @ 0x1801161AC (RtlpSystemBootStatusRequest.c)
 *     RtlSetSystemBootStatus @ 0x1801163B0 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatus @ 0x180116DB0 (RtlGetSystemBootStatus.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x180116E60 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlpSetClearExecutionRequiredRequest @ 0x18011B41C (RtlpSetClearExecutionRequiredRequest.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x18013FE20 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x18013FE60 (RtlUnlockBootStatusData.c)
 *     RtlpRecordBootStatusData @ 0x180140178 (RtlpRecordBootStatusData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 95;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
