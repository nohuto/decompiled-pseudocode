/*
 * XREFs of RtlHpGlobalsInitialize @ 0x18002C0A4
 * Callers:
 *     RtlInitializeHeapManager @ 0x180114300 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x18002C400 (RtlIsProcessorFeaturePresent.c)
 *     RtlRandomEx @ 0x18002CC00 (RtlRandomEx.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlHpGlobalsInitialize()
{
  unsigned __int64 v0; // rbx
  ULONG v1; // eax
  unsigned __int64 v2; // rax
  signed __int64 v3; // rdx
  unsigned __int64 v4; // rtt
  unsigned __int64 v5; // rax
  signed __int64 v6; // rdx
  unsigned __int64 v7; // rtt
  bool v8; // zf
  int v9; // eax
  __int64 result; // rax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  memset_thunk_772440563353939046(&RtlpHpHeapGlobals, 0, 0x80uLL);
  Seed = ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) ^ (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v0 = (unsigned __int64)RtlRandomEx(&Seed) << 32;
  v1 = RtlRandomEx(&Seed);
  qword_1801CCF00 = (unsigned __int64)&RtlpHpHeapGlobals ^ (v0 | v1);
  if ( (__int64 *)(v0 | v1) == &RtlpHpHeapGlobals )
    qword_1801CCF00 = 1LL;
  v2 = qword_1801CCF00;
  do
  {
    v3 = ((((v2 ^ (v2 >> 12)) << 25) ^ v2 ^ (v2 >> 12)) >> 27) ^ ((v2 ^ (v2 >> 12)) << 25) ^ v2 ^ (v2 >> 12);
    v4 = v2;
    v2 = _InterlockedCompareExchange64(&qword_1801CCF00, v3, v2);
  }
  while ( v4 != v2 );
  v5 = qword_1801CCF00;
  RtlpHpHeapGlobals = 0x2545F4914F6CDD1DLL * v3;
  do
  {
    v6 = ((((v5 ^ (v5 >> 12)) << 25) ^ v5 ^ (v5 >> 12)) >> 27) ^ ((v5 ^ (v5 >> 12)) << 25) ^ v5 ^ (v5 >> 12);
    v7 = v5;
    v5 = _InterlockedCompareExchange64(&qword_1801CCF00, v6, v5);
  }
  while ( v7 != v5 );
  qword_1801CCEC8 = 0x2545F4914F6CDD1DLL * v6;
  qword_1801CCED0 = (__int64)&RtlpHeapFailureInfo;
  if ( RtlIsProcessorFeaturePresent(0x2Au) )
    LODWORD(qword_1801CCEE8) = qword_1801CCEE8 | 2;
  v8 = RtlIsProcessorFeaturePresent(0x3Cu) == 0;
  v9 = qword_1801CCEE8;
  if ( !v8 )
    v9 = qword_1801CCEE8 | 4;
  result = v9 | 1u;
  LODWORD(qword_1801CCEE8) = result;
  return result;
}
