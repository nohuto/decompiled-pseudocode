/*
 * XREFs of AccelpSiovCompressionDecompression @ 0x140664970
 * Callers:
 *     AccelpSiovIaaOperationHandler @ 0x140664C80 (AccelpSiovIaaOperationHandler.c)
 * Callees:
 *     IaaBuildDescriptorCommon @ 0x140473A54 (IaaBuildDescriptorCommon.c)
 *     IaaBuildDescriptorFixedCompress @ 0x14066535C (IaaBuildDescriptorFixedCompress.c)
 *     IaaBuildDescriptorHuffmanCompress @ 0x140665520 (IaaBuildDescriptorHuffmanCompress.c)
 *     IaaBuildDescriptorHuffmanDecompress @ 0x14066564C (IaaBuildDescriptorHuffmanDecompress.c)
 *     IaapSetAecsDecompressionHuffmanTable @ 0x1406657B8 (IaapSetAecsDecompressionHuffmanTable.c)
 */

__int64 __fastcall AccelpSiovCompressionDecompression(int *a1, char a2, int a3, char a4, char a5)
{
  unsigned int v5; // ebp
  int v7; // edx
  int v9; // ecx
  __int64 v10; // rbx
  _DWORD *v11; // r10
  int v12; // ecx
  int v13; // ecx
  char *v14; // rcx
  int v15; // ebx
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r11

  v5 = 0;
  v7 = *a1;
  v9 = a1[22];
  v10 = 0LL;
  if ( v9 != 1 || (v11 = a1 + 23, a1[23] != 1) )
  {
    v11 = a1 + 23;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 24LL);
    if ( !v10 )
      return (unsigned int)-1073741811;
  }
  if ( v7 != 11 )
  {
    v13 = v9 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v14 = (char *)*((_QWORD *)a1 + 13);
        IaaBuildDescriptorHuffmanDecompress(
          *((_QWORD *)a1 + 3),
          *((_QWORD *)a1 + 4),
          *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
          *((_QWORD *)a1 + 6),
          a1[14],
          *((_QWORD *)a1 + 8),
          a1[18],
          *v14,
          v14[1],
          v14[2],
          v14[3],
          a2,
          a3,
          a4,
          a5);
        IaapSetAecsDecompressionHuffmanTable(
          v10 + 12616,
          *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
          v10 + 15176,
          v10 + 16200,
          v10 + 17224);
        return v5;
      }
    }
    else if ( *v11 == 1 )
    {
      v15 = a1[18];
      v16 = a1[14];
      IaaBuildDescriptorCommon(66, *((int **)a1 + 3), *((_QWORD *)a1 + 4), a2, a3, a4, a5);
      *(_WORD *)(v17 + 38) |= 0x1Fu;
      *(_QWORD *)(v17 + 16) = v18;
      *(_DWORD *)(v17 + 32) = v15;
      *(_QWORD *)(v17 + 24) = v19;
      *(_DWORD *)(v17 + 48) = v16;
      return v5;
    }
    return (unsigned int)-1073741217;
  }
  v12 = v9 - 1;
  if ( !v12 )
  {
    if ( *v11 == 1 )
    {
      IaaBuildDescriptorFixedCompress(
        *((_QWORD *)a1 + 3),
        *((_QWORD *)a1 + 4),
        *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
        *((_QWORD *)a1 + 6),
        a1[14],
        *((_QWORD *)a1 + 8),
        a1[18],
        a2,
        a3,
        a4,
        a5);
      return v5;
    }
    return (unsigned int)-1073741217;
  }
  if ( v12 == 1 )
  {
    IaaBuildDescriptorHuffmanCompress(
      *((_QWORD *)a1 + 3),
      *((_QWORD *)a1 + 4),
      *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
      v10 + 12616,
      *((_QWORD *)a1 + 6),
      a1[14],
      *((_QWORD *)a1 + 8),
      a1[18],
      **((_BYTE **)a1 + 12),
      a2,
      a3,
      a4,
      a5);
    return v5;
  }
  return (unsigned int)-1073741811;
}
