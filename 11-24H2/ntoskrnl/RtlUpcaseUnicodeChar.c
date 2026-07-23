/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1408404B0
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1403255E4 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1404FD500 (towupper.c)
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 *     AslEnvVarQuery @ 0x14080C6C0 (AslEnvVarQuery.c)
 *     ObpLookupDirectoryEntry @ 0x14083E800 (ObpLookupDirectoryEntry.c)
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     VrpAllocateDiffHiveEntry @ 0x14083F6D0 (VrpAllocateDiffHiveEntry.c)
 *     CmpHashCompressedComponent @ 0x14083F7D0 (CmpHashCompressedComponent.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14083F834 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14083F9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     PfpRpFileKeyUpdate @ 0x14083FEE0 (PfpRpFileKeyUpdate.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     CmpCompareTwoCompressedNames @ 0x1408712D0 (CmpCompareTwoCompressedNames.c)
 *     CmpGetNameControlBlock @ 0x140875450 (CmpGetNameControlBlock.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408777E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1408789C0 (CmpDoCompareKeyName.c)
 *     CmQueryValueKey @ 0x140878C30 (CmQueryValueKey.c)
 *     CmpFindNameInListCellWithStatus @ 0x140879AE0 (CmpFindNameInListCellWithStatus.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCompareInIndex @ 0x140888330 (CmpCompareInIndex.c)
 *     CmpCheckLexicographicalOrder @ 0x14088AC50 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckValueList @ 0x14088B030 (CmpCheckValueList.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     CmpGetMappingHiveForString @ 0x1408E232C (CmpGetMappingHiveForString.c)
 *     CmpFindKcbInHashEntryByName @ 0x140940C90 (CmpFindKcbInHashEntryByName.c)
 *     CmpCompareCompressedName @ 0x140940E20 (CmpCompareCompressedName.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 *     RtlLookupAtomInAtomTable @ 0x14097DD80 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x140986FF0 (RtlpHashStringToAtom.c)
 *     CmpCompareUnicodeString @ 0x140A00290 (CmpCompareUnicodeString.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A1D050 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     CmpCompareKeysByName @ 0x140A44274 (CmpCompareKeysByName.c)
 *     VfUtilPrintCheckinString @ 0x140B854E4 (VfUtilPrintCheckinString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
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
