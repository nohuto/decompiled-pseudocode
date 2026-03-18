/*
 * XREFs of CiTryIncrementTotalThreadCount @ 0x1C0003E60
 * Callers:
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiTryIncrementTotalThreadCount(volatile signed __int32 *a1, signed __int32 a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  v2 = *a1;
  while ( v2 < a2 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange(a1, v2 + 1, v2);
    if ( v3 == v2 )
      return 0LL;
  }
  return 3221225769LL;
}
