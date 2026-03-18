/*
 * XREFs of ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x140208468
 * Callers:
 *     DxgkDdiResetVirtualFunction @ 0x14020A50C (DxgkDdiResetVirtualFunction.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z @ 0x1402180DC (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403D3C8C (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 *     ?GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z @ 0x1403D3CAC (-GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResetVirtualFunction(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebx
  __int64 VirtualGpuManager; // rax
  __int64 VirtualGpuByIndex; // rax
  unsigned int v8; // r8d
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned int v15; // ebx
  unsigned __int64 v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-89h]
  __int64 v18; // [rsp+20h] [rbp-89h]
  DXGPROCESS *v19; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-51h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v22[64]; // [rsp+A0h] [rbp-9h] BYREF

  v19 = 0LL;
  v4 = a2;
  VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, a2);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct _KTHREAD **)(VirtualGpuManager + 40));
  VirtualGpuByIndex = ADAPTER_RENDER::GetVirtualGpuByIndex(a1, v4, *a3);
  if ( !VirtualGpuByIndex )
  {
    WdLogSingleEntry1(2LL, v8);
    v17 = *a3;
    WdLogGlobalForLineNumber = 1672;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid virtual GPU index: %I64n", v17, 0LL, 0LL, 0LL, 0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    return 3221225485LL;
  }
  if ( v4 == 1 )
    DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXG_VMBUS_CHANNEL_BASE *)(VirtualGpuByIndex + 176), 1);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  COREACCESS::COREACCESS((COREACCESS *)v22, *(struct DXGADAPTER *const *)(a1 + 16));
  COREACCESS::AcquireShared((COREACCESS *)v22, 0LL);
  v10 = ADAPTER_RENDER::GetVirtualGpuManager(a1, v4);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)&ApcState, (struct _KTHREAD **)(v10 + 40));
  v11 = ADAPTER_RENDER::GetVirtualGpuByIndex(a1, v4, *a3);
  v13 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry1(2LL, v12);
    v18 = *a3;
    WdLogGlobalForLineNumber = 1697;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid virtual GPU index: %I64n", v18, 0LL, 0LL, 0LL, 0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&ApcState);
    COREACCESS::~COREACCESS((COREACCESS *)v22, v14);
    return 3221225485LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v20, (struct _KTHREAD **)(v11 + 56));
  v15 = (*(__int64 (__fastcall **)(__int64, DXGPROCESS **, _QWORD))(*(_QWORD *)v13 + 16LL))(v13, &v19, 0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&ApcState);
  COREACCESS::~COREACCESS((COREACCESS *)v22, v16);
  if ( v19 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*((PRKPROCESS *)v19 + 7), &ApcState);
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)v19 + 104));
    DXGPROCESS::Destroy(v19, 0LL, 1u);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v19 + 13);
    KeUnstackDetachProcess(&ApcState);
  }
  return v15;
}
