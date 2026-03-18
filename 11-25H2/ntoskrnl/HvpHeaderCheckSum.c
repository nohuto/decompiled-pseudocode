/*
 * XREFs of HvpHeaderCheckSum @ 0x140BA9850
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x140475EB8 (HvpGenerateLogEntryHeader.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407CFB7C (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1407D1D84 (HvIsInPlaceBaseBlockValid.c)
 *     HvApplyLogFiles @ 0x1407D6104 (HvApplyLogFiles.c)
 *     HvWriteExternal @ 0x1409F6CF4 (HvWriteExternal.c)
 *     HvWriteHivePrimaryFile @ 0x1409F7344 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1409F76C8 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvHiveStartFileBacked @ 0x1409F8934 (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x1409F926C (HvpGetHiveHeader.c)
 *     HvAnalyzeLogFiles @ 0x1409F9BC4 (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x1409FA510 (HvpLogInvalidLogHeader.c)
 *     HvHiveStartMemoryBacked @ 0x140A9F924 (HvHiveStartMemoryBacked.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BA95C0 (HvSnapshotHiveToOffsetArray.c)
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
