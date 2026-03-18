/*
 * XREFs of ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009F494
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400A5AFC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14010C590 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140035D1C (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B0ADC (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(
        VIDMM_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_SEGMENT *v2; // r12
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  char *v6; // rbp
  char *v7; // r14
  __int64 v8; // rdx
  char *v9; // rdi
  char *v10; // r13
  unsigned int v11; // ebx
  bool v12; // zf
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  char *v14; // rsi
  __int64 v15; // r13
  char *v16; // r14
  struct VIDMM_ALLOC *v17; // rbp
  __int64 *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned int v27; // edi
  CVirtualAddressAllocator *v28; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v29; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+70h] [rbp-98h]
  char *v31; // [rsp+78h] [rbp-90h]
  __int64 v32; // [rsp+80h] [rbp-88h]
  char *v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  char *v35; // [rsp+98h] [rbp-70h]
  char *v36; // [rsp+A0h] [rbp-68h]
  _DWORD v37[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-58h]
  char v40; // [rsp+118h] [rbp+10h]
  char v41; // [rsp+120h] [rbp+18h]
  unsigned int v42; // [rsp+128h] [rbp+20h]

  v2 = this;
  v32 = *(_QWORD *)a2;
  v4 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(*(_QWORD *)a2 + 64LL));
  v6 = (char *)(v5 + 112);
  v7 = *(char **)(v5 + 112);
  v42 = v4;
  while ( v7 != v6 )
  {
    v8 = *((_QWORD *)v2 + 3);
    v9 = v7;
    v28 = 0LL;
    v10 = 0LL;
    v29 = -1LL;
    v11 = 0;
    v30 = 0LL;
    v12 = (*(_BYTE *)(v8 + 40936) & 0x10) == 0;
    v7 = *(char **)v7;
    v36 = v7;
    v33 = 0LL;
    v40 = 0;
    v41 = 0;
    if ( !v12 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *((VIDMM_PROCESS **)v9 - 5),
                                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 240LL),
                                  *((_DWORD *)a2 + 6) & 0x3F);
      v28 = VirtualAddressAllocator;
      v10 = (char *)VirtualAddressAllocator + 56;
      v33 = (char *)VirtualAddressAllocator + 56;
      if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 56));
        v40 = 1;
      }
    }
    v14 = (char *)*((_QWORD *)v9 - 2);
    v31 = v9 - 16;
    if ( v14 != v9 - 16 )
    {
      v15 = v32;
      v16 = v9 - 16;
      do
      {
        v12 = (*((_DWORD *)a2 + 6) & 0x10000000) == 0;
        v17 = (struct VIDMM_ALLOC *)(v14 - 40);
        v14 = *(char **)v14;
        v35 = v14;
        if ( !v12 )
          VIDMM_GLOBAL::BuildInitContextAllocation(*((VIDMM_GLOBAL **)v2 + 3), v17, 0);
        if ( (*(_BYTE *)(*((_QWORD *)v2 + 3) + 40936LL) & 0x10) != 0 && *((_BYTE *)v17 + 26) )
        {
          v18 = (__int64 *)*((_QWORD *)v17 + 16);
          v37[0] = *(_DWORD *)(v15 + 16) >> 12;
          v19 = *(_QWORD *)(v15 + 72) >> 12;
          v37[1] = 1;
          v38 = v19;
          if ( v18 != (__int64 *)((char *)v17 + 128) )
          {
            v20 = v29;
            v21 = v30;
            do
            {
              v22 = *((_DWORD *)a2 + 6) & 0x3F;
              v34 = 0LL;
              v23 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      v28,
                      v18 - 4,
                      v22,
                      v42,
                      0LL,
                      v37,
                      0,
                      &v34,
                      0LL,
                      0,
                      0LL);
              if ( v23 >= 0 )
              {
                v25 = v18[10];
                v41 = 1;
                v11 |= 1 << ((*((_DWORD *)v18 + 10) >> 4) & 0x3F);
                v26 = v18[9];
                if ( v20 < v26 )
                  v26 = v20;
                v20 = v26;
                if ( v21 > v25 )
                  v25 = v21;
                v21 = v25;
              }
              else
              {
                WdLogSingleEntry2(3LL, v17, v23);
                v24 = *((_QWORD *)v17 + 1);
                WdLogGlobalForLineNumber = 6966;
                VidSchMarkDeviceAsError(*(_QWORD *)(v24 + 32), 23LL);
              }
              v18 = (__int64 *)*v18;
            }
            while ( v18 != (__int64 *)((char *)v17 + 128) );
            v16 = v31;
            v30 = v21;
            v14 = v35;
            v29 = v20;
            v15 = v32;
          }
          v2 = this;
        }
      }
      while ( v14 != v16 );
      v7 = v36;
      v6 = (char *)a2 + 112;
      v10 = v33;
    }
    if ( v40 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v41 )
    {
      v27 = 0;
      if ( v11 )
      {
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
