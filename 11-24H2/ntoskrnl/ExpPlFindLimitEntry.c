/*
 * XREFs of ExpPlFindLimitEntry @ 0x140396E20
 * Callers:
 *     ExpInsertPoolTracker @ 0x14021BE10 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 *     ExPoolQueryLimits @ 0x140652A00 (ExPoolQueryLimits.c)
 *     ExpTrackTableInsertLimit @ 0x140653A30 (ExpTrackTableInsertLimit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpPlFindLimitEntry(int a1)
{
  __int64 v1; // r11
  __int64 v2; // r9
  __int64 v3; // rdx

  v1 = -1LL << (BYTE4(ExPoolLimitState) & 0x1F);
  v2 = (unsigned int)v1 & a1;
  if ( HIDWORD(ExPoolLimitState) >> 5 )
  {
    v3 = qword_140E290C8
       + 8LL
       * ((37
         * (BYTE6(v2)
          + 37
          * (BYTE5(v2)
           + 37
           * (BYTE4(v2) + 37 * (BYTE3(v2) + 37 * (BYTE2(v2) + 37 * (BYTE1(v2) + 37 * ((unsigned __int8)v2 + 11623883)))))))
         + HIBYTE(v2)) & (unsigned int)((HIDWORD(ExPoolLimitState) >> 5) - 1));
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v2 == (v1 & *(_QWORD *)(v3 + 8)) )
        return v3;
    }
  }
  return 0LL;
}
