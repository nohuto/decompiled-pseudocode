/*
 * XREFs of NtPowerInformation @ 0x180162860
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800E1310 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpSystemBootStatusRequest @ 0x18011321C (RtlpSystemBootStatusRequest.c)
 *     RtlSetSystemBootStatus @ 0x180113420 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatus @ 0x180113EC0 (RtlGetSystemBootStatus.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x180113F70 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlpSetClearExecutionRequiredRequest @ 0x180118398 (RtlpSetClearExecutionRequiredRequest.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x18013E6F0 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x18013E730 (RtlUnlockBootStatusData.c)
 *     RtlpRecordBootStatusData @ 0x18013EA48 (RtlpRecordBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtPowerInformation()
{
  __int64 result; // rax

  result = 95LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
