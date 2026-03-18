/*
 * XREFs of PopCheckpointSystemSleepUnsafe @ 0x140B500E0
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x140AA7BD0 (PopEnableSystemSleepCheckpoint.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x1404425C0 (HalSetEnvironmentVariableEx.c)
 *     VslReportBugCheckProgress @ 0x14058A8A0 (VslReportBugCheckProgress.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407ABFC0 (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 __fastcall PopCheckpointSystemSleepUnsafe(char a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( !PoAllProcIntrDisabled )
    return ExSetFirmwareEnvironmentVariable((__int64)L"*,", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v2, 1, 1);
  if ( PopCheckpointEfiRuntimeRedirected )
    return VslReportBugCheckProgress(
             (char *)L"SystemSleepCheckpoint",
             (__int128 *)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
             &v2,
             1u,
             1);
  return HalSetEnvironmentVariableEx(
           L"SystemSleepCheckpoint",
           (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
           (__int64)&v2,
           1,
           1);
}
