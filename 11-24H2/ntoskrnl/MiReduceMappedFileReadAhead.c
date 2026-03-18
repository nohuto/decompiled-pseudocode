/*
 * XREFs of MiReduceMappedFileReadAhead @ 0x14037D024
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402E604C (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 *     RtlFindLastBackwardRunClear @ 0x14037D0C0 (RtlFindLastBackwardRunClear.c)
 */

void __fastcall MiReduceMappedFileReadAhead(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, unsigned int a3)
{
  ULONG SizeOfBitMap; // ebx
  ULONG LastBackwardRunClear; // eax
  ULONG v8; // edi
  ULONG v9; // ebx
  ULONG StartingRunIndex; // [rsp+40h] [rbp+8h] BYREF

  StartingRunIndex = 0;
  RtlSetBits(BitMapHeader, StartingIndex, 1u);
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  do
  {
    v9 = SizeOfBitMap - 1;
    if ( !v9 )
      break;
    LastBackwardRunClear = RtlFindLastBackwardRunClear(BitMapHeader, v9, &StartingRunIndex);
    SizeOfBitMap = StartingRunIndex;
    v8 = LastBackwardRunClear;
    if ( LastBackwardRunClear > a3 )
    {
      SizeOfBitMap = LastBackwardRunClear - a3 + StartingRunIndex;
      v8 = a3;
      StartingRunIndex = SizeOfBitMap;
    }
    RtlSetBits(BitMapHeader, SizeOfBitMap, v8);
    a3 -= v8;
  }
  while ( a3 );
  RtlClearBits(BitMapHeader, StartingIndex, 1u);
}
