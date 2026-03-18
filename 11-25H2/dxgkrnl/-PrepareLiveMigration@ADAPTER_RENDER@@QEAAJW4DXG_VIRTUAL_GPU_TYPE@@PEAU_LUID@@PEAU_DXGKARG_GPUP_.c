/*
 * XREFs of ?PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU_GPUP_MIGRATION_BUFFER@@PEAI@Z @ 0x140207C98
 * Callers:
 *     DxgkDdiPrepareLiveMigration @ 0x140209E54 (DxgkDdiPrepareLiveMigration.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x140183EA0 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403D3C8C (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::PrepareLiveMigration(
        __int64 a1,
        int a2,
        struct _LUID *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdi
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // rdi
  __int64 VirtualGpuManager; // rax
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rdx
  __int64 HighPart; // [rsp+20h] [rbp-D8h]
  __int64 v19; // [rsp+20h] [rbp-D8h]
  __int64 LowPart; // [rsp+28h] [rbp-D0h]
  __int64 v21; // [rsp+28h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C0h]
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v24[24]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v25[64]; // [rsp+70h] [rbp-88h] BYREF

  v7 = *(_QWORD *)(a1 + 16);
  if ( a2 )
  {
    v10 = a2;
    WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, a2, v7);
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    WdLogGlobalForLineNumber = 2369;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PrepareLiveMigration called for non GPUP vGPU. Luid: %d %d vGPU Type: %d Adapter: %d",
      HighPart,
      LowPart,
      v10,
      v7,
      0LL);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    goto LABEL_9;
  if ( a4[1] != 1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2394;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PrepareLiveMigration called on source side without an existing DXGPROCESS, returning STATUS_INVALID_PARAMETER",
      2394LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v12 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL, 1u, 0LL);
  v13 = v12;
  if ( v12 >= 0 )
  {
LABEL_9:
    COREACCESS::COREACCESS((COREACCESS *)v25, *(struct DXGADAPTER *const *)(a1 + 16));
    COREACCESS::AcquireShared((COREACCESS *)v25, 0LL);
    VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, 0LL);
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
      (DXGAUTOPUSHLOCKSHARED *)v24,
      (struct _KTHREAD **)(VirtualGpuManager + 40));
    VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1, 0, a3);
    if ( VirtualGpuByLuid )
    {
      *a4 = *((_DWORD *)VirtualGpuByLuid + 6);
      v16 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _DWORD *, __int64, __int64))(*(_QWORD *)VirtualGpuByLuid
                                                                                             + 184LL))(
              VirtualGpuByLuid,
              a4,
              a5,
              a6);
    }
    else
    {
      WdLogSingleEntry4(2LL, a3->HighPart, a3->LowPart, 0LL, *(_QWORD *)(a1 + 16));
      v22 = *(_QWORD *)(a1 + 16);
      v21 = a3->LowPart;
      v19 = a3->HighPart;
      WdLogGlobalForLineNumber = 2409;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid virtual GPU LUID: %d %d vGPU Type: %d Adapter: %d",
        v19,
        v21,
        0LL,
        v22,
        0LL);
      v16 = -1073741811;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    COREACCESS::~COREACCESS((COREACCESS *)v25, v17);
    return v16;
  }
  else
  {
    WdLogSingleEntry1(6LL, v12);
    WdLogGlobalForLineNumber = 2388;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to create DXGPROCESS for VMWP process: 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v13;
  }
}
