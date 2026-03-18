/*
 * XREFs of ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1400A6D90
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A79DC (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400A9270 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  __int64 v5; // rdi
  unsigned __int64 ByteCount; // r15
  __int64 v7; // r8
  unsigned __int64 LogicalAddress; // r14
  struct VIDMM_GLOBAL_ALLOC *v9; // rdx
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // esi

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 24LL);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 40232) + 8LL * (*(_DWORD *)(*(_QWORD *)a3 + 24LL) & 0x3F)) + 476LL) & 0x20) == 0 )
    return 3221225473LL;
  ByteCount = a1->ByteCount;
  if ( VIDMM_GLOBAL::IsTdrPending(*(VIDMM_GLOBAL **)(*((_QWORD *)a3 + 1) + 24LL)) )
  {
    *((_QWORD *)a3 + 4) += ByteCount;
    return 0LL;
  }
  LogicalAddress = 0LL;
  if ( !*(_BYTE *)(v5 + 40107)
    || (LogicalAddress = VidMmiGetLogicalAddress(*(void **)(v7 + 352), *((_QWORD *)a3 + 4)),
        v11 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v5 + 24) + 224LL), LogicalAddress, a1, 0),
        v12 = v11,
        v11 >= 0) )
  {
    VIDMM_GLOBAL::MemoryTransfer(
      (VIDMM_GLOBAL *)v5,
      *(struct VIDMM_GLOBAL_ALLOC **)a3,
      ByteCount,
      *((_QWORD *)a3 + 4),
      *((struct VIDMM_SEGMENT **)a3 + 1),
      (union _LARGE_INTEGER *)a3 + 2,
      0LL,
      0LL,
      0LL,
      a1,
      *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
    v9 = *(struct VIDMM_GLOBAL_ALLOC **)a3;
    *((_QWORD *)a3 + 4) += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v5, v9);
    VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, *(_DWORD *)(*(_QWORD *)a3 + 24LL) & 0x3F);
    if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v5)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 744LL) + 3268LL) & 4) != 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 4LL, 0LL, 10LL, 0LL);
      WdLogGlobalForLineNumber = 195;
      goto LABEL_13;
    }
    if ( *(_BYTE *)(v5 + 40107) )
LABEL_13:
      SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v5 + 24) + 224LL), LogicalAddress, a1, 0);
    return 0LL;
  }
  WdLogSingleEntry2(3LL, *(_QWORD *)a3, v11);
  result = v12;
  WdLogGlobalForLineNumber = 3044;
  return result;
}
