/*
 * XREFs of PspTlsInitialize @ 0x140C24B34
 * Callers:
 *     PspInitPhase0 @ 0x140C563A8 (PspInitPhase0.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     PsTlsAlloc @ 0x14076AB70 (PsTlsAlloc.c)
 *     RtlpFlsInitialize @ 0x1407789DC (RtlpFlsInitialize.c)
 */

__int64 PspTlsInitialize()
{
  unsigned int i; // ebx
  __int64 result; // rax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlpFlsInitialize();
  PspTlsPreAllocatedSlotCount = ExGenRandom(0) & 7;
  for ( i = 0; i < PspTlsPreAllocatedSlotCount; ++i )
  {
    result = PsTlsAlloc(0LL, 0, &v2);
    if ( (int)result < 0 )
    {
      PspTlsPreAllocatedSlotCount = i;
      return result;
    }
  }
  return 0LL;
}
