/*
 * XREFs of MiPfnLargeBitSet @ 0x14040DC80
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x140305B00 (MiPfnsWorthTrying.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPfnLargeBitSet(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16102) )
  {
    for ( result = 0LL; (unsigned int)result < 2; result = (unsigned int)(result + 1) )
    {
      if ( *(_QWORD *)(a1 + 16LL * (unsigned int)result + 16328)
        && _bittest64(
             *(const signed __int64 **)(a1 + 16LL * (unsigned int)result + 16336),
             a2 >> MiLargePageShifts[result]) )
      {
        return result;
      }
    }
  }
  return 3LL;
}
