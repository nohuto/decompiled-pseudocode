/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x14039AA10
 * Callers:
 *     DxgkCreateDeviceInternal @ 0x14039A9CC (DxgkCreateDeviceInternal.c)
 *     DxgkCreateDevice @ 0x14039A9F0 (DxgkCreateDevice.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403A7F70 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x14005C688 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140306840 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A4C78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGADAPTER **a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r15
  int v9; // ebx
  const wchar_t *v10; // r9
  struct DXGADAPTER *v11; // rbx
  struct _D3DKMT_CREATEDEVICE *v12; // rdx
  struct DXGADAPTER **v13; // r9
  struct DXGADAPTER *v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *i; // r15
  struct DXGADAPTER **v19; // rbx
  struct DXGADAPTER **v20; // rax
  struct DXGADAPTER **v21; // rax
  int PairingAdapters; // eax
  __int64 v23; // r14
  struct DXGADAPTER *v24; // rdx
  struct _KTHREAD **v25; // r15
  __int64 v26; // r14
  struct DXGADAPTER *v27; // rdx
  struct DXGADAPTER *v28; // r8
  struct DXGADAPTER **v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  struct DXGADAPTER *v34; // rbx
  struct _KEVENT *v35; // rbx
  KSPIN_LOCK *Global; // rax
  unsigned int v37; // eax
  int v38; // eax
  _DWORD *p_hDevice; // rcx
  unsigned __int64 v40; // rdx
  int v41; // [rsp+28h] [rbp-1F0h]
  int v42; // [rsp+30h] [rbp-1E8h]
  int v43; // [rsp+38h] [rbp-1E0h]
  struct DXGADAPTER *v45; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-1A8h] BYREF
  int v47; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v48; // [rsp+80h] [rbp-198h]
  char v49; // [rsp+88h] [rbp-190h]
  struct DXGADAPTER *v50; // [rsp+90h] [rbp-188h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp-180h] BYREF
  struct _KTHREAD **v52; // [rsp+A0h] [rbp-178h] BYREF
  struct DXG_SET_GUEST_DATA **Src; // [rsp+A8h] [rbp-170h] BYREF
  struct DXGADAPTER *v54; // [rsp+B0h] [rbp-168h] BYREF
  DXGADAPTER *v55[2]; // [rsp+B8h] [rbp-160h] BYREF
  struct DXGADAPTER *v56; // [rsp+C8h] [rbp-150h] BYREF
  unsigned __int64 v57; // [rsp+D0h] [rbp-148h] BYREF
  int v58; // [rsp+D8h] [rbp-140h] BYREF
  struct DXGADAPTER *v59; // [rsp+E0h] [rbp-138h]
  struct DXGK_VIRTUAL_GPU_PARAV *v60; // [rsp+E8h] [rbp-130h]
  struct _D3DKMT_CREATEDEVICE *v61; // [rsp+F0h] [rbp-128h]
  struct _KTHREAD **v62; // [rsp+F8h] [rbp-120h]
  __int64 v63; // [rsp+100h] [rbp-118h]
  unsigned int v64[16]; // [rsp+110h] [rbp-108h] BYREF
  _BYTE v65[144]; // [rsp+150h] [rbp-C8h] BYREF

  Src = a3;
  v60 = (struct DXGK_VIRTUAL_GPU_PARAV *)a2;
  v61 = a1;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2009);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v47, 2009);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7);
  v52 = Current;
  if ( !Current )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2038;
    v10 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    if ( v49 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v47);
    }
    return (unsigned int)v9;
  }
  if ( a2 )
    v11 = a2[2];
  else
    v11 = 0LL;
  v54 = v11;
  memset(v64, 0, sizeof(v64));
  if ( a4 )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v64, v12, 0x40uLL);
  }
  else
  {
    *(_OWORD *)v64 = *(_OWORD *)&a1->hAdapter;
    *(_OWORD *)&v64[4] = *(_OWORD *)&a1->pCommandBuffer;
    *(_OWORD *)&v64[8] = *(_OWORD *)&a1->pAllocationList;
    *(_OWORD *)&v64[12] = *(_OWORD *)&a1->pPatchLocationList;
  }
  if ( (v64[2] & 8) != 0 && !g_OSTestSigningEnabled )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2088;
    v10 = L"TestDevice flag cannot be used, returning 0x%I64x";
    goto LABEL_7;
  }
  v13 = &v54;
  if ( v11 )
    v13 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v55, v64[0], Current, v13, 1);
  v14 = v54;
  if ( !v54 )
  {
    v9 = -1073741811;
    WdLogSingleEntry2(3LL, v64[0], -1073741811LL);
    WdLogGlobalForLineNumber = 2097;
    if ( v55[0] )
      DXGADAPTER::ReleaseReference(v55[0]);
    goto LABEL_24;
  }
  for ( i = 0LL; ; i = v59 )
  {
    v45 = 0LL;
    v50 = 0LL;
    v19 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v50);
    v20 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v45);
    if ( (int)DxgkpGetPairingAdapters(v14, 0, v20, &v46, v19, &v51, 0) < 0 )
    {
      v21 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v45);
      PairingAdapters = DxgkpGetPairingAdapters(v14, 0, v21, &v46, 0LL, 0LL, 0);
      v23 = PairingAdapters;
      if ( PairingAdapters < 0 )
        break;
    }
    v24 = v45;
    if ( !v45 || !*((_QWORD *)v45 + 391) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2141;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"RenderAdapterRef && RenderAdapterRef->IsRenderAdapter()",
        2141LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v24 = v45;
    }
    if ( v50 && !*((_QWORD *)v50 + 390) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2142;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"!DisplayAdapterRef || DisplayAdapterRef->IsDisplayAdapter()",
        2142LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v24 = v45;
    }
    if ( i == v24 )
    {
      v9 = -1073741275;
      WdLogSingleEntry3(1LL, v24, v14, -1073741275LL);
      WdLogGlobalForLineNumber = 2154;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v45,
        (__int64)v14,
        -1073741275LL,
        0LL,
        0LL);
      goto LABEL_69;
    }
    v25 = v52 + 27;
    v62 = v52 + 27;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v25, 0LL);
    v25[1] = KeGetCurrentThread();
    v63 = *((_QWORD *)v45 + 391) + 24LL;
    v26 = v63;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v26, 0LL);
    *(_QWORD *)(v26 + 8) = KeGetCurrentThread();
    v27 = v45;
    v28 = v50;
    if ( v45 == v50 )
      goto LABEL_47;
    v56 = 0LL;
    v29 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v56);
    v14 = v54;
    v9 = DxgkpGetPairingAdapters(v54, 0, v29, &v57, 0LL, 0LL, 0);
    if ( v9 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v56, 0LL);
      goto LABEL_54;
    }
    v59 = v45;
    if ( v56 == v45 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v56, 0LL);
      v27 = v45;
      v28 = v50;
LABEL_47:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, v27, v28);
      v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65, 0LL);
      v9 = v33;
      if ( v33 >= 0 )
      {
        if ( !*((_BYTE *)v45 + 209) )
        {
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 921) )
          {
            v34 = v45;
            if ( (*DXGADAPTER::GetAdapterType(v45, &v58) & 0x10) != 0 )
            {
              v35 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 391)
                                                                                                + 736LL)
                                                                                    + 8LL)
                                                                        + 912LL))(*(_QWORD *)(*((_QWORD *)v34 + 391)
                                                                                            + 744LL));
              Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v35);
              *((_BYTE *)v45 + 206) = 1;
            }
          }
        }
        v52 = 0LL;
        if ( v45 == v50 )
          v37 = (v64[2] >> 1) & 1;
        else
          LOBYTE(v37) = 0;
        LOBYTE(v43) = 0;
        LOBYTE(v42) = (v64[2] & 4) != 0;
        LOBYTE(v41) = v37;
        v9 = ADAPTER_RENDER::CreateDevice(
               *((_QWORD *)v45 + 391),
               &v52,
               v64[2],
               (v64[2] & 1) == 0,
               v50,
               v41,
               v42,
               v43,
               v60,
               Src,
               0);
        if ( v9 >= 0 )
        {
          v38 = *((_DWORD *)v52 + 117);
          LODWORD(Src) = v38;
          p_hDevice = &v61->hDevice;
          if ( a4 )
          {
            if ( (unsigned __int64)p_hDevice >= MmUserProbeAddress )
              p_hDevice = (_DWORD *)MmUserProbeAddress;
            RtlCopyVolatileMemory(p_hDevice, &Src, 4uLL);
          }
          else
          {
            *p_hDevice = v38;
          }
        }
      }
      else if ( v45 != v50 && (*((_DWORD *)v45 + 50) != 1 || *((_BYTE *)v45 + 3017)) )
      {
        WdLogSingleEntry2(3LL, v45, v33);
        WdLogGlobalForLineNumber = 2201;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
LABEL_54:
      *(_QWORD *)(v26 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v26, 0LL);
      KeLeaveCriticalRegion();
      v25[1] = 0LL;
      ExReleasePushLockExclusiveEx(v25, 0LL);
      KeLeaveCriticalRegion();
LABEL_69:
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v50, 0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v45, 0LL);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v55, v40);
      goto LABEL_24;
    }
    WdLogSingleEntry1(3LL, v45);
    WdLogGlobalForLineNumber = 2182;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v56, 0LL);
    *(_QWORD *)(v26 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v26, 0LL);
    KeLeaveCriticalRegion();
    v25[1] = 0LL;
    ExReleasePushLockExclusiveEx(v25, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v50, 0LL);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v45, 0LL);
  }
  WdLogSingleEntry2(2LL, v64[0], PairingAdapters);
  WdLogGlobalForLineNumber = 2135;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to get bound render adapter from hAdapter 0x%I64x (ntStatus = 0x%I64x).",
    v64[0],
    v23,
    0LL,
    0LL,
    0LL);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v50, 0LL);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v45, 0LL);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v55, v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v47);
  return (unsigned int)v23;
}
