/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x1402C830C
 * Callers:
 *     LdrpGetImageSize @ 0x1402C8248 (LdrpGetImageSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x14044EDC4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x140906C80 (LdrpResGetMappingSize.c)
 * Callees:
 *     MiUnlockLoadedDataTableEntry @ 0x1402C6EA4 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x1402C6F3C (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall LdrpKrnGetDataTableEntry(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = MiLockLoadedDataTableEntry(a1, 0);
  v2 = v1;
  if ( v1 )
    MiUnlockLoadedDataTableEntry(v1, 0);
  return v2;
}
