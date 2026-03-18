/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A37C0
 * Callers:
 *     DxgkCreateDeviceInternal @ 0x1403A377C (DxgkCreateDeviceInternal.c)
 *     DxgkCreateDevice @ 0x1403A37A0 (DxgkCreateDevice.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403B5430 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004AB20 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x14005CC28 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1403240C0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403B1998 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGADAPTER **a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  int v9; // ebx
  const wchar_t *v10; // r9
  struct DXGADAPTER *v11; // r14
  struct _D3DKMT_CREATEDEVICE *v12; // rdx
  struct DXGADAPTER **v13; // r9
  struct DXGADAPTER *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *v18; // r13
  struct DXGADAPTER **v19; // rbx
  struct DXGADAPTER **v20; // rax
  struct DXGADAPTER **v21; // rax
  int PairingAdapters; // eax
  __int64 v23; // r15
  struct DXGADAPTER *v24; // rdx
  char *v25; // r15
  _QWORD *v26; // rbx
  __int64 v27; // r14
  _QWORD *v28; // r13
  struct DXGADAPTER *v29; // rdx
  struct DXGADAPTER *v30; // r8
  struct DXGADAPTER **v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  unsigned int v36; // r12d
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGADAPTER *v43; // rbx
  struct _KEVENT *v44; // rbx
  KSPIN_LOCK *Global; // rax
  unsigned int v46; // eax
  int v47; // edx
  _DWORD *p_hDevice; // rcx
  unsigned __int64 v49; // rdx
  int v50; // [rsp+28h] [rbp-200h]
  int v51; // [rsp+30h] [rbp-1F8h]
  int v52; // [rsp+38h] [rbp-1F0h]
  struct DXGADAPTER *v54; // [rsp+68h] [rbp-1C0h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-1B8h] BYREF
  int v56; // [rsp+78h] [rbp-1B0h] BYREF
  __int64 v57; // [rsp+80h] [rbp-1A8h]
  char v58; // [rsp+88h] [rbp-1A0h]
  struct DXGADAPTER *v59; // [rsp+90h] [rbp-198h] BYREF
  unsigned __int64 v60; // [rsp+98h] [rbp-190h] BYREF
  struct DXGADAPTER *v61; // [rsp+A0h] [rbp-188h]
  struct DXG_SET_GUEST_DATA **Src; // [rsp+A8h] [rbp-180h] BYREF
  struct DXGPROCESS *v63; // [rsp+B0h] [rbp-178h] BYREF
  struct DXGADAPTER *v64; // [rsp+B8h] [rbp-170h] BYREF
  DXGADAPTER *v65[2]; // [rsp+C0h] [rbp-168h] BYREF
  struct DXGADAPTER *v66; // [rsp+D0h] [rbp-158h] BYREF
  unsigned __int64 v67; // [rsp+D8h] [rbp-150h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-148h] BYREF
  struct DXGADAPTER *v69; // [rsp+E8h] [rbp-140h]
  struct DXGK_VIRTUAL_GPU_PARAV *v70; // [rsp+F0h] [rbp-138h]
  struct _D3DKMT_CREATEDEVICE *v71; // [rsp+F8h] [rbp-130h]
  __int64 v72; // [rsp+100h] [rbp-128h]
  __int64 v73; // [rsp+108h] [rbp-120h]
  char *v74; // [rsp+110h] [rbp-118h]
  _QWORD *v75; // [rsp+118h] [rbp-110h]
  unsigned int v76[16]; // [rsp+120h] [rbp-108h] BYREF
  _BYTE v77[144]; // [rsp+160h] [rbp-C8h] BYREF

  Src = a3;
  v70 = (struct DXGK_VIRTUAL_GPU_PARAV *)a2;
  v71 = a1;
  v56 = -1;
  v57 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2009);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v56, 2009);
  Current = DXGPROCESS::GetCurrent(v7);
  v63 = Current;
  if ( !Current )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1986;
    v10 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v56);
    }
    return (unsigned int)v9;
  }
  if ( a2 )
    v11 = a2[2];
  else
    v11 = 0LL;
  v64 = v11;
  memset(v76, 0, sizeof(v76));
  if ( a4 )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v76, v12, 0x40uLL);
  }
  else
  {
    *(_OWORD *)v76 = *(_OWORD *)&a1->hAdapter;
    *(_OWORD *)&v76[4] = *(_OWORD *)&a1->pCommandBuffer;
    *(_OWORD *)&v76[8] = *(_OWORD *)&a1->pAllocationList;
    *(_OWORD *)&v76[12] = *(_OWORD *)&a1->pPatchLocationList;
  }
  if ( (v76[2] & 8) != 0 && !g_OSTestSigningEnabled )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2036;
    v10 = L"TestDevice flag cannot be used, returning 0x%I64x";
    goto LABEL_7;
  }
  v13 = &v64;
  if ( v11 )
    v13 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v65, v76[0], Current, v13, 1);
  v14 = v64;
  if ( !v64 )
  {
    v9 = -1073741811;
    WdLogSingleEntry2(3LL, v76[0], -1073741811LL);
    WdLogGlobalForLineNumber = 2045;
    if ( v65[0] )
      DXGADAPTER::ReleaseReference(v65[0]);
    goto LABEL_24;
  }
  v18 = 0LL;
  while ( 1 )
  {
    v54 = 0LL;
    v59 = 0LL;
    v19 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v59);
    v20 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v54);
    if ( (int)DxgkpGetPairingAdapters(v14, 0, v20, &v55, v19, &v60, 0) < 0 )
      break;
LABEL_32:
    v24 = v54;
    if ( !v54 || !*((_QWORD *)v54 + 391) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2089;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"RenderAdapterRef && RenderAdapterRef->IsRenderAdapter()",
        2089LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v24 = v54;
    }
    if ( v59 && !*((_QWORD *)v59 + 390) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2090;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"!DisplayAdapterRef || DisplayAdapterRef->IsDisplayAdapter()",
        2090LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v24 = v54;
    }
    if ( v18 == v24 )
    {
      v9 = -1073741275;
      WdLogSingleEntry3(1LL, v24, v14, -1073741275LL);
      WdLogGlobalForLineNumber = 2102;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v54,
        (__int64)v14,
        -1073741275LL,
        0LL,
        0LL);
      goto LABEL_100;
    }
    v25 = (char *)Current + 216;
    v74 = v25;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v25, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v26 = v25 + 8;
    v75 = v25 + 8;
    *((_QWORD *)v25 + 1) = KeGetCurrentThread();
    v73 = *((_QWORD *)v54 + 391) + 24LL;
    v27 = v73;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v27, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v28 = (_QWORD *)(v27 + 8);
    v72 = v27 + 8;
    *(_QWORD *)(v27 + 8) = KeGetCurrentThread();
    v29 = v54;
    v30 = v59;
    if ( v54 == v59 )
      goto LABEL_54;
    v66 = 0LL;
    v31 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v66);
    v69 = v64;
    LODWORD(v61) = DxgkpGetPairingAdapters(v64, 0, v31, &v67, 0LL, 0LL, 0);
    if ( (int)v61 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v66, 0LL);
      if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
        *(_QWORD *)(v27 + 8) = 0LL;
      else
        *v28 = 0LL;
      ExReleasePushLockExclusiveEx(v27, 0LL);
      KeLeaveCriticalRegion();
      if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
        *((_QWORD *)v25 + 1) = 0LL;
      else
        *v26 = 0LL;
      ExReleasePushLockExclusiveEx(v25, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v59, 0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v54, 0LL);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v65, v37);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
      if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v56);
      return (unsigned int)v61;
    }
    v61 = v54;
    if ( v66 == v54 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v66, 0LL);
      v29 = v54;
      v30 = v59;
LABEL_54:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v77, v29, v30);
      v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v77, 0LL);
      v36 = v35;
      if ( v35 < 0 )
      {
        if ( v54 != v59 && (*((_DWORD *)v54 + 50) != 1 || *((_BYTE *)v54 + 3017)) )
        {
          WdLogSingleEntry2(3LL, v54, v35);
          WdLogGlobalForLineNumber = 2149;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
        if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
          *(_QWORD *)(v27 + 8) = 0LL;
        else
          *v28 = 0LL;
        ExReleasePushLockExclusiveEx(v27, 0LL);
        KeLeaveCriticalRegion();
        if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
          *((_QWORD *)v25 + 1) = 0LL;
        else
          *v26 = 0LL;
        ExReleasePushLockExclusiveEx(v25, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v59, 0LL);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v54, 0LL);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v65, v40);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
        if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit, v42, v56);
        return v36;
      }
      if ( !*((_BYTE *)v54 + 209) )
      {
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 889) )
        {
          v43 = v54;
          if ( (*DXGADAPTER::GetAdapterType(v54, (int *)&v63) & 0x10) != 0 )
          {
            v44 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 391)
                                                                                              + 736LL)
                                                                                  + 8LL)
                                                                      + 912LL))(*(_QWORD *)(*((_QWORD *)v43 + 391)
                                                                                          + 744LL));
            Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
            DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v44);
            *((_BYTE *)v54 + 206) = 1;
          }
        }
      }
      v68 = 0LL;
      if ( v54 == v59 )
        v46 = (v76[2] >> 1) & 1;
      else
        LOBYTE(v46) = 0;
      LOBYTE(v52) = 0;
      LOBYTE(v51) = (v76[2] & 4) != 0;
      LOBYTE(v50) = v46;
      v9 = ADAPTER_RENDER::CreateDevice(
             *((_QWORD *)v54 + 391),
             &v68,
             v76[2],
             (v76[2] & 1) == 0,
             v59,
             v50,
             v51,
             v52,
             v70,
             Src,
             0);
      if ( v9 >= 0 )
      {
        v47 = *(_DWORD *)(v68 + 468);
        LODWORD(Src) = v47;
        p_hDevice = &v71->hDevice;
        if ( a4 )
        {
          if ( (unsigned __int64)p_hDevice >= MmUserProbeAddress )
            p_hDevice = (_DWORD *)MmUserProbeAddress;
          RtlCopyVolatileMemory(p_hDevice, &Src, 4uLL);
        }
        else
        {
          *p_hDevice = v47;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
      if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
        *(_QWORD *)(v27 + 8) = 0LL;
      else
        *v28 = 0LL;
      ExReleasePushLockExclusiveEx(v27, 0LL);
      KeLeaveCriticalRegion();
      if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
        *((_QWORD *)v25 + 1) = 0LL;
      else
        *v75 = 0LL;
      ExReleasePushLockExclusiveEx(v25, 0LL);
      KeLeaveCriticalRegion();
LABEL_100:
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v59, 0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v54, 0LL);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v65, v49);
      goto LABEL_24;
    }
    WdLogSingleEntry1(3LL, v54);
    WdLogGlobalForLineNumber = 2130;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v66, 0LL);
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
      *(_QWORD *)(v27 + 8) = 0LL;
    else
      *v28 = 0LL;
    ExReleasePushLockExclusiveEx(v27, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
      *((_QWORD *)v25 + 1) = 0LL;
    else
      *v26 = 0LL;
    ExReleasePushLockExclusiveEx(v25, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v59, 0LL);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v54, 0LL);
    v14 = v69;
    v18 = v61;
    Current = v63;
  }
  v21 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v54);
  PairingAdapters = DxgkpGetPairingAdapters(v14, 0, v21, &v55, 0LL, 0LL, 0);
  v23 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    Current = v63;
    goto LABEL_32;
  }
  WdLogSingleEntry2(2LL, v76[0], PairingAdapters);
  WdLogGlobalForLineNumber = 2083;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to get bound render adapter from hAdapter 0x%I64x (ntStatus = 0x%I64x).",
    v76[0],
    v23,
    0LL,
    0LL,
    0LL);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v59, 0LL);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v54, 0LL);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v65, v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v56);
  return (unsigned int)v23;
}
