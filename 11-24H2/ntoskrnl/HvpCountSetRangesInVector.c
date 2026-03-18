/*
 * XREFs of HvpCountSetRangesInVector @ 0x14097F28C
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x14042AFCC (HvpGenerateLogEntryDirtyData.c)
 *     HvStoreModifiedData @ 0x14097E3EC (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x14097EF08 (HvpGenerateLogEntry.c)
 *     HvGetHiveLogFileStatus @ 0x14097F0D0 (HvGetHiveLogFileStatus.c)
 *     HvpGenerateLogMetadata @ 0x14097F1C8 (HvpGenerateLogMetadata.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x1403E15B0 (RtlFindNextForwardRunClear.c)
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
