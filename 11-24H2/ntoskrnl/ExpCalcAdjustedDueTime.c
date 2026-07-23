/*
 * XREFs of ExpCalcAdjustedDueTime @ 0x140655B40
 * Callers:
 *     ExpTimerAdjust @ 0x140655B90 (ExpTimerAdjust.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCalcAdjustedDueTime(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r10
  int v6; // edx

  v5 = 0LL;
  v6 = a2 - 1;
  if ( v6 )
  {
    if ( (unsigned int)(v6 - 1) <= 1 )
    {
      v5 = a5 - a1 - a3;
      if ( v5 > 0 )
      {
        v5 = -1LL;
        if ( a3 > 0 )
          return a5 - a1;
      }
    }
  }
  else
  {
    v5 = a4 + a3 + a1 - a5;
    if ( v5 < 0 )
      return a4;
  }
  return v5;
}
