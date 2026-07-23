/*
 * XREFs of AslAlloc @ 0x140944EA4
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1408016C4 (SdbOpenDatabaseEx.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801BA0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpSafeAllocAndConcatW @ 0x1408025DC (SdbpSafeAllocAndConcatW.c)
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140803A6C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803EB0 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804F78 (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x140805650 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140806500 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140806D04 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1408077D4 (SdbpOpenCompressedDatabase.c)
 *     SdbpCheckAllAttributes @ 0x140807A9C (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x14080898C (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140808AD4 (AslStringAnsiToUnicode.c)
 *     AslRegistryBuildMachinePath @ 0x140808F7C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140809060 (AslRegistryBuildUserPath.c)
 *     AslRegistryGetString @ 0x140809334 (AslRegistryGetString.c)
 *     AslFileMappingCreateFromImageView @ 0x14080974C (AslFileMappingCreateFromImageView.c)
 *     AslPathToNetworkPathNt @ 0x14080A554 (AslPathToNetworkPathNt.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080ADDC (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x14080B5A0 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x14080B6E0 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B8D0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x14080BDB8 (AslpProcessMatchRegNode.c)
 *     AslEnvExpandStrings2 @ 0x14080C17C (AslEnvExpandStrings2.c)
 *     AslpFileGetVersionBlock @ 0x14080ECC0 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x14080F4C8 (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileLargeMapCreate @ 0x140810B50 (AslpFileLargeMapCreate.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     AslStringDuplicate @ 0x140942210 (AslStringDuplicate.c)
 *     AslStringUpcaseToMultiByteN @ 0x14094276C (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1409431D4 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpOpenDatabaseInMemory @ 0x140943708 (SdbpOpenDatabaseInMemory.c)
 *     SdbInitDatabaseInMemory @ 0x140944DCC (SdbInitDatabaseInMemory.c)
 *     SdbpCreateSearchDBContext @ 0x140A80724 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void *__fastcall AslAlloc(__int64 a1, ULONG_PTR a2)
{
  void *Pool2; // rax
  void *v4; // rbx

  Pool2 = (void *)ExAllocatePool2(0x100uLL, a2, 0x74705041u);
  v4 = Pool2;
  if ( Pool2 )
    memset_0(Pool2, 0, a2);
  return v4;
}
