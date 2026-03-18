/*
 * XREFs of ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1400B3BF8
 * Callers:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400B3BA4 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400B348C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@_N@Z @ 0x1400B46FC (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1401032F4 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x140108018 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PROCESS *a3,
        unsigned int a4,
        bool a5)
{
  char *v9; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v10; // rax
  VIDMM_FENCE_STORAGE_PAGE *v11; // r14
  _QWORD *v12; // rcx
  _DWORD *v13; // rbx
  _QWORD *v14; // rdi
  VIDMM_PROCESS *v15; // r9
  int v16; // eax
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // r13
  D3DGPU_VIRTUAL_ADDRESS v19; // r15
  struct VIDMM_PROCESS *v20; // r12
  bool v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  VIDMM_FENCE_STORAGE_PAGE *v24; // rcx
  char *v25; // [rsp+28h] [rbp-61h] BYREF
  char v26; // [rsp+30h] [rbp-59h]
  _D3DKMT_FREEGPUVIRTUALADDRESS v27; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v28[12]; // [rsp+58h] [rbp-31h] BYREF

  if ( (*((_BYTE *)a2 + 40936) & 0x10) != 0 )
  {
    v9 = (char *)this + 72;
    v25 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
    v10 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)this + 7);
    v26 = 1;
    while ( v10 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56) )
    {
      v11 = v10;
      v10 = *(VIDMM_FENCE_STORAGE_PAGE **)v10;
      if ( a2 == *((struct VIDMM_GLOBAL **)v11 + 6) )
      {
        v12 = (_QWORD *)*((_QWORD *)v11 + 4);
        while ( v12 != (_QWORD *)((char *)v11 + 32) )
        {
          v13 = v12 - 5;
          v14 = v12;
          v15 = (VIDMM_PROCESS *)*(v12 - 1);
          v12 = (_QWORD *)*v12;
          if ( a3 == v15 )
          {
            if ( !a5 || (v16 = v13[15], _bittest(&v16, a4)) )
            {
              if ( v13[14]-- == 1 )
              {
                if ( *((_BYTE *)v13 + 24) )
                {
                  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                              v15,
                                              *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL),
                                              a4);
                  v19 = *(_QWORD *)v13;
                  v20 = (struct VIDMM_PROCESS *)*((_QWORD *)v13 + 4);
                  if ( *((_BYTE *)v13 + 25) )
                  {
                    memset(v28, 0, 0x58uLL);
                    LODWORD(v28[0]) = 120;
                    v28[5] = v20;
                    v28[7] = v19;
                    v28[8] = 1LL;
                    v28[6] = VirtualAddressAllocator;
                    LOBYTE(v28[9]) = 1;
                    VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v28, v21);
                  }
                  else
                  {
                    *(_QWORD *)&v27.hAdapter = 0LL;
                    v27.BaseAddress = v19;
                    v27.Size = 4096LL;
                    VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(a2, v20, &v27, 1);
                  }
                  VIDMM_PROCESS::CloseAdapter(*((struct _KTHREAD ***)v13 + 4), a2);
                }
                v22 = *v14;
                if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v23 = (_QWORD *)v14[1], (_QWORD *)*v23 != v14) )
                  __fastfail(3u);
                *v23 = v22;
                *(_QWORD *)(v22 + 8) = v23;
                ExFreePoolWithTag(v13, 0);
                VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v24, v11);
              }
              goto LABEL_5;
            }
          }
        }
        break;
      }
    }
LABEL_5:
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v25);
  }
}
