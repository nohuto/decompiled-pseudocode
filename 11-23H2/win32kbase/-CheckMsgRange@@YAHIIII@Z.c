/*
 * XREFs of ?CheckMsgRange@@YAHIIII@Z @ 0x1C012E120
 * Callers:
 *     MiPCheckMsgFilter @ 0x1C00AACF0 (MiPCheckMsgFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckMsgRange(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  if ( a3 <= a4 )
  {
    if ( a2 < a3 || a1 > a4 )
      return 0LL;
  }
  else if ( a2 <= a4 || a1 >= a3 )
  {
    return 0LL;
  }
  return 1LL;
}
