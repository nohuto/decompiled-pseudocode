/*
 * XREFs of DxgkSetStablePowerState @ 0x1401E9AD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002EF80 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1401998D4 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x14019D724 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  struct DXGPROCESS *Current; // rsi
  struct DXGADAPTER *v5; // rbx
  unsigned __int64 v6; // rdx
  int PairingAdapters; // edi
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v12; // rbx
  int v13; // r14d
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  struct DXGADAPTER *v18; // r14
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rbx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r14
  int v24; // eax
  int v25; // eax
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // [rsp+50h] [rbp-108h] BYREF
  __int64 v31; // [rsp+58h] [rbp-100h]
  char v32; // [rsp+60h] [rbp-F8h]
  struct DXGADAPTER *v33; // [rsp+68h] [rbp-F0h] BYREF
  unsigned int v34[2]; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGADAPTER *v35; // [rsp+78h] [rbp-E0h] BYREF
  DXGADAPTER *v36[2]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v38[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = (const void *)a1;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2124);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2124);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4173;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 4173LL, 0LL, 0LL, 0LL, 0LL);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v30);
    }
    return 3221225485LL;
  }
  *(_QWORD *)v34 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v34, v3, 8uLL);
  v35 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v36, v34[0], Current, &v35, 1);
  v5 = v35;
  if ( !v35 )
  {
    WdLogSingleEntry2(2LL, Current, v34[0]);
    WdLogGlobalForLineNumber = 4197;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v34[0],
      0LL,
      0LL,
      0LL);
LABEL_23:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v6);
    goto LABEL_24;
  }
  v33 = 0LL;
  v37 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v35, 0, &v33, &v37, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 216, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)Current + 28) = KeGetCurrentThread();
    v12 = v33;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v33, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38, 0LL);
    DXGADAPTER::ReleaseReference(v12);
    if ( v13 >= 0 )
    {
      v17 = *((_QWORD *)v12 + 391);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v17 + 72, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v17 + 80) = KeGetCurrentThread();
      v18 = v33;
      RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(Current, *((_DWORD *)v33 + 60));
      if ( !RenderAdapterInfo )
      {
        v20 = *((_QWORD *)v18 + 391);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v20 + 80) = 0LL;
        ExReleasePushLockExclusiveEx(v20 + 72, 0LL);
        KeLeaveCriticalRegion();
        WdLogSingleEntry2(3LL, v18, Current);
        WdLogGlobalForLineNumber = 4248;
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)Current + 28) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_23;
      }
      v23 = *((_QWORD *)v18 + 391);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v23 + 1800, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v23 + 1808) = KeGetCurrentThread();
      v24 = *((_DWORD *)RenderAdapterInfo + 15);
      if ( v34[1] )
      {
        if ( !v24 )
          ADAPTER_RENDER::AddStablePowerReference(*((ADAPTER_RENDER **)v33 + 391));
        ++*((_DWORD *)RenderAdapterInfo + 15);
      }
      else if ( v24 )
      {
        v25 = v24 - 1;
        *((_DWORD *)RenderAdapterInfo + 15) = v25;
        if ( !v25 )
          ADAPTER_RENDER::ReleaseStablePowerReference(*((ADAPTER_RENDER **)v33 + 391));
      }
      else
      {
        WdLogSingleEntry2(3LL, Current, v33);
        WdLogGlobalForLineNumber = 4280;
      }
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v23 + 1808) = 0LL;
      ExReleasePushLockExclusiveEx(v23 + 1800, 0LL);
      KeLeaveCriticalRegion();
      v26 = *((_QWORD *)v33 + 391);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v26 + 80) = 0LL;
      ExReleasePushLockExclusiveEx(v26 + 72, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)Current + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v27);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v30);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, v12);
      WdLogGlobalForLineNumber = 4232;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)Current + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v14);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v30);
      return (unsigned int)v13;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 4208;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v30);
    return (unsigned int)PairingAdapters;
  }
}
