/*
 * XREFs of PopClearSystemSleepCheckpoint @ 0x140A97CE4
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140B69CD0 (PopUnlockAfterSleepWorker.c)
 *     PopCheckShutdownMarker @ 0x140C2F7D4 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExSetFirmwareEnvironmentVariable @ 0x1407BB8C0 (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 __fastcall PopClearSystemSleepCheckpoint(char a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = 0;
  if ( (PopCheckpointSystemSleepEnabled || a1) && (PopCheckpointSystemSleepSimulateFlags & 2) == 0 )
  {
    v1 = ExSetFirmwareEnvironmentVariable((__int64)L"*,", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, 0LL, 0, 1);
    if ( v1 == -1073741568 )
      v1 = 0;
  }
  PopCheckpointSystemSleepEnabled = 0;
  result = v1;
  PopSleepCheckpoint = 0;
  _InterlockedExchange(&PopSleepCheckpointStatus, 0);
  return result;
}
