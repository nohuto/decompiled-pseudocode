/*
 * XREFs of ExHeapLookasideRebalance @ 0x140404624
 * Callers:
 *     ExpScanSystemLookasideList @ 0x140404404 (ExpScanSystemLookasideList.c)
 * Callees:
 *     RtlpDynamicLookasideRebalance @ 0x14040468C (RtlpDynamicLookasideRebalance.c)
 */

__int64 ExHeapLookasideRebalance()
{
  unsigned int i; // ebx
  __int64 v1; // rsi
  char *v2; // rdi
  __int64 result; // rax

  for ( i = 0; i < dword_140E6BE10; ++i )
  {
    v1 = 2LL;
    v2 = (char *)&unk_140E6BE80 + 8384 * i;
    do
    {
      result = RtlpDynamicLookasideRebalance(v2);
      v2 += 4160;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
