/*
 * XREFs of MmCompactServiceTable @ 0x1407FB3E8
 * Callers:
 *     PsInitializeWin32kServiceTable @ 0x140C3478C (PsInitializeWin32kServiceTable.c)
 * Callees:
 *     MmLockLoadedDataTableEntry @ 0x1402C6E88 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402C72D8 (MmUnlockLoadedDataTableEntry.c)
 *     MiCompactServiceTable @ 0x1407FB23C (MiCompactServiceTable.c)
 */

__int64 __fastcall MmCompactServiceTable(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned int v4; // ebx

  v1 = MmLockLoadedDataTableEntry(a1);
  v2 = v1;
  if ( !v1 )
    return 3221226021LL;
  v4 = MiCompactServiceTable(v1);
  MmUnlockLoadedDataTableEntry(v2);
  return v4;
}
