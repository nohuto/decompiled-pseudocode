/*
 * XREFs of ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E2B68
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF680 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E246C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004D130 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004D3B4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400E2D80 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PAGE_TABLE::CommitPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r12
  char v7; // cl
  __int64 ***v8; // r15
  __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rbp
  char v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h]

  v3 = 0;
  *a3 = 0LL;
  v5 = *((_QWORD *)this + 2);
  if ( !v5 || !*(_QWORD *)(*(_QWORD *)v5 + 64LL) )
  {
    v6 = *((_QWORD *)a2 + 11);
    v7 = *((_DWORD *)a2 + 36) & 4;
    v8 = (__int64 ***)*((_QWORD *)this + 3);
    v15 = 0;
    v9 = **v8;
    *(_DWORD *)this |= 0x40000u;
    *((_BYTE *)v9 + 42) = 0;
    v10 = VIDMM_GLOBAL::PageInOneAllocation(v6, v8, v7 != 0 ? 0 : 7, 0LL, &v15, a3, 0, -1LL);
    v11 = v10;
    if ( v15 )
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
        WdLogSingleEntry2(4LL, v8, v9);
        WdLogGlobalForLineNumber = 16584;
        if ( !*((_QWORD *)this + 2) )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 70LL, v6, this, v11);
          WdLogGlobalForLineNumber = 195;
          JUMPOUT(0x1400E2D70LL);
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v13 + 64) + 104LL) & 0x1000) != 0 )
          *(_QWORD *)(v13 + 72) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9[28] + 104LL))(
                                    v9[28],
                                    v9[29]);
        v12 = v11;
        if ( (byte_140081244 & 0x10) != 0 )
        {
          VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v13 + 64));
          McTemplateK0pqx_EtwWriteTransfer();
          v12 = v11;
        }
      }
    }
    *(_DWORD *)this &= ~0x40000u;
    return v12;
  }
  return v3;
}
