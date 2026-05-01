/*
 * XREFs of memmove_0 @ 0x1800A780E
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18001C99C (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     PsmHostStateNotification2 @ 0x18001CD40 (PsmHostStateNotification2.c)
 *     SdbGetDatabaseID @ 0x180091F60 (SdbGetDatabaseID.c)
 *     SdbpGetProcessHistory @ 0x180094DC8 (SdbpGetProcessHistory.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180099C90 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpInitializeSearchDBContext @ 0x18009B5C0 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009B9F8 (SdbpResolveMatchingFile.c)
 *     AslpFileGetVersionBlock @ 0x1800A1994 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A224C (AslpFileGetVersionBlockImageOnly.c)
 *     AslPathClean @ 0x1800A3910 (AslPathClean.c)
 *     AslPathWildcardFindNext @ 0x1800A4854 (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
