/*
 * XREFs of HalpDmaInitializeMasterAdapter @ 0x140C12B98
 * Callers:
 *     HalpDmaInit @ 0x140C12654 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054CAF4 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140C12468 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140C1262C (HalpDmaFreeTranslationBuffer.c)
 */

__int64 __fastcall HalpDmaInitializeMasterAdapter(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned int v8; // ebp
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 TranslationBuffer; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx

  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  v8 = (a6 + 31) & 0xFFFFFFE0;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 192) = a1 + 184;
  *(_QWORD *)(a1 + 184) = a1 + 184;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 16) = 1634550856;
  *(_BYTE *)(a1 + 152) = 1;
  *(_BYTE *)(a1 + 153) = a7;
  v12 = HalpMmAllocCtxAlloc(a1, (unsigned __int64)v8 >> 3);
  if ( v12 )
  {
    v13 = HalpMmAllocCtxAlloc(v11, 16LL);
    *(_QWORD *)(a1 + 24) = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = v8;
      *(_QWORD *)(v13 + 8) = v12;
      RtlSetAllBits(*(PRTL_BITMAP *)(a1 + 24));
      if ( !a3 )
        return 0LL;
      TranslationBuffer = HalpDmaAllocateTranslationBuffer(v15, a1 + 64);
      *(_QWORD *)(a1 + 48) = TranslationBuffer;
      if ( TranslationBuffer )
      {
        v17 = MmMapIoSpaceEx(a2, a3, 4LL);
        v18 = v17;
        if ( !v17 )
        {
LABEL_8:
          HalpDmaFreeTranslationBuffer(*(_QWORD *)(a1 + 48));
          goto LABEL_9;
        }
        if ( !HalpDmaCommitContiguousMapBuffers(a1, v17, a2, (a3 >> 12) + ((a3 & 0xFFF) != 0)) )
        {
          MiUnmapContiguousMemory(v18, a3, 1);
          goto LABEL_8;
        }
        *(_DWORD *)(a1 + 220) = a3 >> 13;
        return 0LL;
      }
    }
LABEL_9:
    HalpMmAllocCtxFree(v14, v12);
  }
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
    HalpMmAllocCtxFree(v11, v19);
  return 3221225626LL;
}
