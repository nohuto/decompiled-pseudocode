/*
 * XREFs of RtlpStdGetSpaceForTrace @ 0x1800F186C
 * Callers:
 *     RtlpStdLogCapturedStackTrace @ 0x1800311F0 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlpStdExtendLowerWatermark @ 0x1800F1930 (RtlpStdExtendLowerWatermark.c)
 *     RtlpInterlockedPopEntrySList @ 0x180163DC0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall RtlpStdGetSpaceForTrace(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  unsigned int i; // ebx
  PSLIST_ENTRY v5; // rax
  __int64 v6; // rdx
  unsigned int v8; // ecx

  v2 = a2;
  if ( !a2 )
    return 0LL;
  for ( i = a2 - 1; i < 0x20; ++i )
  {
    v5 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16 * (i + 13LL)));
    if ( v5 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 196));
      return v5 - 1;
    }
  }
  v6 = RtlpStdExtendLowerWatermark(a1, (8 * v2 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v6 )
  {
    v8 = ((((8 * (_DWORD)v2 + 31) & 0xFFFFFFF0) - 16) >> 3) - 1;
    if ( v8 > 0x1F )
      LOWORD(v8) = 31;
    *(_WORD *)(v6 + 8) = ((_WORD)v8 << 11) | *(_WORD *)(v6 + 8) & 0x7FF;
  }
  return (PSLIST_ENTRY)v6;
}
