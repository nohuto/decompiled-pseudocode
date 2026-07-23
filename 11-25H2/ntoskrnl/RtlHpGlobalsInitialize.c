/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1405E630C
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x14064E590 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140C2F5EC (ExpInitSystemPhase0.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     RtlIsProcessorFeaturePresent @ 0x1404EBE40 (RtlIsProcessorFeaturePresent.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

BOOLEAN RtlHpGlobalsInitialize()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  signed __int64 v4; // rdx
  unsigned __int64 v5; // rtt
  unsigned __int64 v6; // rax
  signed __int64 v7; // rdx
  unsigned __int64 v8; // rtt
  BOOLEAN result; // al

  memset_0(&RtlpHpHeapGlobals, 0, 0x80uLL);
  v0 = ExGenRandom(1) & 0x7FFFFFFF;
  v1 = ExGenRandom(1);
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  v2 = ((unsigned __int64)v0 << 32) | v1;
  qword_140E28000 = (unsigned __int64)&RtlpHpHeapGlobals ^ v2;
  if ( (__int64 *)v2 == &RtlpHpHeapGlobals )
    qword_140E28000 = 1LL;
  v3 = qword_140E28000;
  do
  {
    v4 = ((((v3 ^ (v3 >> 12)) << 25) ^ v3 ^ (v3 >> 12)) >> 27) ^ ((v3 ^ (v3 >> 12)) << 25) ^ v3 ^ (v3 >> 12);
    v5 = v3;
    v3 = _InterlockedCompareExchange64(&qword_140E28000, v4, v3);
  }
  while ( v5 != v3 );
  v6 = qword_140E28000;
  RtlpHpHeapGlobals = 0x2545F4914F6CDD1DLL * v4;
  do
  {
    v7 = ((((v6 ^ (v6 >> 12)) << 25) ^ v6 ^ (v6 >> 12)) >> 27) ^ ((v6 ^ (v6 >> 12)) << 25) ^ v6 ^ (v6 >> 12);
    v8 = v6;
    v6 = _InterlockedCompareExchange64(&qword_140E28000, v7, v6);
  }
  while ( v8 != v6 );
  qword_140E27FC8 = 0x2545F4914F6CDD1DLL * v7;
  qword_140E27FD0 = (__int64)&RtlpHeapFailureInfo;
  if ( RtlIsProcessorFeaturePresent(0x2Au) )
    LODWORD(qword_140E27FE8) = qword_140E27FE8 | 2;
  result = RtlIsProcessorFeaturePresent(0x3Cu);
  if ( result )
    LODWORD(qword_140E27FE8) = qword_140E27FE8 | 4;
  LODWORD(qword_140E27FE8) = qword_140E27FE8 | 1;
  return result;
}
