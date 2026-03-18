/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400B3520
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B2DF0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400B2F80 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B3090 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140035D1C (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x140036618 (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140037604 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400F25E8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  unsigned int v3; // edi
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 **v7; // rbp
  __int64 v8; // rcx
  bool IsGpuVaIoMmuGlobalSupported; // al
  __int64 *v10; // rbp
  _QWORD *v11; // rbp
  __int64 **v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  size_t v16; // rbx
  struct _KTHREAD *v17; // rcx
  unsigned int v18; // ebx
  __int64 **v19; // r12
  __int64 *i; // rsi
  unsigned int v21; // r8d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  int v26; // [rsp+20h] [rbp-458h] BYREF
  int v27; // [rsp+24h] [rbp-454h]
  unsigned __int64 v28[64]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v29[64]; // [rsp+230h] [rbp-248h] BYREF

  *((_BYTE *)a2 + 26) = 0;
  v3 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( (*(_DWORD *)(v5 + 96) & 2) != 0 )
  {
    v6 = *(_DWORD *)(**(_QWORD **)a2 + 24LL) & 0x3F;
    v7 = (__int64 **)(*(_QWORD *)(v5 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
    if ( !*v7 )
      return;
    v8 = **v7;
    if ( !*(_DWORD *)(v8 + 40928) )
      return;
    IsGpuVaIoMmuGlobalSupported = DXGADAPTER::IsGpuVaIoMmuGlobalSupported(*(DXGADAPTER **)(v8 + 24));
    v10 = *v7;
    if ( IsGpuVaIoMmuGlobalSupported )
    {
      v11 = *(_QWORD **)(*v10 + 44504);
      goto LABEL_15;
    }
    if ( (*(_DWORD *)(v5 + 96) & 2) != 0 )
    {
      v11 = *(_QWORD **)(*v10 + 8 * v6 + 40416);
      goto LABEL_15;
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
    v26 = 0;
    SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v14 + 224), (union SYSMM_IOMMU_STATE *)&v26);
    if ( (v26 & 8) != 0 )
    {
      v11 = *(_QWORD **)(**v12 + 44504);
      goto LABEL_15;
    }
    v10 = *v12;
    if ( (*(_DWORD *)(v5 + 96) & 2) != 0 )
    {
      v11 = *(_QWORD **)(*v10 + 0x800009DD8LL);
      goto LABEL_15;
    }
  }
  v11 = (_QWORD *)v10[23];
LABEL_15:
  if ( v11 )
  {
    v15 = *((_DWORD *)this + 1736);
    if ( v15 )
    {
      v16 = 8LL * v15;
      memset(v29, -1, v16);
      memset(v28, 0, v16 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    v17 = (struct _KTHREAD *)v11[8];
    v18 = 0;
    v27 = 0;
    if ( v17 != KeGetCurrentThread() )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 7));
      v27 = 2;
    }
    v19 = (__int64 **)((char *)a2 + 128);
    for ( i = *v19; i != (__int64 *)v19; i = (__int64 *)*i )
    {
      if ( (i[5] & 0x1C00) != 0 )
      {
        CVirtualAddressAllocator::UncommitVirtualAddressRange(
          (CVirtualAddressAllocator *)v11,
          (struct VIDMM_MAPPED_VA_RANGE *)(i - 4),
          0LL,
          0);
        v21 = *((_DWORD *)i + 10);
        v22 = v29[(v21 >> 4) & 0x3F];
        if ( v22 >= i[9] )
          v22 = i[9];
        v23 = i[10];
        v29[(*((_DWORD *)i + 10) >> 4) & 0x3F] = v22;
        v24 = v28[(v21 >> 4) & 0x3F];
        if ( v24 <= v23 )
          v24 = v23;
        v28[(v21 >> 4) & 0x3F] = v24;
        _bittestandset((int *)&v18, (v21 >> 4) & 0x3F);
      }
    }
    if ( v27 == 2 )
    {
      v11[8] = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 7, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (*((_BYTE *)this + 40936) & 2) != 0 && v18 )
    {
      do
      {
        if ( (v18 & 1) != 0 )
        {
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      (VIDMM_PROCESS *)v5,
                                      *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                      v3);
          CVirtualAddressAllocator::FlushGpuVaTlb(VirtualAddressAllocator, v3, v29[v3], v28[v3]);
        }
        ++v3;
        v18 >>= 1;
      }
      while ( v18 );
    }
  }
}
