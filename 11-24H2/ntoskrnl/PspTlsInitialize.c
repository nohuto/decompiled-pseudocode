/*
 * XREFs of PspTlsInitialize @ 0x140C35E00
 * Callers:
 *     PspInitPhase0 @ 0x140C65530 (PspInitPhase0.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     PsTlsAlloc @ 0x14077A4C0 (PsTlsAlloc.c)
 *     RtlpFlsInitialize @ 0x140787C2C (RtlpFlsInitialize.c)
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
