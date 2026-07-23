/*
 * XREFs of NtPowerInformation @ 0x180160C20
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800DC860 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpSystemBootStatusRequest @ 0x18010E468 (RtlpSystemBootStatusRequest.c)
 *     RtlSetSystemBootStatus @ 0x18010E720 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatus @ 0x18010F1C0 (RtlGetSystemBootStatus.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x18010F270 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlpSetClearExecutionRequiredRequest @ 0x18011330C (RtlpSetClearExecutionRequiredRequest.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x18013C8E0 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x18013C920 (RtlUnlockBootStatusData.c)
 *     RtlpRecordBootStatusData @ 0x18013CC38 (RtlpRecordBootStatusData.c)
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
