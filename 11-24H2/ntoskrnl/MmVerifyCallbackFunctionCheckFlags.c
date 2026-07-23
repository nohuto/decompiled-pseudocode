/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x1404F3DC4
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x14077A3A0 (PsSetCreateThreadNotifyRoutineEx.c)
 *     ObRegisterCallbacks @ 0x1409C5AA0 (ObRegisterCallbacks.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8C77C (PspSetCreateProcessNotifyRoutine.c)
 *     MmVerifyCallbackFunction @ 0x140AA4614 (MmVerifyCallbackFunction.c)
 * Callees:
 *     MiUnlockLoadedDataTableEntry @ 0x1402BBA24 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmVerifyCallbackFunctionCheckFlags(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  v4 = MiLockLoadedDataTableEntry(a1, 1);
  if ( v4 )
  {
    if ( !a2 || (a2 & *(_DWORD *)(v4 + 104)) != 0 )
      v3 = 1;
    MiUnlockLoadedDataTableEntry(v4, 1);
  }
  return v3;
}
