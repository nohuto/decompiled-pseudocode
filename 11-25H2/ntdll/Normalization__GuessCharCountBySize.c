/*
 * XREFs of Normalization__GuessCharCountBySize @ 0x1800C20DC
 * Callers:
 *     RtlpNormalizeStringWorker @ 0x1800C1D08 (RtlpNormalizeStringWorker.c)
 *     Normalization__Normalize @ 0x1800C1E20 (Normalization__Normalize.c)
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
