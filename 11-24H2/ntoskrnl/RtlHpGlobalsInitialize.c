/*
 * XREFs of RtlHpGlobalsInitialize @ 0x1405EFC9C
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x140658BE8 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140C42A18 (ExpInitSystemPhase0.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     RtlIsProcessorFeaturePresent @ 0x1404A43B0 (RtlIsProcessorFeaturePresent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

BOOLEAN RtlHpGlobalsInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rtt
  unsigned __int64 v12; // rax
  signed __int64 v13; // rdx
  unsigned __int64 v14; // rtt
  BOOLEAN result; // al

  memset_0(&RtlpHpHeapGlobals, 0, 0x80uLL);
  v3 = ExGenRandom(1, v0, v1, v2) & 0x7FFFFFFF;
  v7 = ExGenRandom(1, v4, v5, v6);
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v8 = ((unsigned __int64)v3 << 32) | v7;
  qword_140E28380 = (unsigned __int64)&RtlpHpHeapGlobals ^ v8;
  if ( (__int64 *)v8 == &RtlpHpHeapGlobals )
    qword_140E28380 = 1LL;
  v9 = qword_140E28380;
  do
  {
    v10 = ((((v9 ^ (v9 >> 12)) << 25) ^ v9 ^ (v9 >> 12)) >> 27) ^ ((v9 ^ (v9 >> 12)) << 25) ^ v9 ^ (v9 >> 12);
    v11 = v9;
    v9 = _InterlockedCompareExchange64(&qword_140E28380, v10, v9);
  }
  while ( v11 != v9 );
  v12 = qword_140E28380;
  RtlpHpHeapGlobals = 0x2545F4914F6CDD1DLL * v10;
  do
  {
    v13 = ((((v12 ^ (v12 >> 12)) << 25) ^ v12 ^ (v12 >> 12)) >> 27) ^ ((v12 ^ (v12 >> 12)) << 25) ^ v12 ^ (v12 >> 12);
    v14 = v12;
    v12 = _InterlockedCompareExchange64(&qword_140E28380, v13, v12);
  }
  while ( v14 != v12 );
  qword_140E28348 = 0x2545F4914F6CDD1DLL * v13;
  qword_140E28350 = (__int64)&RtlpHeapFailureInfo;
  if ( RtlIsProcessorFeaturePresent(0x2Au) )
    LODWORD(qword_140E28368) = qword_140E28368 | 2;
  result = RtlIsProcessorFeaturePresent(0x3Cu);
  if ( result )
    LODWORD(qword_140E28368) = qword_140E28368 | 4;
  LODWORD(qword_140E28368) = qword_140E28368 | 1;
  return result;
}
