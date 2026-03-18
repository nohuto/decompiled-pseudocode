/*
 * XREFs of ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400D00E0
 * Callers:
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400A9270 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400AB120 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1400B5418 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400BF1DC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F515C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002D98C (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140037174 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K2@Z @ 0x14004BCE8 (-SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K2@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 */

__int64 __fastcall CVirtualAddressAllocator::UncommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        struct VIDMM_ALLOC **a3,
        char a4)
{
  unsigned int v6; // ecx
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r14
  char v14; // al
  struct VIDMM_ALLOC **v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r15
  VIDMM_PAGE_DIRECTORY *v18; // rbx
  int v19; // eax
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v27; // [rsp+54h] [rbp-C4h]
  __int64 v28; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-B8h]
  _DWORD v30[24]; // [rsp+70h] [rbp-A8h] BYREF

  v6 = *((_DWORD *)a2 + 18);
  v8 = 0;
  v9 = *((_QWORD *)a2 + 13);
  v10 = *((_QWORD *)this + 11);
  v11 = *((_QWORD *)a2 + 14) - v9;
  v12 = (v6 >> 4) & 0x3F;
  v27 = (v6 >> 4) & 0x3F;
  v13 = *(_QWORD *)(*(_QWORD *)(v10 + 40232) + 8 * v12);
  v29 = v13;
  v14 = *(_BYTE *)(v13 + 476);
  if ( (v14 & 4) != 0 )
  {
    if ( (v6 & 0x800) == 0 )
      return 0LL;
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(
                          *(DXGPROCESS **)(*((_QWORD *)this + 12) + 32LL),
                          *(_DWORD *)(*(_QWORD *)(v10 + 24) + 240LL));
    v22 = SysMmUnmapLogicalAddressRange(
            *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)RenderAdapterInfo + 10) + 16LL) + 224LL),
            *((struct _IOMMU_DMA_DOMAIN **)RenderAdapterInfo + 5));
    v8 = v22;
    if ( v22 >= 0 )
      goto LABEL_22;
    WdLogSingleEntry1(1LL, v22);
    WdLogGlobalForLineNumber = 3709;
LABEL_19:
    DxgkLogInternalTriageEvent(v23, 0x40000LL);
    return v8;
  }
  if ( (v14 & 8) == 0 )
    goto LABEL_3;
  if ( (v6 & 0x800) == 0 )
    return 0LL;
  v24 = SysMmUnmapLogicalAddressRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v10 + 24) + 224LL), 0LL);
  v8 = v24;
  if ( v24 < 0 )
  {
    WdLogSingleEntry1(1LL, v24);
    WdLogGlobalForLineNumber = 3745;
    goto LABEL_19;
  }
LABEL_22:
  *((_DWORD *)a2 + 18) &= ~0x800u;
LABEL_3:
  if ( (*(_BYTE *)(v13 + 476) & 1) != 0 )
  {
    v28 = 0LL;
    v15 = (struct VIDMM_ALLOC **)&v28;
    if ( a3 )
      v15 = a3;
    v16 = v11 >> 12;
    *v15 = 0LL;
    v17 = *((_QWORD *)a2 + 13);
    v18 = *(VIDMM_PAGE_DIRECTORY **)(32 * v12 + *((_QWORD *)this + 15));
    if ( v18 )
    {
      memset(v30, 0, sizeof(v30));
      v30[18] = -1;
      if ( (**(_DWORD **)(v29 + 480) & 0x80u) != 0 )
        *(_WORD *)((char *)&v30[19] + 1) = 257;
      v19 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              v18,
              this,
              (const struct COMMIT_VA_STATE *)v30,
              0LL,
              v17,
              v16,
              0LL,
              0,
              v15);
      v8 = v19;
      if ( v19 < 0 && *v15 && !a3 )
      {
        WdLogSingleEntry2(1LL, v19, v15);
        WdLogGlobalForLineNumber = 3791;
        DxgkLogInternalTriageEvent(v25, 0x40000LL);
      }
      if ( a4 )
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v27, v17, v17 + (v16 << 12));
    }
    *((_DWORD *)a2 + 18) &= 0xFFFFEBFF;
    return v8;
  }
  return 0LL;
}
