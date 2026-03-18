/*
 * XREFs of ?SaveMutableMigrationData@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_SAVE_MUTABLE_MIGRATION_DATA@@@Z @ 0x140208AF8
 * Callers:
 *     DxgkDdiSaveMutableMigrationData @ 0x14020A84C (DxgkDdiSaveMutableMigrationData.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140183EA0 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403D3C8C (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SaveMutableMigrationData(__int64 a1, int a2, struct _LUID *a3, _DWORD *a4)
{
  __int64 v7; // rbx
  __int64 VirtualGpuManager; // rax
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  unsigned int v11; // ebx
  __int64 HighPart; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 LowPart; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  _BYTE v18[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( a2 )
  {
    v7 = a2;
    WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, a2, *(_QWORD *)(a1 + 16));
    v16 = *(_QWORD *)(a1 + 16);
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    WdLogGlobalForLineNumber = 2493;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"SaveMutableMigrationData called for non GPUP vGPU. Luid: %d %d vGPU Type: %d Adapter: %d",
      HighPart,
      LowPart,
      v7,
      v16,
      0LL);
    return 3221225485LL;
  }
  else
  {
    VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, 0LL);
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
      (DXGAUTOPUSHLOCKSHARED *)v18,
      (struct _KTHREAD **)(VirtualGpuManager + 40));
    VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1, 0, a3);
    if ( VirtualGpuByLuid )
    {
      *a4 = *((_DWORD *)VirtualGpuByLuid + 6);
      v11 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _DWORD *))(*(_QWORD *)VirtualGpuByLuid + 208LL))(
              VirtualGpuByLuid,
              a4);
    }
    else
    {
      WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, 0LL, *(_QWORD *)(a1 + 16));
      v17 = *(_QWORD *)(a1 + 16);
      v15 = a3->LowPart;
      v13 = a3->HighPart;
      WdLogGlobalForLineNumber = 2505;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid virtual GPU LUID: %d %d vGPU Type: %d Adapter: %d",
        v13,
        v15,
        0LL,
        v17,
        0LL);
      v11 = -1073741811;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    return v11;
  }
}
