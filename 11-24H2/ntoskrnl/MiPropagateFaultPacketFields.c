/*
 * XREFs of MiPropagateFaultPacketFields @ 0x140391E80
 * Callers:
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPropagateFaultPacketFields(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm2
  __int64 result; // rax

  v2 = _mm_srli_si128(*(__m128i *)(a1 + 56), 8);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_BYTE *)(a1 + 69) = v2.m128i_i8[5] ^ (*(_BYTE *)(a2 + 69) ^ v2.m128i_i8[5]) & 3;
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  result = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = result ^ (*(_DWORD *)(a2 + 80) ^ *(_DWORD *)(a1 + 80)) & 0x1F;
  return result;
}
