/*
 * XREFs of MiSetPfnNodeFlinkHigh @ 0x140403370
 * Callers:
 *     MiInsertSecondaryListStandbyPage @ 0x140224720 (MiInsertSecondaryListStandbyPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnNodeFlinkHigh(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r9
  __int64 v3; // r10
  signed __int64 result; // rax
  signed __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2 << 55;
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             (a2 << 55) ^ (v2 ^ (a2 << 55)) & 0xF07FFFFFFFFFFFFFuLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v3 ^ (result ^ v3) & 0xF07FFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
