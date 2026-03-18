/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018E474
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x14018D5DC (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SendAdapterWnf@DXGADAPTER@@SAJPEBU_WNF_STATE_NAME@@PEAI@Z @ 0x140066230 (-SendAdapterWnf@DXGADAPTER@@SAJPEBU_WNF_STATE_NAME@@PEAI@Z.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x140066500 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?VmBusSendAdapterStop@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x14018CF7C (-VmBusSendAdapterStop@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x14018E2B0 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x14018E90C (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x140198680 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019CD40 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1401D67D4 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D6C58 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D6D5C (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAXK@Z @ 0x1401FB3CC (-ReleaseSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x140207308 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x14021C1B0 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendCloseAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXI@Z @ 0x140227EF8 (-VmBusSendCloseAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXI@Z.c)
 *     DpiFreeAdapterInfo @ 0x140235C58 (DpiFreeAdapterInfo.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1402FACA0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DpiReportAdapter @ 0x1403A45AC (DpiReportAdapter.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this, struct _LUID *a2)
{
  int v2; // eax
  int v3; // esi
  DXGADAPTER *v4; // rdi
  DXGGLOBAL *Global; // rax
  ADAPTER_DISPLAY *v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  void (__fastcall *v8)(_QWORD); // rax
  void (__fastcall *v9)(_QWORD); // rax
  bool IsAdapterSessionized; // al
  const struct _WNF_STATE_NAME *v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // edx
  struct _LUID *v15; // rdx
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rcx
  DXGGLOBAL *v21; // rax
  int v22; // [rsp+C0h] [rbp-68h]
  int v23; // [rsp+D8h] [rbp-50h]
  _BYTE v24[16]; // [rsp+100h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+130h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+138h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 111);
  v3 = *((_DWORD *)this + 464);
  v4 = this;
  *((_BYTE *)this + 208) = 1;
  if ( (v2 & 0x10) != 0 && !*((_QWORD *)this + 390) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v24);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal() + 123) == v4 )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::SetWarpAdapter(Global, 0LL);
      DXGADAPTER::ReleaseReference(v4);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
    this = v4;
  }
  v6 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 390);
  if ( v6 )
    ADAPTER_DISPLAY::Destroy(v6);
  v7 = (ADAPTER_RENDER *)*((_QWORD *)v4 + 391);
  if ( v7 )
    ADAPTER_RENDER::Destroy(v7);
  v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)v4 + 265);
  if ( v8 )
  {
    v8(*((_QWORD *)v4 + 263));
    memset((char *)v4 + 2096, 0, 0xB8uLL);
  }
  v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)v4 + 289);
  if ( v9 )
  {
    v9(*((_QWORD *)v4 + 287));
    memset((char *)v4 + 2288, 0, 0x70uLL);
  }
  if ( *((_BYTE *)v4 + 4808) )
  {
    v25 = 0;
    IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v4, a2, &v25, 0LL);
    v11 = (const struct _WNF_STATE_NAME *)&WNF_DX_REMOTE_ADAPTER_STOP;
    if ( !IsAdapterSessionized )
      v11 = &WNF_DX_CONSOLE_ADAPTER_STOP;
    v12 = DXGADAPTER::SendAdapterWnf(v11, (unsigned int *)((unsigned __int64)&v25 & -(__int64)IsAdapterSessionized));
    if ( v12 < 0 )
    {
      v13 = v12;
      WdLogSingleEntry2(2LL, v4, v12);
      WdLogGlobalForLineNumber = 8596;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to send Stop WNF for Adapter=0x%I64x with Status=0x%I64x",
        (__int64)v4,
        v13,
        0LL,
        0LL,
        0LL);
    }
    *((_BYTE *)v4 + 4808) = 0;
  }
  DpiFreeAdapterInfo((char *)v4 + 1744);
  DXGADAPTER::DestroyPhysicalAdapterData(v4);
  memset((char *)v4 + 288, 0, 0x5B0uLL);
  memset((char *)v4 + 1744, 0, 0x160uLL);
  if ( *((_BYTE *)v4 + 209) )
  {
    v14 = *((_DWORD *)v4 + 1188);
    if ( v14 )
    {
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCloseAdapter((DXGADAPTER *)((char *)v4 + 4664), v14);
      *((_DWORD *)v4 + 1188) = 0;
    }
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendAdapterStop((DXGADAPTER *)((char *)v4 + 4664));
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGADAPTER *)((char *)v4 + 4664));
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) >= 0x16u )
      DXGADAPTER::DeleteRegistryKeys(v4);
  }
  v15 = (struct _LUID *)*((unsigned int *)v4 + 60);
  if ( (_DWORD)v15 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)v4 + 2), (unsigned int)v15);
    *((_DWORD *)v4 + 60) = -1;
  }
  if ( *((_DWORD *)v4 + 61) != -1 )
  {
    v26 = 0;
    DXGADAPTER::IsAdapterSessionized(v4, v15, &v26, 0LL);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *(DXGSESSIONMGR **)(*((_QWORD *)v4 + 2) + 976LL),
                                       v26);
    if ( SessionDataForSpecifiedSession )
    {
      DXGSESSIONDATA::ReleaseSessionAdapterOrdinal(SessionDataForSpecifiedSession, *((_DWORD *)v4 + 61));
      *((_DWORD *)v4 + 61) = -1;
    }
  }
  v17 = *((_QWORD *)v4 + 27);
  if ( v17 )
  {
    DpiReportAdapter(v17, v4);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      v18 = *((_DWORD *)v4 + 613);
      v19 = v18 >> 17;
      LOBYTE(v19) = v19 & 7;
      v20 = v18 >> 10;
      LOBYTE(v20) = v20 & 0xF;
      McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
        v20,
        &EventDestroyAdapter,
        v19,
        *((_QWORD *)v4 + 27),
        (char)v4,
        v3,
        *((_QWORD *)v4 + 300),
        *((_DWORD *)v4 + 602),
        *((_QWORD *)v4 + 302),
        *((_DWORD *)v4 + 606),
        *((_DWORD *)v4 + 607),
        *((_DWORD *)v4 + 609),
        *((_DWORD *)v4 + 610),
        *((_DWORD *)v4 + 611),
        *((_DWORD *)v4 + 614),
        *((_DWORD *)v4 + 608),
        *((_DWORD *)v4 + 612),
        v18,
        v20,
        (v18 >> 14) & 7,
        v19,
        (v18 & 0x80000000) != 0,
        *((_DWORD *)v4 + 615),
        *((_DWORD *)v4 + 616),
        v22,
        *((_DWORD *)v4 + 618),
        *((_DWORD *)v4 + 619),
        v23,
        0,
        0,
        0,
        0);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)v4 + 72));
    *((_DWORD *)v4 + 40) = 0;
    *((_QWORD *)v4 + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v4 + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)v4 + 209) )
  {
    v21 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::SetVirtualRenderAdapter(v21, 0LL);
    if ( *((_BYTE *)v4 + 211) )
      DXGVAILOBJECT::NotifyVailAdapter(0);
  }
}
