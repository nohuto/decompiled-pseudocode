/*
 * XREFs of DxgkSetStablePowerState @ 0x1401EF550
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002F5C0 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x14019BDC4 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x14019FB74 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  struct DXGPROCESS *Current; // rdi
  struct DXGADAPTER *v5; // rbx
  unsigned __int64 v6; // rdx
  int PairingAdapters; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // rbx
  struct DXGADAPTER *v14; // rsi
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+50h] [rbp-108h] BYREF
  __int64 v27; // [rsp+58h] [rbp-100h]
  char v28; // [rsp+60h] [rbp-F8h]
  struct DXGADAPTER *v29; // [rsp+68h] [rbp-F0h] BYREF
  unsigned int v30[2]; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGADAPTER *v31; // [rsp+78h] [rbp-E0h] BYREF
  DXGADAPTER *v32[2]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v33; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v34[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = (const void *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2124);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2124);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4223;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid process context", 4223LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v26);
    }
    return 3221225485LL;
  }
  *(_QWORD *)v30 = 0LL;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v30, v3, 8uLL);
  v31 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v32, v30[0], (struct _KTHREAD **)Current, &v31, 1);
  v5 = v31;
  if ( !v31 )
  {
    WdLogSingleEntry2(2LL, Current, v30[0]);
    WdLogGlobalForLineNumber = 4247;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v30[0],
      0LL,
      0LL,
      0LL);
LABEL_21:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v32, v6);
    goto LABEL_22;
  }
  v29 = 0LL;
  v33 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v31, 0, &v29, &v33, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 4258;
    goto LABEL_13;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 216, 0LL);
  *((_QWORD *)Current + 28) = KeGetCurrentThread();
  v12 = v29;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v29, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
  DXGADAPTER::ReleaseReference(v12);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v12);
    WdLogGlobalForLineNumber = 4282;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
LABEL_13:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v32, v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v26);
    return (unsigned int)PairingAdapters;
  }
  v13 = *((_QWORD *)v12 + 391);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v13 + 72, 0LL);
  *(_QWORD *)(v13 + 80) = KeGetCurrentThread();
  v14 = v29;
  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(Current, *((_DWORD *)v29 + 60));
  if ( !RenderAdapterInfo )
  {
    v16 = *((_QWORD *)v14 + 391);
    *(_QWORD *)(v16 + 80) = 0LL;
    ExReleasePushLockExclusiveEx(v16 + 72, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry2(3LL, v14, Current);
    WdLogGlobalForLineNumber = 4298;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_21;
  }
  v19 = *((_QWORD *)v14 + 391);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v19 + 1800, 0LL);
  *(_QWORD *)(v19 + 1808) = KeGetCurrentThread();
  v20 = *((_DWORD *)RenderAdapterInfo + 15);
  if ( v30[1] )
  {
    if ( !v20 )
      ADAPTER_RENDER::AddStablePowerReference(*((ADAPTER_RENDER **)v29 + 391));
    ++*((_DWORD *)RenderAdapterInfo + 15);
  }
  else if ( v20 )
  {
    v21 = v20 - 1;
    *((_DWORD *)RenderAdapterInfo + 15) = v21;
    if ( !v21 )
      ADAPTER_RENDER::ReleaseStablePowerReference(*((ADAPTER_RENDER **)v29 + 391));
  }
  else
  {
    WdLogSingleEntry2(3LL, Current, v29);
    WdLogGlobalForLineNumber = 4330;
  }
  *(_QWORD *)(v19 + 1808) = 0LL;
  ExReleasePushLockExclusiveEx(v19 + 1800, 0LL);
  KeLeaveCriticalRegion();
  v22 = *((_QWORD *)v29 + 391);
  *(_QWORD *)(v22 + 80) = 0LL;
  ExReleasePushLockExclusiveEx(v22 + 72, 0LL);
  KeLeaveCriticalRegion();
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
  *((_QWORD *)Current + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v32, v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v26);
  return 0LL;
}
