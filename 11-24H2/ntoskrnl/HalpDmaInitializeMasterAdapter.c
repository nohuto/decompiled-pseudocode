/*
 * XREFs of HalpDmaInitializeMasterAdapter @ 0x140C10B98
 * Callers:
 *     HalpDmaInit @ 0x140C10654 (HalpDmaInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     RtlSetAllBits @ 0x1402E5D90 (RtlSetAllBits.c)
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline @ 0x14053C12C (Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054F1B4 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140C10468 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140C1062C (HalpDmaFreeTranslationBuffer.c)
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
  unsigned __int64 v7; // rsi
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 TranslationBuffer; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rdx

  v7 = a3;
  if ( (unsigned int)Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline() )
    *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  v11 = (a6 + 31) & 0xFFFFFFE0;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 192) = a1 + 184;
  *(_QWORD *)(a1 + 184) = a1 + 184;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 16) = 1634550856;
  *(_BYTE *)(a1 + 152) = 1;
  *(_BYTE *)(a1 + 153) = a7;
  v13 = HalpMmAllocCtxAlloc(v10, (unsigned __int64)v11 >> 3);
  if ( !v13 )
    goto LABEL_12;
  v14 = HalpMmAllocCtxAlloc(v12, 16LL);
  *(_QWORD *)(a1 + 24) = v14;
  if ( v14 )
  {
    *(_DWORD *)v14 = v11;
    *(_QWORD *)(v14 + 8) = v13;
    RtlSetAllBits(*(PRTL_BITMAP *)(a1 + 24));
    if ( !(_DWORD)v7 )
      return 0LL;
    TranslationBuffer = HalpDmaAllocateTranslationBuffer(v16, a1 + 64);
    *(_QWORD *)(a1 + 48) = TranslationBuffer;
    if ( TranslationBuffer )
    {
      v18 = MmMapIoSpaceEx(a2, v7, 4u);
      v19 = v18;
      if ( !v18 )
      {
LABEL_10:
        HalpDmaFreeTranslationBuffer(*(_QWORD *)(a1 + 48));
        goto LABEL_11;
      }
      if ( !HalpDmaCommitContiguousMapBuffers(a1, v18, a2, ((unsigned int)v7 >> 12) + ((v7 & 0xFFF) != 0)) )
      {
        MiUnmapContiguousMemory(v19, v7, 1);
        goto LABEL_10;
      }
      *(_DWORD *)(a1 + 220) = (unsigned int)v7 >> 13;
      return 0LL;
    }
  }
LABEL_11:
  HalpMmAllocCtxFree(v15, v13);
LABEL_12:
  v20 = *(_QWORD *)(a1 + 24);
  if ( v20 )
    HalpMmAllocCtxFree(v12, v20);
  return 3221225626LL;
}
