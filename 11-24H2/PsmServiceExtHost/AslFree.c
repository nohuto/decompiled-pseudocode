/*
 * XREFs of AslFree @ 0x18009D9EC
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F648 (SdbShouldBlockPackageLaunch.c)
 *     SdbCloseDatabaseRead @ 0x1800922F8 (SdbCloseDatabaseRead.c)
 *     SdbGetMergeRedirectPath @ 0x180092574 (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x180092724 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x1800929B0 (SdbOpenDatabaseEx.c)
 *     SdbReleaseDatabase @ 0x180092CE8 (SdbReleaseDatabase.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x18009321C (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x180093640 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpOpenDatabaseInMemory @ 0x1800940CC (SdbpOpenDatabaseInMemory.c)
 *     SdbpSafeAllocAndConcatW @ 0x1800942C0 (SdbpSafeAllocAndConcatW.c)
 *     SdbInitDatabaseEx @ 0x1800949E4 (SdbInitDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x18009602C (SdbResolveDatabaseEx.c)
 *     SdbpRemoveSDBLookupEntry @ 0x180096E64 (SdbpRemoveSDBLookupEntry.c)
 *     SdbpCheckAllAttributes @ 0x180096F1C (SdbpCheckAllAttributes.c)
 *     SdbpCheckMatchingDir @ 0x180099880 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180099A30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180099FE0 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingText @ 0x18009A390 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A4BC (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A880 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009B0A8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpResolveMatchingFile @ 0x18009BCE8 (SdbpResolveMatchingFile.c)
 *     SdbpOpenCompressedDatabase @ 0x18009C0A4 (SdbpOpenCompressedDatabase.c)
 *     AslDoesFileExistNtPath @ 0x18009D734 (AslDoesFileExistNtPath.c)
 *     AslRegistryGetKey @ 0x18009DBE8 (AslRegistryGetKey.c)
 *     AslRegistryGetString @ 0x18009DCFC (AslRegistryGetString.c)
 *     AslGuidToString_UStr @ 0x18009E24C (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x18009E3B0 (AslStringAnsiToUnicode.c)
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x18009E7AC (AslStringReplace.c)
 *     AslStringReplaceArray @ 0x18009EA00 (AslStringReplaceArray.c)
 *     AslUnicodeStringFree @ 0x18009ECB4 (AslUnicodeStringFree.c)
 *     AslFileMappingDelete @ 0x18009F078 (AslFileMappingDelete.c)
 *     AslFileFreeAttributes @ 0x1800A004C (AslFileFreeAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1800A1C84 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A253C (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileVerQueryBlock @ 0x1800A3670 (AslpFileVerQueryBlock.c)
 *     AslPathWildcardFindFirst @ 0x1800A4510 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A4B44 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindClose @ 0x1800A56E0 (AslRegWildcardFindClose.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A5CC0 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A5DB4 (AslpPathWildcardFreeMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1800A5FE0 (AslpProcessMatchRegNode.c)
 *     AslHashFree @ 0x1800A6404 (AslHashFree.c)
 *     AslEnvExpandStrings2 @ 0x1800A668C (AslEnvExpandStrings2.c)
 *     AslpFileLargeMapDelete @ 0x1800A7878 (AslpFileLargeMapDelete.c)
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
