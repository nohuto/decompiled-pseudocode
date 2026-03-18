/*
 * XREFs of AslAlloc @ 0x14082B9C0
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1407F10C4 (SdbOpenDatabaseEx.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x1407F15A0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpSafeAllocAndConcatW @ 0x1407F1FDC (SdbpSafeAllocAndConcatW.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1407F347C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407F38C0 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCreateSearchDBContext @ 0x1407F4460 (SdbpCreateSearchDBContext.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407F4BE4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x1407F53A0 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1407F5A20 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x1407F6250 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x1407F6A54 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1407F7524 (SdbpOpenCompressedDatabase.c)
 *     SdbpCheckAllAttributes @ 0x1407F77EC (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x1407F86DC (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1407F8824 (AslStringAnsiToUnicode.c)
 *     AslRegistryBuildMachinePath @ 0x1407F8CCC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407F8DB0 (AslRegistryBuildUserPath.c)
 *     AslRegistryGetString @ 0x1407F9084 (AslRegistryGetString.c)
 *     AslFileMappingCreateFromImageView @ 0x1407F949C (AslFileMappingCreateFromImageView.c)
 *     AslPathToNetworkPathNt @ 0x1407FA2A4 (AslPathToNetworkPathNt.c)
 *     AslPathWildcardFindFirst @ 0x1407FA534 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1407FAB2C (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x1407FB2F0 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x1407FB430 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407FB620 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1407FBB08 (AslpProcessMatchRegNode.c)
 *     AslEnvExpandStrings2 @ 0x1407FBECC (AslEnvExpandStrings2.c)
 *     AslpFileGetVersionBlock @ 0x1407FEA10 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1407FF218 (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileLargeMapCreate @ 0x1408008A0 (AslpFileLargeMapCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x140828E8C (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x140829000 (AslStringDuplicate.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140829934 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbInitDatabaseInMemory @ 0x14082B8E8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x14082BA08 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x140A75D30 (AslFileMappingCreate.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
