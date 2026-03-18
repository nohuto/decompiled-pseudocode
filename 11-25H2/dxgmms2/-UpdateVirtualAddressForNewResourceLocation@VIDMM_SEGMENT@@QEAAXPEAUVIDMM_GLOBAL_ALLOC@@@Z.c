/*
 * XREFs of ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009DBE4
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400A427C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14010E7A0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140037174 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E2280 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(
        VIDMM_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_SEGMENT *v2; // r13
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  char *v6; // rbp
  char *v7; // r15
  __int64 v8; // rdx
  char *v9; // rsi
  struct _KTHREAD **v10; // rdi
  unsigned int v11; // ebx
  bool v12; // zf
  char *v13; // r14
  __int64 v14; // rdi
  char *v15; // r15
  struct VIDMM_ALLOC *v16; // rbp
  __int64 *v17; // rsi
  __int64 v18; // rax
  CVirtualAddressAllocator *v19; // r15
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r14
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned int v27; // edi
  CVirtualAddressAllocator *v28; // r13
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // [rsp+60h] [rbp-98h] BYREF
  CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+68h] [rbp-90h]
  unsigned __int64 v33; // [rsp+70h] [rbp-88h]
  char *v34; // [rsp+78h] [rbp-80h]
  __int64 v35; // [rsp+80h] [rbp-78h]
  struct _KTHREAD **v36; // [rsp+88h] [rbp-70h]
  char *v37; // [rsp+90h] [rbp-68h]
  char *v38; // [rsp+98h] [rbp-60h]
  _DWORD v39[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-50h]
  char v42; // [rsp+108h] [rbp+10h]
  char v43; // [rsp+110h] [rbp+18h]
  unsigned int v44; // [rsp+118h] [rbp+20h]

  v2 = this;
  v35 = *(_QWORD *)a2;
  v4 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v35 + 64));
  v6 = (char *)(v5 + 112);
  v7 = *(char **)(v5 + 112);
  v44 = v4;
  while ( v7 != v6 )
  {
    v8 = *((_QWORD *)v2 + 3);
    v9 = v7;
    VirtualAddressAllocator = 0LL;
    v10 = 0LL;
    v33 = -1LL;
    v11 = 0;
    v31 = 0LL;
    v12 = (*(_BYTE *)(v8 + 40936) & 0x10) == 0;
    v7 = *(char **)v7;
    v38 = v7;
    v36 = 0LL;
    v42 = 0;
    v43 = 0;
    if ( v12 )
      goto LABEL_8;
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *((VIDMM_PROCESS **)v9 - 5),
                                *(_DWORD *)(*(_QWORD *)(v8 + 24) + 240LL),
                                *((_DWORD *)a2 + 6) & 0x3F);
    v10 = (struct _KTHREAD **)((char *)VirtualAddressAllocator + 56);
    v36 = (struct _KTHREAD **)((char *)VirtualAddressAllocator + 56);
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v10[1] == KeGetCurrentThread() )
        goto LABEL_8;
LABEL_7:
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v10);
      v42 = 1;
      goto LABEL_8;
    }
    if ( v10[1] != KeGetCurrentThread() )
      goto LABEL_7;
LABEL_8:
    v13 = (char *)*((_QWORD *)v9 - 2);
    v34 = v9 - 16;
    if ( v13 != v9 - 16 )
    {
      v14 = v35;
      v15 = v9 - 16;
      do
      {
        v12 = (*((_DWORD *)a2 + 6) & 0x10000000) == 0;
        v16 = (struct VIDMM_ALLOC *)(v13 - 40);
        v13 = *(char **)v13;
        v37 = v13;
        if ( !v12 )
          VIDMM_GLOBAL::BuildInitContextAllocation(*((VIDMM_GLOBAL **)v2 + 3), v16, 0);
        if ( (*(_BYTE *)(*((_QWORD *)v2 + 3) + 40936LL) & 0x10) != 0 && *((_BYTE *)v16 + 26) )
        {
          v17 = (__int64 *)*((_QWORD *)v16 + 16);
          v39[0] = *(_DWORD *)(v14 + 16) >> 12;
          v18 = *(_QWORD *)(v14 + 72) >> 12;
          v39[1] = 1;
          v40 = v18;
          if ( v17 != (__int64 *)((char *)v16 + 128) )
          {
            v19 = VirtualAddressAllocator;
            v20 = v33;
            v21 = v31;
            do
            {
              v22 = *((_DWORD *)a2 + 6) & 0x3F;
              v31 = 0LL;
              v23 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      v19,
                      v17 - 4,
                      v22,
                      v44,
                      0LL,
                      v39,
                      0,
                      &v31,
                      0LL,
                      0,
                      0LL);
              if ( v23 >= 0 )
              {
                v25 = v17[10];
                v43 = 1;
                v11 |= 1 << ((*((_DWORD *)v17 + 10) >> 4) & 0x3F);
                v26 = v17[9];
                if ( v20 < v26 )
                  v26 = v20;
                v20 = v26;
                if ( v21 > v25 )
                  v25 = v21;
                v21 = v25;
              }
              else
              {
                WdLogSingleEntry2(3LL, v16, v23);
                v24 = *((_QWORD *)v16 + 1);
                WdLogGlobalForLineNumber = 6987;
                VidSchMarkDeviceAsError(*(_QWORD *)(v24 + 32), 23);
              }
              v17 = (__int64 *)*v17;
            }
            while ( v17 != (__int64 *)((char *)v16 + 128) );
            v15 = v34;
            v31 = v21;
            v13 = v37;
            v33 = v20;
            v14 = v35;
          }
          v2 = this;
        }
      }
      while ( v13 != v15 );
      v10 = v36;
      v6 = (char *)a2 + 112;
      v7 = v38;
    }
    if ( v42 )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      v10[1] = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v43 )
    {
      v27 = 0;
      if ( v11 )
      {
        v28 = VirtualAddressAllocator;
        v29 = v33;
        v30 = v31;
        do
        {
          if ( (v11 & 1) != 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v28, v27, v29, v30);
          ++v27;
          v11 >>= 1;
        }
        while ( v11 );
        v2 = this;
      }
    }
  }
}
