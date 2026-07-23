/*
 * XREFs of RtlpCollectFreeBlocks @ 0x18000F7E0
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpFlushHeap @ 0x1800A05AC (RtlpFlushHeap.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpDecommitBlock @ 0x180117590 (RtlpDecommitBlock.c)
 */

void __fastcall RtlpCollectFreeBlocks(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rdi
  int v4; // edx
  unsigned __int16 v5; // ax
  char v6; // dl

  v1 = a1 + 336;
  v2 = *(_QWORD *)(a1 + 344);
  while ( v2 != v1 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v4 = *(_DWORD *)(v2 - 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v2 - 8) = v4;
      if ( HIBYTE(v4) != ((unsigned __int8)v4 ^ (unsigned __int8)(BYTE1(v4) ^ BYTE2(v4))) )
        RtlpAnalyzeHeapFailure(a1, v2 - 16);
    }
    v5 = *(_WORD *)(v2 - 8);
    if ( v5 <= 0x100u )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v2 - 5) = HIBYTE(v5) ^ *(_BYTE *)(v2 - 6) ^ v5;
        *(_DWORD *)(v2 - 8) ^= *(_DWORD *)(a1 + 136);
      }
      return;
    }
    v6 = *(_BYTE *)(v2 - 6);
    if ( (v6 & 8) != 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v2 - 5) = v6 ^ HIBYTE(v5) ^ v5;
        *(_DWORD *)(v2 - 8) ^= *(_DWORD *)(a1 + 136);
      }
      v2 = *(_QWORD *)(v2 + 8);
    }
    else
    {
      RtlpDecommitBlock(a1);
      v2 = *(_QWORD *)(v2 + 8);
    }
  }
}
