/*
 * XREFs of MiCheckContiguityTradeEligible @ 0x140680D3C
 * Callers:
 *     MiQueryVaPhysicalContiguity @ 0x140680DC0 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiActivePageClaimCandidate @ 0x140306540 (MiActivePageClaimCandidate.c)
 */

_BOOL8 __fastcall MiCheckContiguityTradeEligible(unsigned __int64 a1)
{
  unsigned int v1; // eax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( *(__int64 *)(a1 + 40) < 0 || *(char *)(a1 + 35) < 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
  {
    v1 = (*(_QWORD *)(a1 + 40) >> 43) & 0x3FF;
    v4 = 0;
    return MiActivePageClaimCandidate(*((_QWORD *)qword_140E2FF88 + v1), a1, 0, 0, 0, &v4) == 0;
  }
  else
  {
    if ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
      return 0LL;
    return (unsigned int)MiGetPfnSlabType(a1) == 9;
  }
}
