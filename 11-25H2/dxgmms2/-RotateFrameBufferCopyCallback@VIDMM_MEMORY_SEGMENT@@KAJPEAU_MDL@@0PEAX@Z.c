/*
 * XREFs of ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1400A7420
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A79DC (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400A9270 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  __int64 v5; // r8
  __int64 v6; // rsi
  unsigned __int64 LogicalAddress; // rbp
  unsigned __int64 *v8; // r14
  unsigned __int64 ByteCount; // rbx
  struct VIDMM_GLOBAL_ALLOC *v10; // rdx
  __int64 result; // rax
  int v12; // eax
  unsigned int v13; // ebx

  v5 = *(_QWORD *)a3;
  v6 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 24LL);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 40232) + 8LL * (*(_DWORD *)(v5 + 24) & 0x3F)) + 476LL) & 0x20) == 0 )
    return 3221225473LL;
  LogicalAddress = 0LL;
  v8 = (unsigned __int64 *)(a3 + 32);
  if ( *(_BYTE *)(v6 + 40107)
    && (LogicalAddress = VidMmiGetLogicalAddress(*(void **)(v5 + 352), *v8),
        v12 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v6 + 24) + 224LL), LogicalAddress, a2, 0),
        v13 = v12,
        v12 < 0) )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)a3, v12);
    result = v13;
    WdLogGlobalForLineNumber = 3167;
  }
  else
  {
    ByteCount = a2->ByteCount;
    VIDMM_GLOBAL::MemoryTransfer(
      (VIDMM_GLOBAL *)v6,
      *(struct VIDMM_GLOBAL_ALLOC **)a3,
      ByteCount,
      *v8,
      0LL,
      0LL,
      a2,
      *((struct VIDMM_SEGMENT **)a3 + 1),
      (union _LARGE_INTEGER *)a3 + 2,
      0LL,
      *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
    v10 = *(struct VIDMM_GLOBAL_ALLOC **)a3;
    *v8 += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v6, v10);
    VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v6, *(_DWORD *)(*(_QWORD *)a3 + 24LL) & 0x3F);
    if ( *(_BYTE *)(v6 + 40107) )
      SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v6 + 24) + 224LL), LogicalAddress, a2, 0);
    return 0LL;
  }
  return result;
}
