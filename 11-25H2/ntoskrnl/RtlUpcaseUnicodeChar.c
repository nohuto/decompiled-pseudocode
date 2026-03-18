/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x140848120
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140310348 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1404FD4C0 (towupper.c)
 *     AslEnvVarQuery @ 0x1407FC410 (AslEnvVarQuery.c)
 *     AslStringPatternMatchExW @ 0x140825DC0 (AslStringPatternMatchExW.c)
 *     CmpGetMappingHiveForString @ 0x14083EE7C (CmpGetMappingHiveForString.c)
 *     ObpLookupDirectoryEntry @ 0x140846000 (ObpLookupDirectoryEntry.c)
 *     CmpFindSubKeyInRoot @ 0x140846440 (CmpFindSubKeyInRoot.c)
 *     VrpAllocateDiffHiveEntry @ 0x140846EC0 (VrpAllocateDiffHiveEntry.c)
 *     CmpHashCompressedComponent @ 0x140846FC0 (CmpHashCompressedComponent.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140847024 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408471B0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpComputeComponentHashes @ 0x1408476D0 (CmpComputeComponentHashes.c)
 *     PfpRpFileKeyUpdate @ 0x140847B50 (PfpRpFileKeyUpdate.c)
 *     CmpHashUnicodeComponent @ 0x140848190 (CmpHashUnicodeComponent.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     CmpFindNameInListWithStatus @ 0x14086B314 (CmpFindNameInListWithStatus.c)
 *     CmpCompareTwoCompressedNames @ 0x14086BDB0 (CmpCompareTwoCompressedNames.c)
 *     CmpGetNameControlBlock @ 0x140874CD0 (CmpGetNameControlBlock.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140875D60 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140877170 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmpDoCompareKeyName @ 0x140878B80 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListCellWithStatus @ 0x140879440 (CmpFindNameInListCellWithStatus.c)
 *     CmpCompareInIndex @ 0x14087A510 (CmpCompareInIndex.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCheckLexicographicalOrder @ 0x14088D830 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckValueList @ 0x14088DC10 (CmpCheckValueList.c)
 *     RtlLookupAtomInAtomTable @ 0x1409529A0 (RtlLookupAtomInAtomTable.c)
 *     CmpCompareKeysByName @ 0x1409775D8 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140977970 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     CmpFindKcbInHashEntryByName @ 0x1409783B0 (CmpFindKcbInHashEntryByName.c)
 *     CmpCompareCompressedName @ 0x140978540 (CmpCompareCompressedName.c)
 *     RtlpHashStringToAtom @ 0x14099BF00 (RtlpHashStringToAtom.c)
 *     CmpCompareUnicodeString @ 0x140A04758 (CmpCompareUnicodeString.c)
 *     ObpCreateSymbolicLinkName @ 0x140AC15D4 (ObpCreateSymbolicLinkName.c)
 *     VfUtilPrintCheckinString @ 0x140B73504 (VfUtilPrintCheckinString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int64 v2; // rdx
  struct _LIST_ENTRY *Flink; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( (unsigned int)v2 >= 0x61 )
  {
    if ( (unsigned int)v2 <= 0x7A )
      return v2 - 32;
    Flink = CurrentServerSiloGlobals[75].Flink;
    if ( Flink )
    {
      if ( (unsigned __int16)v2 >= 0xC0u )
        LOWORD(v2) = *((_WORD *)&Flink->Flink
                     + (v2 & 0xF)
                     + *((unsigned __int16 *)&Flink->Flink
                       + ((unsigned __int8)v2 >> 4)
                       + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v2 >> 8))))
                   + v2;
    }
  }
  return v2;
}
