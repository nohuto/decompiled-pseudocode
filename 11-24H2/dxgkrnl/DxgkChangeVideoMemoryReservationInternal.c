/*
 * XREFs of DxgkChangeVideoMemoryReservationInternal @ 0x1401B227C
 * Callers:
 *     DxgkChangeVideoMemoryReservation @ 0x1401B2260 (DxgkChangeVideoMemoryReservation.c)
 *     ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220540 (-VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038420 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO @ 0x14018BCC0 (_BTL_TOPOLOGY_CONSTRUCTOR--_AddSecondaryPathToTopology_--_2_--_AUTO--__AUTO.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x14019BE84 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x140296CF8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x140296D14 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x140298BC0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservationInternal(
        _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a1,
        char a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // rsi
  const void *v6; // rdx
  struct _KTHREAD **Current; // r14
  int PairingAdapters; // edi
  struct DXGPROCESS *Process; // r12
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  struct DXGADAPTER *v13; // rdi
  int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // r8
  ADAPTER_RENDER *v18; // r9
  UINT *p_PhysicalAdapterIndex; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+50h] [rbp-188h] BYREF
  __int64 v23; // [rsp+58h] [rbp-180h]
  char v24; // [rsp+60h] [rbp-178h]
  struct DXGADAPTER *v25; // [rsp+68h] [rbp-170h] BYREF
  DXGADAPTER *v26[2]; // [rsp+70h] [rbp-168h] BYREF
  struct DXGADAPTER *v27; // [rsp+80h] [rbp-158h] BYREF
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v28; // [rsp+88h] [rbp-150h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp-130h] BYREF
  DXGADAPTER *v30[2]; // [rsp+B0h] [rbp-128h] BYREF
  _BYTE v31[80]; // [rsp+C0h] [rbp-118h] BYREF
  _BYTE v32[144]; // [rsp+110h] [rbp-C8h] BYREF

  v3 = (struct DXGADAPTER *)a3;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2120;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2120);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2120);
  memset(&v28, 0, sizeof(v28));
  if ( a2 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v28, v6, 0x18uLL);
  }
  else
  {
    v28 = *a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    PairingAdapters = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 14524;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v22);
    }
    return (unsigned int)PairingAdapters;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v31, v28.hProcess, 0x200u);
  Process = (struct DXGPROCESS *)Current;
  if ( v28.hProcess )
  {
    v10 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v31, 1);
    PairingAdapters = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(3LL, v28.hProcess, v10);
      WdLogGlobalForLineNumber = 14542;
LABEL_34:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v31);
      goto LABEL_35;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v31);
  }
  v25 = v3;
  v26[0] = 0LL;
  if ( !v3 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v30, v28.hAdapter, Current, &v25, 1);
    if ( !v25 )
    {
      PairingAdapters = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, Current, v28.hAdapter);
      WdLogGlobalForLineNumber = 14573;
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v30, v12);
LABEL_33:
      BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(v26);
      goto LABEL_34;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v25 + 3);
    v26[1] = (DXGADAPTER *)-1LL;
    v3 = v25;
    v26[0] = v25;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v30, v11);
  }
  v27 = 0LL;
  v29 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0, &v27, &v29, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v3);
    WdLogGlobalForLineNumber = 14587;
    goto LABEL_33;
  }
  v13 = v27;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v27, 0LL);
  v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL);
  DXGADAPTER::ReleaseReference(v13);
  if ( v14 >= 0 )
  {
    v18 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 391);
    if ( a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
    {
      p_PhysicalAdapterIndex = &a1->PhysicalAdapterIndex;
      if ( (unsigned __int64)&a1->PhysicalAdapterIndex >= MmUserProbeAddress )
        p_PhysicalAdapterIndex = (UINT *)MmUserProbeAddress;
      v28.PhysicalAdapterIndex = *p_PhysicalAdapterIndex;
    }
    PairingAdapters = ADAPTER_RENDER::ChangeVideoMemoryReservation(v18, Process, &v28);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    goto LABEL_33;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
  BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(v26);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v22);
  return (unsigned int)v14;
}
