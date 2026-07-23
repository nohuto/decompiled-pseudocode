/*
 * XREFs of PspTlsInitialize @ 0x140C37F40
 * Callers:
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     PsTlsAlloc @ 0x14077A5C0 (PsTlsAlloc.c)
 *     RtlpFlsInitialize @ 0x140787B5C (RtlpFlsInitialize.c)
 */

__int64 PspTlsInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int i; // ebx
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  RtlpFlsInitialize();
  PspTlsPreAllocatedSlotCount = ExGenRandom(0, v0, v1, v2) & 7;
  for ( i = 0; i < PspTlsPreAllocatedSlotCount; ++i )
  {
    result = PsTlsAlloc(0LL, 0, &v5);
    if ( (int)result < 0 )
    {
      PspTlsPreAllocatedSlotCount = i;
      return result;
    }
  }
  return 0LL;
}
