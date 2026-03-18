/*
 * XREFs of AslAlloc @ 0x14095D3E4
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140800F84 (SdbOpenDatabaseEx.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801460 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpSafeAllocAndConcatW @ 0x140801E9C (SdbpSafeAllocAndConcatW.c)
 *     SdbQueryDataExTagID @ 0x1408023EC (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14080332C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803770 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804838 (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x140804F10 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140805590 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140805DC0 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x1408065C4 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140807094 (SdbpOpenCompressedDatabase.c)
 *     SdbpCheckAllAttributes @ 0x14080735C (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x14080824C (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140808394 (AslStringAnsiToUnicode.c)
 *     AslRegistryBuildMachinePath @ 0x14080883C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140808920 (AslRegistryBuildUserPath.c)
 *     AslRegistryGetString @ 0x140808BF4 (AslRegistryGetString.c)
 *     AslFileMappingCreateFromImageView @ 0x14080900C (AslFileMappingCreateFromImageView.c)
 *     AslPathToNetworkPathNt @ 0x140809E14 (AslPathToNetworkPathNt.c)
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080A69C (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x14080AE60 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x14080AFA0 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B190 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x14080B678 (AslpProcessMatchRegNode.c)
 *     AslEnvExpandStrings2 @ 0x14080BA3C (AslEnvExpandStrings2.c)
 *     AslpFileGetVersionBlock @ 0x14080E580 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x14080ED88 (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileLargeMapCreate @ 0x140810410 (AslpFileLargeMapCreate.c)
 *     AslFileMappingCreate @ 0x140959A94 (AslFileMappingCreate.c)
 *     AslStringDuplicate @ 0x14095A750 (AslStringDuplicate.c)
 *     AslStringUpcaseToMultiByteN @ 0x14095ACAC (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14095B714 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpOpenDatabaseInMemory @ 0x14095BC48 (SdbpOpenDatabaseInMemory.c)
 *     SdbInitDatabaseInMemory @ 0x14095D30C (SdbInitDatabaseInMemory.c)
 *     SdbpCreateSearchDBContext @ 0x140A85BE4 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void *__fastcall AslAlloc(__int64 a1, size_t a2)
{
  void *Pool2; // rax
  void *v4; // rbx

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v4 = Pool2;
  if ( Pool2 )
    memset_0(Pool2, 0, a2);
  return v4;
}
