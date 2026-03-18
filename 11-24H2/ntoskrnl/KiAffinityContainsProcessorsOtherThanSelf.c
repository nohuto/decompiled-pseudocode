/*
 * XREFs of KiAffinityContainsProcessorsOtherThanSelf @ 0x140297D50
 * Callers:
 *     KiEnterLongDpcProcessing @ 0x140298AA4 (KiEnterLongDpcProcessing.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1403B0E50 (KxFlushNonGlobalTb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAffinityContainsProcessorsOtherThanSelf(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 i; // ax
  __int64 v3; // r9

  for ( i = 0; ; ++i )
  {
    if ( i >= *a2 )
      return 0LL;
    v3 = *(_QWORD *)&a2[4 * i + 4];
    if ( v3 )
    {
      if ( i != *(unsigned __int8 *)(a1 + 208) || v3 != *(_QWORD *)(a1 + 200) )
        break;
    }
  }
  return 1LL;
}
