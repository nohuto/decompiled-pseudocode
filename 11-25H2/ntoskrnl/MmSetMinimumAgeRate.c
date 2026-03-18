/*
 * XREFs of MmSetMinimumAgeRate @ 0x140A95B2C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 */

_QWORD *__fastcall MmSetMinimumAgeRate(unsigned int a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax

  for ( result = PsGetNextPartition(0LL); ; result = PsGetNextPartition(v3) )
  {
    v3 = result;
    if ( !result )
      break;
    v4 = *(_QWORD *)(*result + 17600LL);
    if ( a1 )
    {
      if ( a1 < 0xC )
      {
        LOWORD(v5) = 1000;
      }
      else
      {
        v5 = 0x3E8 / (a1 / 6);
        if ( v5 <= 1 )
          LOWORD(v5) = 1;
      }
    }
    else
    {
      LOWORD(v5) = 0;
    }
    *(_WORD *)(v4 + 276) = v5;
  }
  return result;
}
