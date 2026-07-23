/*
 * XREFs of HvpGenerateLogMetadata @ 0x1409679D8
 * Callers:
 *     HvpGenerateLogEntryMetadata @ 0x140377360 (HvpGenerateLogEntryMetadata.c)
 *     HvpApplyLegacyLogFile @ 0x1407E6640 (HvpApplyLegacyLogFile.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x1403C3BB0 (RtlFindNextForwardRunClear.c)
 *     HvpCountSetRangesInVector @ 0x140967A9C (HvpCountSetRangesInVector.c)
 */

__int64 __fastcall HvpGenerateLogMetadata(PRTL_BITMAP BitMapHeader, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // ebp
  ULONG v9; // edi
  unsigned int v10; // r12d
  ULONG NextForwardRunClear; // r8d
  ULONG v12; // edx
  ULONG StartingRunIndex; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  StartingRunIndex = 0;
  v7 = HvpCountSetRangesInVector(BitMapHeader);
  if ( a2 && *a3 >= v7 )
  {
    v9 = 0;
    v10 = 0;
    while ( v9 < BitMapHeader->SizeOfBitMap )
    {
      NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v9, &StartingRunIndex);
      if ( !NextForwardRunClear )
      {
        *(_DWORD *)(a2 + 8LL * v10) = v9 << 9;
        *(_DWORD *)(a2 + 8LL * v10 + 4) = (BitMapHeader->SizeOfBitMap - v9) << 9;
        break;
      }
      v12 = StartingRunIndex;
      if ( StartingRunIndex != v9 )
      {
        *(_DWORD *)(a2 + 8LL * v10) = v9 << 9;
        *(_DWORD *)(a2 + 8LL * v10++ + 4) = (v12 - v9) << 9;
      }
      v9 = v12 + NextForwardRunClear;
    }
  }
  else
  {
    v3 = -1073741789;
  }
  *a3 = v7;
  return v3;
}
