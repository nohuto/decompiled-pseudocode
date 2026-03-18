/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x14036D5C4
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F2AFC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x14036D500 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x140A54258 (LdrpResGetMappingSize.c)
 * Callees:
 *     MiUnlockLoadedDataTableEntry @ 0x14036DE44 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall LdrpKrnGetDataTableEntry(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = MiLockLoadedDataTableEntry(a1, 0LL);
  v2 = v1;
  if ( v1 )
    MiUnlockLoadedDataTableEntry(v1, 0LL);
  return v2;
}
