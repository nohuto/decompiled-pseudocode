/*
 * XREFs of BcdFlushStore @ 0x1408020A4
 * Callers:
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075270C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdClearPendingResume @ 0x140A26F08 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1404A6620 (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x14069CF80 (ZwFlushKey.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdFlushStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  NTSTATUS v5; // r8d
  void *v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  NTSTATUS v10; // ebx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 >= 0 )
  {
    v7 = (void *)BiSanitizeHandle((__int64)BcdStoreHandle);
    v8 = ZwFlushKey(v7);
    LOBYTE(v9) = v3;
    v10 = v8;
    BiReleaseBcdSyncMutant(v9);
    return v10;
  }
  else
  {
    BiLogMessage(4LL, L"BcdFlushStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v5;
  }
}
