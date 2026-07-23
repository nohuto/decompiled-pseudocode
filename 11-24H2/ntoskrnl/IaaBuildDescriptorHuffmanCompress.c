/*
 * XREFs of IaaBuildDescriptorHuffmanCompress @ 0x140665520
 * Callers:
 *     AccelpSiovCompressionDecompression @ 0x140664970 (AccelpSiovCompressionDecompression.c)
 * Callees:
 *     IaaBuildDescriptorCommon @ 0x140473A54 (IaaBuildDescriptorCommon.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IaaBuildDescriptorHuffmanCompress(
        int *a1,
        __int64 a2,
        _OWORD *a3,
        _OWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        char a9,
        unsigned __int8 a10,
        int a11,
        char a12,
        char a13)
{
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // r10
  __int16 v18; // cx
  __int64 result; // rax
  _OWORD *v20; // rbx
  __int128 v21; // xmm1

  IaaBuildDescriptorCommon(67, a1, a2, a10, a11, a12, a13);
  v16 = *(_BYTE *)(v15 + 6) & 0xFD;
  *(_QWORD *)(v17 + 40) = a3;
  *(_DWORD *)(v17 + 52) = 1568;
  *(_BYTE *)(v15 + 6) = v16 | 1;
  v18 = *(_WORD *)(v15 + 38) & 0xFFDF | (32 * (a9 & 1));
  *(_QWORD *)(v17 + 16) = a5;
  *(_DWORD *)(v17 + 32) = a6;
  *(_QWORD *)(v17 + 24) = a7;
  *(_WORD *)(v17 + 38) = v18 | 0x12;
  *(_DWORD *)(v17 + 48) = a8;
  memset_0(a3, 0, 0x620uLL);
  result = 8LL;
  v20 = a3 + 18;
  do
  {
    *v20 = *a4;
    v20[1] = a4[1];
    v20[2] = a4[2];
    v20[3] = a4[3];
    v20[4] = a4[4];
    v20[5] = a4[5];
    v20[6] = a4[6];
    v20 += 8;
    v21 = a4[7];
    a4 += 8;
    *(v20 - 1) = v21;
    --result;
  }
  while ( result );
  return result;
}
