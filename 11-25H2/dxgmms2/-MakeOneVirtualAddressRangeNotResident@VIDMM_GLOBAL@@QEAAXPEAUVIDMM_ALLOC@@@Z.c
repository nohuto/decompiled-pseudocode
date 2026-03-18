/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400AB120
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AA9F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400AAB80 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400AAC90 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140037174 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x140037BF8 (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140038D54 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400D00E0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  unsigned int v3; // edi
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 **v7; // rsi
  __int64 v8; // rcx
  bool IsGpuVaIoMmuGlobalSupported; // al
  __int64 *v10; // rsi
  struct _KTHREAD **v11; // rsi
  __int64 **v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  size_t v16; // rbx
  unsigned int v17; // ebx
  __int64 **v18; // r12
  __int64 *i; // r14
  unsigned int v20; // r8d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  int v25; // [rsp+20h] [rbp-458h] BYREF
  int v26; // [rsp+24h] [rbp-454h]
  unsigned __int64 v27[64]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v28[64]; // [rsp+230h] [rbp-248h] BYREF

  *((_BYTE *)a2 + 26) = 0;
  v3 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( (*(_DWORD *)(v5 + 96) & 2) != 0 )
  {
    v6 = *(_DWORD *)(**(_QWORD **)a2 + 24LL) & 0x3F;
    v7 = (__int64 **)(*(_QWORD *)(v5 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
    if ( !*v7 || (v8 = **v7, !*(_DWORD *)(v8 + 40928)) )
    {
      v11 = 0LL;
      goto LABEL_16;
    }
    IsGpuVaIoMmuGlobalSupported = DXGADAPTER::IsGpuVaIoMmuGlobalSupported(*(DXGADAPTER **)(v8 + 24));
    v10 = *v7;
    if ( IsGpuVaIoMmuGlobalSupported )
    {
      v11 = *(struct _KTHREAD ***)(*v10 + 44504);
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(v5 + 96) & 2) != 0 )
    {
      v11 = *(struct _KTHREAD ***)(*v10 + 8 * v6 + 40416);
      goto LABEL_16;
    }
  }
  else
  {
    v12 = (__int64 **)(*(_QWORD *)(v5 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
    if ( !*v12 )
      return;
    v13 = **v12;
    if ( !*(_DWORD *)(v13 + 40928) )
      return;
    v14 = *(_QWORD *)(v13 + 24);
    v25 = 0;
    SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v14 + 224), (union SYSMM_IOMMU_STATE *)&v25);
    if ( (v25 & 8) != 0 )
    {
      v11 = *(struct _KTHREAD ***)(**v12 + 44504);
      goto LABEL_16;
    }
    v10 = *v12;
    if ( (*(_DWORD *)(v5 + 96) & 2) != 0 )
    {
      v11 = *(struct _KTHREAD ***)(*v10 + 0x800009DD8LL);
      goto LABEL_16;
    }
  }
  v11 = (struct _KTHREAD **)v10[23];
LABEL_16:
  if ( v11 )
  {
    v15 = *((_DWORD *)this + 1736);
    if ( v15 )
    {
      v16 = 8LL * v15;
      memset(v28, -1, v16);
      memset(v27, 0, v16 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    v17 = 0;
    v26 = 0;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v11[8] != KeGetCurrentThread() )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 7));
      v26 = 2;
    }
    v18 = (__int64 **)((char *)a2 + 128);
    for ( i = *v18; i != (__int64 *)v18; i = (__int64 *)*i )
    {
      if ( (i[5] & 0x1C00) != 0 )
      {
        CVirtualAddressAllocator::UncommitVirtualAddressRange(
          (CVirtualAddressAllocator *)v11,
          (struct VIDMM_MAPPED_VA_RANGE *)(i - 4),
          0LL,
          0);
        v20 = *((_DWORD *)i + 10);
        v21 = v28[(v20 >> 4) & 0x3F];
        if ( v21 >= i[9] )
          v21 = i[9];
        v22 = i[10];
        v28[(*((_DWORD *)i + 10) >> 4) & 0x3F] = v21;
        v23 = v27[(v20 >> 4) & 0x3F];
        if ( v23 <= v22 )
          v23 = v22;
        v27[(v20 >> 4) & 0x3F] = v23;
        _bittestandset((int *)&v17, (v20 >> 4) & 0x3F);
      }
    }
    if ( v26 == 2 )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      v11[8] = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 7, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (*((_BYTE *)this + 40936) & 2) != 0 && v17 )
    {
      do
      {
        if ( (v17 & 1) != 0 )
        {
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      (VIDMM_PROCESS *)v5,
                                      *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                      v3);
          CVirtualAddressAllocator::FlushGpuVaTlb(VirtualAddressAllocator, v3, v28[v3], v27[v3]);
        }
        ++v3;
        v17 >>= 1;
      }
      while ( v17 );
    }
  }
}
