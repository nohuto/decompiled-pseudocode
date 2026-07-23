/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x1402BA56C
 * Callers:
 *     LdrpGetImageSize @ 0x1402BA4A8 (LdrpGetImageSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402DCE08 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x140A3C6A8 (LdrpResGetMappingSize.c)
 * Callees:
 *     MiUnlockLoadedDataTableEntry @ 0x1402BBA24 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
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
