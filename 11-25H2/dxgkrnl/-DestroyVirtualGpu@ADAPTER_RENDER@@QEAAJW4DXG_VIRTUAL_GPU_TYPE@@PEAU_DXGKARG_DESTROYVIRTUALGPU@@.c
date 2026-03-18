/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@E@Z @ 0x140206618
 * Callers:
 *     DxgkDdiDestroyVirtualGpu @ 0x140209584 (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002EF80 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403D3C8C (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 *     ?GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z @ 0x1403D3CAC (-GetVirtualGpuByIndex@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, unsigned int a2, unsigned int *a3, char a4)
{
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v9; // rcx
  unsigned int *v10; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // r14
  struct DXGDEVICE *v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 VirtualGpuManager; // rax
  __int64 v22; // rbx
  __int64 VirtualGpuByIndex; // rdx
  unsigned int v24; // r8d
  _BYTE v25[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v29[160]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v30[144]; // [rsp+150h] [rbp+50h] BYREF

  if ( a4 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current || (*((_DWORD *)Current + 102) & 0xC0) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2108;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Only VVMS or VMWP process can destroy vGPU",
        2108LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  v9 = (DXGPROCESS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 167);
  if ( a2 )
    goto LABEL_15;
  v10 = *(unsigned int **)(a1 + 16);
  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v9, v10[60]);
  v12 = (struct DXGDEVICE *)*((_QWORD *)RenderAdapterInfo + 9);
  if ( !v12 )
    goto LABEL_15;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v25,
    v12);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v27,
    (struct DXGADAPTER *)v10,
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, *((_QWORD *)RenderAdapterInfo + 9), 2, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29, 0LL);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = *(_QWORD *)(a1 + 1864);
    if ( !v16 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2139;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Destroying invalid virtual GPU",
        2139LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_18:
      v15 = -1073741811;
      goto LABEL_19;
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, (struct _KTHREAD **)(v16 + 40));
    v17 = *(_QWORD *)(a1 + 1864);
    v18 = *a3;
    if ( *a3 >= *(_DWORD *)(v17 + 12)
      || !*(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL * v18)
      || (_mm_lfence(), (v19 = *(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL * v18)) == 0) )
    {
      WdLogSingleEntry1(3LL, *a3);
      WdLogGlobalForLineNumber = 2146;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
      goto LABEL_18;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 144LL))(v19);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v25);
LABEL_15:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, *(struct DXGADAPTER *const *)(a1 + 16), 0LL);
    v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL);
    v15 = v20;
    if ( v20 >= 0 )
    {
      VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, a2);
      v22 = VirtualGpuManager;
      if ( VirtualGpuManager )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v28,
          (struct _KTHREAD **)(VirtualGpuManager + 40));
        VirtualGpuByIndex = ADAPTER_RENDER::GetVirtualGpuByIndex(a1, a2, *a3);
        if ( VirtualGpuByIndex )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, VirtualGpuByIndex);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
          goto LABEL_26;
        }
        WdLogSingleEntry1(3LL, v24);
        WdLogGlobalForLineNumber = 2173;
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2165;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Destroying invalid virtual GPU",
          2165LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v15 = -1073741811;
    }
    else
    {
      WdLogSingleEntry1(3LL, v20);
      WdLogGlobalForLineNumber = 2158;
    }
LABEL_26:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    return v15;
  }
  WdLogSingleEntry2(3LL, *((_QWORD *)RenderAdapterInfo + 9), v14);
  WdLogGlobalForLineNumber = 2134;
LABEL_19:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v25);
  return v15;
}
