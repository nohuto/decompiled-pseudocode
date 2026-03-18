/*
 * XREFs of ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x140097F98
 * Callers:
 *     ?RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x140097EAC (-RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ?RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z @ 0x140097F44 (-RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003C090 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400BFF30 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        unsigned int a5)
{
  int v8; // esi
  struct VIDMM_GLOBAL **v9; // rdi
  __int64 v10; // r14
  char *v11; // rbx
  struct VIDMM_GLOBAL **i; // rax
  struct VIDMM_GLOBAL *j; // rax
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rsi
  unsigned __int64 LogicalAddress; // rax
  int v16; // ebp
  __int128 v18; // [rsp+60h] [rbp-38h] BYREF
  struct VIDMM_DEVICE *v19; // [rsp+B0h] [rbp+18h] BYREF

  v19 = a3;
  v8 = 1 << a5;
  v9 = 0LL;
  v10 = 0LL;
  v11 = (char *)this + 72;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (struct VIDMM_GLOBAL **)*((_QWORD *)this + 7);
        i != (struct VIDMM_GLOBAL **)((char *)this + 56);
        i = (struct VIDMM_GLOBAL **)*i )
  {
    if ( a2 == i[6] )
    {
      v9 = i;
      break;
    }
  }
  for ( j = v9[4]; j != (struct VIDMM_GLOBAL *)(v9 + 4); j = *(struct VIDMM_GLOBAL **)j )
  {
    if ( a4 == *((struct VIDMM_PROCESS **)j - 1) && *((_DWORD *)j + 5) == v8 )
    {
      v10 = (__int64)j - 40;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(a4, *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL), a5);
  v18 = 0LL;
  LogicalAddress = SysMmGetLogicalAddress(v9[8]);
  VidMmiInitializeAdlForPfnArray(
    (struct _DXGK_ADL *)&v18,
    (const unsigned __int64 *)v9[7] + 6,
    *((_DWORD *)v9[7] + 10) >> 12,
    LogicalAddress);
  v19 = 0LL;
  v16 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          VirtualAddressAllocator,
          *(_QWORD *)(v10 + 16),
          a5,
          0LL,
          0LL,
          &v18,
          0,
          &v19,
          0LL,
          0,
          0LL);
  if ( v16 >= 0 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(3LL, VirtualAddressAllocator, v9, v10);
    WdLogGlobalForLineNumber = 1298;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v16;
  }
}
