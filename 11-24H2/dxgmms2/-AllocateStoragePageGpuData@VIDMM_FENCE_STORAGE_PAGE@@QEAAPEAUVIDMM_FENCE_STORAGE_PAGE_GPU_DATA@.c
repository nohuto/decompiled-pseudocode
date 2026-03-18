/*
 * XREFs of ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x14010218C
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400F95B8 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x140039CD4 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004B3B0 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x14010231C (-RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z.c)
 */

struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *__fastcall VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  int LogicalMemory; // eax
  int v9; // eax
  VIDMM_FENCE_STORAGE_PAGE **v10; // rcx
  __int64 v11; // rcx
  void *v13; // rdx

  Pool2 = ExAllocatePool2(64LL, 80LL, 1700882774LL);
  v5 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    _InterlockedIncrement(&dword_140081820);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 776;
    DxgkLogInternalTriageEvent(v11, 262145LL);
    return 0LL;
  }
  v6 = (_QWORD *)(Pool2 + 32);
  v6[1] = v6;
  *v6 = v6;
  v7 = *((_QWORD *)this + 15);
  *((_DWORD *)v5 + 18) = 0;
  v5[7] = v7;
  v5[6] = a2;
  LogicalMemory = SysMmAllocateLogicalMemory(
                    *(struct SYSMM_ADAPTER **)(*((_QWORD *)a2 + 3) + 224LL),
                    *(unsigned int *)(v7 + 40),
                    this,
                    (void **)v5 + 8);
  if ( LogicalMemory < 0 )
  {
    WdLogSingleEntry1(3LL, LogicalMemory);
    WdLogGlobalForLineNumber = 794;
LABEL_11:
    v13 = (void *)v5[8];
    if ( v13 )
      SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)a2 + 3) + 224LL), v13);
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  v9 = VIDMM_GLOBAL::RegisterFenceGpuData(a2, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v5);
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    WdLogGlobalForLineNumber = 801;
    goto LABEL_11;
  }
  v10 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)this + 8);
  if ( *v10 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56) )
    __fastfail(3u);
  *v5 = (char *)this + 56;
  v5[1] = v10;
  *v10 = (VIDMM_FENCE_STORAGE_PAGE *)v5;
  *((_QWORD *)this + 8) = v5;
  return (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v5;
}
