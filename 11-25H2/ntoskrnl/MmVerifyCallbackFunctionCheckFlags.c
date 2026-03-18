/*
 * XREFs of MmVerifyCallbackFunctionCheckFlags @ 0x1404F3D14
 * Callers:
 *     PsSetCreateThreadNotifyRoutineEx @ 0x14076A5F0 (PsSetCreateThreadNotifyRoutineEx.c)
 *     ObRegisterCallbacks @ 0x1409D7AE0 (ObRegisterCallbacks.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8B2EC (PspSetCreateProcessNotifyRoutine.c)
 *     MmVerifyCallbackFunction @ 0x140AA4504 (MmVerifyCallbackFunction.c)
 * Callees:
 *     MiUnlockLoadedDataTableEntry @ 0x14036DE44 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
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
