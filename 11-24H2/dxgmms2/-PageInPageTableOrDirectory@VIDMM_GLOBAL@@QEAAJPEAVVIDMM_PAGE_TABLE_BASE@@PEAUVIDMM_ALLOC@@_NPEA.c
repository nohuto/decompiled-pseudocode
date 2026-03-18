/*
 * XREFs of ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1400B11D8
 * Callers:
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B0FB0 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004C9EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004CC70 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::PageInPageTableOrDirectory(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGE_TABLE_BASE *a2,
        __int64 ***a3,
        char a4,
        bool *a5,
        struct VIDMM_ALLOC **a6)
{
  __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rbx
  bool v14; // zf
  __int64 v16; // [rsp+80h] [rbp+28h]

  v9 = **a3;
  *(_DWORD *)a2 |= 0x40000u;
  *((_BYTE *)v9 + 42) = 0;
  v10 = VIDMM_GLOBAL::PageInOneAllocation(this, a3, a4 == 0 ? 7 : 0, 0LL, a5, a6, 0, -1LL);
  v11 = v10;
  if ( *a5 )
  {
    v12 = -1073741267;
  }
  else
  {
    v12 = v10;
    if ( v10 >= 0 )
    {
      v13 = *v9;
      v16 = (unsigned int)Feature_CommitPagetableInstrumentation__private_featureState;
      if ( (Feature_CommitPagetableInstrumentation__private_featureState & 0x10) == 0 )
      {
        LODWORD(v16) = Feature_CommitPagetableInstrumentation__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor,
          v16,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v16,
          3,
          (__int64)&Feature_CommitPagetableInstrumentation__private_descriptor);
      }
      WdLogSingleEntry2(4LL, a3, v9);
      v14 = *((_QWORD *)a2 + 2) == 0LL;
      WdLogGlobalForLineNumber = 16718;
      if ( v14 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 70LL, this, a2, v11);
        WdLogGlobalForLineNumber = 195;
        JUMPOUT(0x1400B13BCLL);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v13 + 64) + 104LL) & 0x1000) != 0 )
        *(_QWORD *)(v13 + 72) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9[30] + 104LL))(
                                  v9[30],
                                  v9[31]);
      v12 = v11;
      if ( (byte_140081244 & 0x10) != 0 )
      {
        VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v13 + 64));
        McTemplateK0pqx_EtwWriteTransfer();
        v12 = v11;
      }
    }
  }
  *(_DWORD *)a2 &= ~0x40000u;
  return v12;
}
