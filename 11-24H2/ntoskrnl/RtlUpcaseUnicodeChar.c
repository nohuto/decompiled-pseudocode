/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1408441F0
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140346B70 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1404FFC40 (towupper.c)
 *     ObpCreateSymbolicLinkName @ 0x1406F8670 (ObpCreateSymbolicLinkName.c)
 *     AslEnvVarQuery @ 0x14080BF80 (AslEnvVarQuery.c)
 *     ObpLookupDirectoryEntry @ 0x140842540 (ObpLookupDirectoryEntry.c)
 *     CmpFindSubKeyInRoot @ 0x140842980 (CmpFindSubKeyInRoot.c)
 *     VrpAllocateDiffHiveEntry @ 0x140843410 (VrpAllocateDiffHiveEntry.c)
 *     CmpHashCompressedComponent @ 0x140843510 (CmpHashCompressedComponent.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140843574 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140843700 (CmpFindSubkeyInHashByChildCell.c)
 *     PfpRpFileKeyUpdate @ 0x140843C20 (PfpRpFileKeyUpdate.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindNameInListWithStatus @ 0x14086C510 (CmpFindNameInListWithStatus.c)
 *     CmpCompareTwoCompressedNames @ 0x14086CFA0 (CmpCompareTwoCompressedNames.c)
 *     CmpGetNameControlBlock @ 0x140871120 (CmpGetNameControlBlock.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140872180 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408734B0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x140874690 (CmpDoCompareKeyName.c)
 *     CmQueryValueKey @ 0x140874900 (CmQueryValueKey.c)
 *     CmpFindNameInListCellWithStatus @ 0x1408757B0 (CmpFindNameInListCellWithStatus.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCompareInIndex @ 0x140884480 (CmpCompareInIndex.c)
 *     CmpCheckLexicographicalOrder @ 0x140886DA0 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckValueList @ 0x140887180 (CmpCheckValueList.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     CmpGetMappingHiveForString @ 0x14090AC0C (CmpGetMappingHiveForString.c)
 *     CmpFindKcbInHashEntryByName @ 0x140950A10 (CmpFindKcbInHashEntryByName.c)
 *     CmpCompareCompressedName @ 0x140950BA0 (CmpCompareCompressedName.c)
 *     AslStringPatternMatchExW @ 0x140960540 (AslStringPatternMatchExW.c)
 *     RtlLookupAtomInAtomTable @ 0x140992D40 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x14099CFC0 (RtlpHashStringToAtom.c)
 *     CmpCompareUnicodeString @ 0x140A03D60 (CmpCompareUnicodeString.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A285D0 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     CmpCompareKeysByName @ 0x140A4D6E4 (CmpCompareKeysByName.c)
 *     VfUtilPrintCheckinString @ 0x140B834E4 (VfUtilPrintCheckinString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
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
