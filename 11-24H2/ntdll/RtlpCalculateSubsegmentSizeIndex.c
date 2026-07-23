/*
 * XREFs of RtlpCalculateSubsegmentSizeIndex @ 0x180065820
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1800669B0 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCalculateSubsegmentSizeIndex(unsigned int a1)
{
  unsigned int v1; // eax
  __int64 result; // rax

  if ( a1 >= 0xF0000 )
    a1 = 983040;
  _BitScanReverse(&v1, a1 - 1);
  result = v1 + 1;
  if ( (unsigned int)result <= 7 )
    return 7LL;
  if ( (unsigned int)result >= 0x12 )
    return 18LL;
  return result;
}
