/*
 * XREFs of HvpHeaderCheckSum @ 0x140BBB7A0
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x1404722CC (HvpGenerateLogEntryHeader.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF9A4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1407E1BB4 (HvIsInPlaceBaseBlockValid.c)
 *     HvApplyLogFiles @ 0x1407E6558 (HvApplyLogFiles.c)
 *     HvHiveStartMemoryBacked @ 0x14093363C (HvHiveStartMemoryBacked.c)
 *     HvHiveStartFileBacked @ 0x140967C74 (HvHiveStartFileBacked.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140968B00 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpGetHiveHeader @ 0x14096A16C (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x14096B444 (HvWriteHivePrimaryFile.c)
 *     HvAnalyzeLogFiles @ 0x14096B918 (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x14096C300 (HvpLogInvalidLogHeader.c)
 *     HvWriteExternal @ 0x140A66710 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BBB508 (HvSnapshotHiveToOffsetArray.c)
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
