/*
 * XREFs of ?RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x14010231C
 * Callers:
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x14010218C (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400F7E8C (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RegisterFenceGpuData(VIDMM_GLOBAL *this, struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *a2)
{
  char *v2; // rbx
  bool v5; // zf
  struct _MDL *v6; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v8; // eax
  unsigned int v9; // ebx
  VIDMM_GLOBAL **v11; // rdx
  VIDMM_GLOBAL *v12; // rax
  char *v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v2 = (char *)this + 3760;
  v13 = (char *)this + 3760;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v5 = *((_BYTE *)this + 40109) == 0;
  v14 = 1;
  if ( v5
    || (v6 = (struct _MDL *)*((_QWORD *)a2 + 7),
        LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 8), 0LL),
        v8 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v6, 0),
        v9 = v8,
        v8 >= 0) )
  {
    v11 = (VIDMM_GLOBAL **)*((_QWORD *)this + 467);
    v12 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)a2 + 16);
    if ( *v11 != (VIDMM_GLOBAL *)((char *)this + 3728) )
      __fastfail(3u);
    *(_QWORD *)v12 = (char *)this + 3728;
    *((_QWORD *)a2 + 3) = v11;
    *v11 = v12;
    *((_QWORD *)this + 467) = v12;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v13);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v8);
    WdLogGlobalForLineNumber = 1948;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v13);
    return v9;
  }
}
