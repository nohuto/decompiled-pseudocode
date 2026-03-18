/*
 * XREFs of HvpCountSetRangesInVector @ 0x140A0C604
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x140395A94 (HvpGenerateLogEntryDirtyData.c)
 *     HvStoreModifiedData @ 0x14088302C (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x140A0C280 (HvpGenerateLogEntry.c)
 *     HvGetHiveLogFileStatus @ 0x140A0C448 (HvGetHiveLogFileStatus.c)
 *     HvpGenerateLogMetadata @ 0x140A0C540 (HvpGenerateLogMetadata.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x1403DCC50 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall HvpCountSetRangesInVector(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // edi
  unsigned int v2; // ebx
  ULONG NextForwardRunClear; // ecx
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  StartingRunIndex = 0;
  v1 = 0;
  v2 = 0;
  while ( v1 < BitMapHeader->SizeOfBitMap )
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v1, &StartingRunIndex);
    if ( !NextForwardRunClear )
      return ++v2;
    if ( StartingRunIndex != v1 )
      ++v2;
    v1 = StartingRunIndex + NextForwardRunClear;
  }
  return v2;
}
