/*
 * XREFs of RtlpInitializeLfhRandomDataArray @ 0x1800E83F4
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18000C530 (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x180107E48 (RtlpHpLfhContextInitialize.c)
 * Callees:
 *     <none>
 */

__int64 RtlpInitializeLfhRandomDataArray()
{
  unsigned __int8 *v0; // r8
  __int64 v1; // r9
  unsigned __int64 v2; // rax
  signed __int64 v3; // rdx
  unsigned __int64 v4; // rtt
  __int64 result; // rax

  v0 = RtlpLowFragHeapRandomData;
  v1 = 32LL;
  do
  {
    v2 = qword_1801CCF00;
    do
    {
      v3 = ((((v2 ^ (v2 >> 12)) << 25) ^ v2 ^ (v2 >> 12)) >> 27) ^ ((v2 ^ (v2 >> 12)) << 25) ^ v2 ^ (v2 >> 12);
      v4 = v2;
      v2 = _InterlockedCompareExchange64(&qword_1801CCF00, v3, v2);
    }
    while ( v4 != v2 );
    result = 0x2545F4914F6CDD1DLL;
    *(_QWORD *)v0 = 0x2545F4914F6CDD1DLL * v3;
    v0 += 8;
    --v1;
  }
  while ( v1 );
  return result;
}
