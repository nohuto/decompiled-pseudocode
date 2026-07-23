/*
 * XREFs of Normalization__GuessCharCountBySize @ 0x140785B88
 * Callers:
 *     Normalization__Normalize @ 0x140786250 (Normalization__Normalize.c)
 *     RtlpNormalizeStringWorker @ 0x140786DA4 (RtlpNormalizeStringWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__GuessCharCountBySize(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a2 + (a2 >> 3));
  if ( (int)result < 64 )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 24) * a2);
    if ( (int)result > 64 )
      return 64LL;
  }
  return result;
}
