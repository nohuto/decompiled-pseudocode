/*
 * XREFs of HvpHeaderCheckSum @ 0x140BB97A0
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x14047622C (HvpGenerateLogEntryHeader.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF454 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1407E1664 (HvIsInPlaceBaseBlockValid.c)
 *     HvApplyLogFiles @ 0x1407E5F88 (HvApplyLogFiles.c)
 *     HvHiveStartMemoryBacked @ 0x1409314FC (HvHiveStartMemoryBacked.c)
 *     HvHiveStartFileBacked @ 0x14097F464 (HvHiveStartFileBacked.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1409802F0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpGetHiveHeader @ 0x14098195C (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x140982C34 (HvWriteHivePrimaryFile.c)
 *     HvAnalyzeLogFiles @ 0x140983108 (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x140983AF0 (HvpLogInvalidLogHeader.c)
 *     HvWriteExternal @ 0x140A6D050 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BB9508 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpHeaderCheckSum(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  LODWORD(result) = 0;
  v2 = 127LL;
  do
  {
    result = *a1++ ^ (unsigned int)result;
    --v2;
  }
  while ( v2 );
  if ( (_DWORD)result == -1 )
    return 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
