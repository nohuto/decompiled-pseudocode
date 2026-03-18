/*
 * XREFs of ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1400980C8
 * Callers:
 *     ?RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x140097FDC (-RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ?RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z @ 0x140098074 (-RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400F7C78 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        unsigned int a5)
{
  int v8; // ebp
  __int64 *v9; // rsi
  __int64 *v10; // r14
  char *v11; // rdi
  __int64 **v12; // rbx
  __int64 *i; // rax
  __int64 *j; // rax
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v17; // ebp
  __int128 v19; // [rsp+60h] [rbp-38h] BYREF
  struct VIDMM_DEVICE *v20; // [rsp+B0h] [rbp+18h] BYREF

  v20 = a3;
  v8 = 1 << a5;
  v9 = 0LL;
  v10 = 0LL;
  v11 = (char *)this + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  v12 = (__int64 **)((char *)this + 56);
  *((_QWORD *)v11 + 1) = KeGetCurrentThread();
  for ( i = *v12; i != (__int64 *)v12; i = (__int64 *)*i )
  {
    if ( a2 == (struct VIDMM_GLOBAL *)i[6] )
    {
      v9 = i;
      break;
    }
  }
  for ( j = (__int64 *)v9[4]; j != v9 + 4; j = (__int64 *)*j )
  {
    if ( a4 == (struct VIDMM_PROCESS *)*(j - 1) && *((_DWORD *)j + 5) == v8 )
    {
      v10 = j - 5;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(a4, *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL), a5);
  v19 = 0LL;
  LogicalAddress = SysMmGetLogicalAddress((void *const)v9[8]);
  VidMmiInitializeAdlForPfnArray(
    (struct _DXGK_ADL *)&v19,
    (const unsigned __int64 *)(v9[7] + 48),
    *(_DWORD *)(v9[7] + 40) >> 12,
    LogicalAddress);
  v20 = 0LL;
  v17 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          VirtualAddressAllocator,
          v10[2],
          a5,
          0LL,
          0LL,
          &v19,
          0,
          &v20,
          0LL,
          0,
          0LL);
  if ( v17 >= 0 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(3LL, VirtualAddressAllocator, v9, v10);
    WdLogGlobalForLineNumber = 1298;
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v17;
  }
}
