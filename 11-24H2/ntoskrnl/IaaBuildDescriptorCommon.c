/*
 * XREFs of IaaBuildDescriptorCommon @ 0x140473A54
 * Callers:
 *     AccelpSiovDsaOperationHandler @ 0x140402E10 (AccelpSiovDsaOperationHandler.c)
 *     AccelpSiovCompressionDecompression @ 0x140664970 (AccelpSiovCompressionDecompression.c)
 *     AccelpSiovIaaOperationHandler @ 0x140664C80 (AccelpSiovIaaOperationHandler.c)
 *     IaaBuildDescriptorFixedCompress @ 0x14066535C (IaaBuildDescriptorFixedCompress.c)
 *     IaaBuildDescriptorHuffmanCompress @ 0x140665520 (IaaBuildDescriptorHuffmanCompress.c)
 *     IaaBuildDescriptorHuffmanDecompress @ 0x14066564C (IaaBuildDescriptorHuffmanDecompress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IaaBuildDescriptorCommon(char a1, int *a2, __int64 a3, unsigned __int8 a4, int a5, char a6, char a7)
{
  int v7; // eax
  char v8; // r8
  __int64 result; // rax

  v7 = *a2;
  *((_BYTE *)a2 + 7) = a1;
  *((_QWORD *)a2 + 1) = a3;
  v8 = *((_BYTE *)a2 + 4) | 0xC;
  *((_BYTE *)a2 + 4) = v8;
  if ( a6 )
    *((_BYTE *)a2 + 4) = v8 | 2;
  if ( a7 )
    *((_BYTE *)a2 + 5) |= 1u;
  result = (v7 ^ (a5 ^ v7) & 0xFFFFF) & 0x7FFFFFFF | (a4 << 31);
  *a2 = result;
  return result;
}
