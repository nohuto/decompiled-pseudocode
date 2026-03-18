/*
 * XREFs of BcdFlushStore @ 0x140811C1C
 * Callers:
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075F12C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopBcdClearPendingResume @ 0x1409C04F8 (PopBcdClearPendingResume.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1404A6FD0 (BiSanitizeHandle.c)
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     ZwFlushKey @ 0x1406A8250 (ZwFlushKey.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 */

__int64 __fastcall BcdFlushStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // eax
  unsigned int v5; // r8d
  void *v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 >= 0 )
  {
    v7 = (void *)BiSanitizeHandle(a1);
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
