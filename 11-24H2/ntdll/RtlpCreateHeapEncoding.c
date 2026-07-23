/*
 * XREFs of RtlpCreateHeapEncoding @ 0x180025B7C
 * Callers:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpCreateHeapEncoding(__int64 a1)
{
  unsigned __int64 v1; // rax
  signed __int64 v2; // r8
  unsigned __int64 v3; // rtt
  unsigned __int64 v4; // rax
  signed __int64 v5; // r8
  unsigned __int64 v6; // rtt

  if ( (*(_BYTE *)(a1 + 120) & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    v1 = qword_1801CCF00;
    do
    {
      v2 = ((((v1 ^ (v1 >> 12)) << 25) ^ v1 ^ (v1 >> 12)) >> 27) ^ ((v1 ^ (v1 >> 12)) << 25) ^ v1 ^ (v1 >> 12);
      v3 = v1;
      v1 = _InterlockedCompareExchange64(&qword_1801CCF00, v2, v1);
    }
    while ( v3 != v1 );
    *(_DWORD *)(a1 + 136) |= 1332534557 * v2;
    v4 = qword_1801CCF00;
    do
    {
      v5 = ((((v4 ^ (v4 >> 12)) << 25) ^ v4 ^ (v4 >> 12)) >> 27) ^ ((v4 ^ (v4 >> 12)) << 25) ^ v4 ^ (v4 >> 12);
      v6 = v4;
      v4 = _InterlockedCompareExchange64(&qword_1801CCF00, v5, v4);
    }
    while ( v6 != v4 );
    *(_WORD *)(a1 + 142) = 0;
    *(_WORD *)(a1 + 140) = -8931 * v5;
  }
}
