/*
 * XREFs of memmove_0 @ 0x1800A7AFE
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18001C91C (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     PsmHostStateNotification2 @ 0x18001CCC0 (PsmHostStateNotification2.c)
 *     SdbGetDatabaseID @ 0x1800923C0 (SdbGetDatabaseID.c)
 *     SdbpGetProcessHistory @ 0x180095228 (SdbpGetProcessHistory.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180099FE0 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpInitializeSearchDBContext @ 0x18009B898 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009BCE8 (SdbpResolveMatchingFile.c)
 *     AslpFileGetVersionBlock @ 0x1800A1C84 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A253C (AslpFileGetVersionBlockImageOnly.c)
 *     AslPathClean @ 0x1800A3C00 (AslPathClean.c)
 *     AslPathWildcardFindNext @ 0x1800A4B44 (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
