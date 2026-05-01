/*
 * XREFs of AslFree @ 0x18009D6FC
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F6C8 (SdbShouldBlockPackageLaunch.c)
 *     SdbCloseDatabaseRead @ 0x180091E98 (SdbCloseDatabaseRead.c)
 *     SdbGetMergeRedirectPath @ 0x180092114 (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x1800922C4 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 *     SdbReleaseDatabase @ 0x180092888 (SdbReleaseDatabase.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x180092DBC (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x1800931E0 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpOpenDatabaseInMemory @ 0x180093C6C (SdbpOpenDatabaseInMemory.c)
 *     SdbpSafeAllocAndConcatW @ 0x180093E60 (SdbpSafeAllocAndConcatW.c)
 *     SdbInitDatabaseEx @ 0x180094584 (SdbInitDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x180095BCC (SdbResolveDatabaseEx.c)
 *     SdbpRemoveSDBLookupEntry @ 0x180096A04 (SdbpRemoveSDBLookupEntry.c)
 *     SdbpCheckAllAttributes @ 0x180096ABC (SdbpCheckAllAttributes.c)
 *     SdbpCheckMatchingDir @ 0x180099530 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1800996E0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180099C90 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingText @ 0x18009A040 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A16C (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A530 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009AD58 (SdbpGetMatchingTextAttributes.c)
 *     SdbpResolveMatchingFile @ 0x18009B9F8 (SdbpResolveMatchingFile.c)
 *     SdbpOpenCompressedDatabase @ 0x18009BDB4 (SdbpOpenCompressedDatabase.c)
 *     AslDoesFileExistNtPath @ 0x18009D444 (AslDoesFileExistNtPath.c)
 *     AslRegistryGetKey @ 0x18009D8F8 (AslRegistryGetKey.c)
 *     AslRegistryGetString @ 0x18009DA0C (AslRegistryGetString.c)
 *     AslGuidToString_UStr @ 0x18009DF5C (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x18009E0C0 (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x18009E218 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x18009E4BC (AslStringReplace.c)
 *     AslStringReplaceArray @ 0x18009E710 (AslStringReplaceArray.c)
 *     AslUnicodeStringFree @ 0x18009E9C4 (AslUnicodeStringFree.c)
 *     AslFileMappingDelete @ 0x18009ED88 (AslFileMappingDelete.c)
 *     AslFileFreeAttributes @ 0x18009FD5C (AslFileFreeAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1800A1994 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A224C (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileVerQueryBlock @ 0x1800A3380 (AslpFileVerQueryBlock.c)
 *     AslPathWildcardFindFirst @ 0x1800A4220 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A4854 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindClose @ 0x1800A53F0 (AslRegWildcardFindClose.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A59D0 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A5AC4 (AslpPathWildcardFreeMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1800A5CF0 (AslpProcessMatchRegNode.c)
 *     AslHashFree @ 0x1800A6114 (AslHashFree.c)
 *     AslEnvExpandStrings2 @ 0x1800A639C (AslEnvExpandStrings2.c)
 *     AslpFileLargeMapDelete @ 0x1800A7588 (AslpFileLargeMapDelete.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AslFree(void *a1, void *a2)
{
  BOOLEAN result; // al

  if ( a2 )
    return RtlFreeHeap(a1, 0, a2);
  return result;
}
