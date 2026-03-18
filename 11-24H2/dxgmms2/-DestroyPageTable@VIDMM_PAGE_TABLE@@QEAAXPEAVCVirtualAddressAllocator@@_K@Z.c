/*
 * XREFs of ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400AAB2C
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A358 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1400A9B04 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1400A9DC0 (-DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEA.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DB930 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x140114090 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004C9EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004CC70 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400A9EF4 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400AA4F4 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400AB7F0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400ABA84 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400ABD50 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400ABE20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 */

void __fastcall VIDMM_PAGE_TABLE::DestroyPageTable(
        struct VIDMM_GLOBAL_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct VIDMM_GLOBAL_ALLOC *v6; // r8
  VIDMM_GLOBAL *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  VIDMM_GLOBAL *v13; // r12
  enum _DXGK_PAGETABLEUPDATEMODE v14; // eax
  unsigned __int64 v15; // rbx
  unsigned int v16; // r8d
  PRKPROCESS *v17; // rcx
  struct VIDMM_GLOBAL_ALLOC *v18; // r8
  struct VIDMM_GLOBAL_ALLOC *v19; // rcx
  struct VIDMM_GLOBAL_ALLOC *v20; // rcx
  struct _DXGK_UPDATEPAGETABLEFLAGS v21; // [rsp+80h] [rbp-49h]
  __int64 v22; // [rsp+90h] [rbp-39h]
  unsigned int v23; // [rsp+98h] [rbp-31h] BYREF
  unsigned __int64 v24; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-11h] BYREF

  v22 = (unsigned int)Feature_CommitPagetableInstrumentation__private_featureState;
  if ( (Feature_CommitPagetableInstrumentation__private_featureState & 0x10) == 0 )
  {
    LODWORD(v22) = Feature_CommitPagetableInstrumentation__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor,
      v22,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v22,
      3,
      (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor);
  }
  WdLogSingleEntry3(4LL, this, this[3], this[2]);
  v6 = this[2];
  v7 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  WdLogGlobalForLineNumber = 5462;
  if ( v6 )
  {
    v8 = *(_QWORD *)v6;
    v9 = *(_QWORD *)(v8 + 64);
    if ( v9 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)v7 + 5029) + 8LL * ((*(_DWORD *)this >> 7) & 0x1F));
      if ( (*(_DWORD *)(v9 + 104) & 0x1000) != 0 )
        *(_QWORD *)(v8 + 72) = 0LL;
      if ( (**(_DWORD **)(v10 + 480) & 8) != 0 )
      {
        v11 = (*(_DWORD *)this & 0x40 | 0x20u) >> 3;
        if ( (*(_DWORD *)this & 0x40) != 0 )
          v12 = *(_DWORD *)(v10 + 120);
        else
          v12 = *(_DWORD *)(v10 + 116);
        v13 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
        v23 = 0;
        v24 = 0LL;
        v25 = 0LL;
        if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                    (VIDMM_PAGE_TABLE_BASE *)this,
                    a2,
                    &v23,
                    &v24,
                    (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v25) < 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4928;
        }
        else
        {
          if ( *((_BYTE *)v13 + 40940) )
            v14 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
          else
            v14 = (int)(*(_DWORD *)this << 16) >> 29;
          v21 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v11;
          v15 = v24;
          VIDMM_GLOBAL::UpdatePageTable(
            v13,
            (struct VIDMM_PAGE_TABLE_BASE *)this,
            *((struct VIDMM_PROCESS **)a2 + 12),
            0LL,
            0LL,
            0LL,
            0LL,
            0,
            v12,
            0LL,
            0LL,
            (*(_DWORD *)this >> 7) & 0x1F,
            v23,
            v24,
            v14,
            a3,
            v21,
            0LL);
          VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
            (VIDMM_PAGE_TABLE_BASE *)this,
            a2,
            v16,
            v15,
            (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v25);
        }
      }
      *((_DWORD *)this[2] + 6) |= 0x200000u;
      *((_BYTE *)this[2] + 42) = 1;
      VIDMM_GLOBAL::EvictOneAllocation(v7, this[3], 0);
      *((_DWORD *)this[2] + 6) &= ~0x200000u;
      if ( (byte_140081244 & 0x10) != 0 )
        McTemplateK0p_EtwWriteTransfer();
    }
  }
  if ( this[3] )
  {
    v17 = (PRKPROCESS *)*((_QWORD *)a2 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v17, &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v7, this[3], 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    KeUnstackDetachProcess(&ApcState);
    this[3] = 0LL;
  }
  v18 = this[2];
  if ( v18 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation(v7, 0LL, v18, 0);
    this[2] = 0LL;
  }
  v19 = this[4];
  if ( v19 )
  {
    operator delete(v19);
    this[4] = 0LL;
  }
  v20 = this[5];
  if ( v20 )
  {
    operator delete(v20);
    this[5] = 0LL;
  }
  operator delete(this);
}
