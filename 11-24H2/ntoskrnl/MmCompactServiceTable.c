/*
 * XREFs of MmCompactServiceTable @ 0x1407FBB58
 * Callers:
 *     PsInitializeWin32kServiceTable @ 0x140C368CC (PsInitializeWin32kServiceTable.c)
 * Callees:
 *     MmLockLoadedDataTableEntry @ 0x1402BBA08 (MmLockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1402BBE58 (MmUnlockLoadedDataTableEntry.c)
 *     MiCompactServiceTable @ 0x1407FB9AC (MiCompactServiceTable.c)
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
