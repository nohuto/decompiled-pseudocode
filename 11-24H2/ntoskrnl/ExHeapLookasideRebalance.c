/*
 * XREFs of ExHeapLookasideRebalance @ 0x14040C024
 * Callers:
 *     ExpScanSystemLookasideList @ 0x14040BE04 (ExpScanSystemLookasideList.c)
 * Callees:
 *     RtlpDynamicLookasideRebalance @ 0x14040C08C (RtlpDynamicLookasideRebalance.c)
 */

__int64 ExHeapLookasideRebalance()
{
  unsigned int i; // ebx
  __int64 v1; // rsi
  char *v2; // rdi
  __int64 result; // rax

  for ( i = 0; i < dword_140E6BC10; ++i )
  {
    v1 = 2LL;
    v2 = (char *)&unk_140E6BC80 + 8384 * i;
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
