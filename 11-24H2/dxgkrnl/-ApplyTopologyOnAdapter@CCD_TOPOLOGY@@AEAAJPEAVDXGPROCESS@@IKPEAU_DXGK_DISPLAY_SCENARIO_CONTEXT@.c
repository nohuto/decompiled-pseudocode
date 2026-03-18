/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403461E0
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403478E4 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F4A0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x14004CDC0 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004D56C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x14005915C (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?SetCurrentVirtualMode@ADAPTER_DISPLAY@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x140059798 (-SetCurrentVirtualMode@ADAPTER_DISPLAY@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x14005BC18 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     _DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140064720 (_DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x14018B338 (-MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1401FCD88 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     _lambda_fe0a1c8bb5d899668299a10802864297_::operator() @ 0x140267B2C (_lambda_fe0a1c8bb5d899668299a10802864297_--operator().c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x140268188 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14028E9B4 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x14030B714 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     DxgkQueryDmmInterface @ 0x140344CD8 (DxgkQueryDmmInterface.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140346DD8 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x140347590 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x140363498 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C4BC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037E164 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403809D8 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403826AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403EAFE4 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1403EDFFC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1403F28C8 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  unsigned int v5; // r12d
  __int64 v7; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // r8
  _DWORD *v11; // rbx
  const struct _LUID *v12; // r8
  ADAPTER_DISPLAY **v13; // r15
  unsigned int v14; // r8d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  struct DXGADAPTER *v19; // r14
  int v20; // eax
  ADAPTER_DISPLAY *v21; // rcx
  unsigned int v22; // edi
  int v23; // r14d
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r8
  unsigned __int64 v28; // xmm1_8
  __int64 v29; // r12
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // r15
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  int v39; // eax
  int v40; // edx
  int v41; // ecx
  ADAPTER_DISPLAY **v42; // r9
  ADAPTER_DISPLAY *v43; // r8
  unsigned int v44; // r12d
  int v45; // r15d
  __int64 v46; // rax
  __int64 v47; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v49; // rcx
  __int128 v50; // xmm0
  int v51; // r9d
  __int128 v52; // xmm1
  __int64 v53; // xmm2_8
  int v54; // eax
  ADAPTER_DISPLAY **v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  struct DXGGLOBAL *Global; // rax
  int v61; // r8d
  ADAPTER_DISPLAY **v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // edx
  bool v65; // sf
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  unsigned int v69; // ebx
  DXGADAPTER *v70; // rcx
  unsigned int v72; // [rsp+40h] [rbp-C0h] BYREF
  char v73; // [rsp+48h] [rbp-B8h]
  int v74; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE v75[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v76; // [rsp+54h] [rbp-ACh] BYREF
  struct DXGDEVICE *v77; // [rsp+58h] [rbp-A8h]
  __int64 v78; // [rsp+60h] [rbp-A0h]
  __int64 v79; // [rsp+68h] [rbp-98h] BYREF
  char v80; // [rsp+70h] [rbp-90h]
  struct DXGADAPTER *v81[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v82; // [rsp+88h] [rbp-78h]
  _BYTE v83[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v84[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-50h]
  void (__fastcall *v86)(__int64, __int64); // [rsp+B8h] [rbp-48h]
  __int64 v87; // [rsp+C0h] [rbp-40h]
  int v88; // [rsp+C8h] [rbp-38h]
  const struct _DXGDMM_INTERFACE *v89; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v90; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v91; // [rsp+E0h] [rbp-20h]
  __int128 v92; // [rsp+E8h] [rbp-18h]
  __int128 v93; // [rsp+F8h] [rbp-8h]
  __int64 v94; // [rsp+108h] [rbp+8h]
  int v95; // [rsp+110h] [rbp+10h]
  __int128 v96; // [rsp+120h] [rbp+20h] BYREF
  CCD_TOPOLOGY *v97; // [rsp+130h] [rbp+30h]
  unsigned int *v98; // [rsp+138h] [rbp+38h]
  _BYTE v99[32]; // [rsp+140h] [rbp+40h] BYREF
  char v100; // [rsp+160h] [rbp+60h]
  _BYTE v101[8]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v102[64]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v103[88]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v104[144]; // [rsp+210h] [rbp+110h] BYREF

  v91 = a5;
  v5 = a3;
  v76 = a3;
  v7 = *((_QWORD *)this + 8);
  v72 = a4;
  v9 = 0LL;
  v74 = 0;
  v75[0] = 0;
  v10 = *(_QWORD *)(v7 + 48) + 340LL * a4;
  *(_QWORD *)&v96 = &v74;
  v97 = this;
  v77 = 0LL;
  v11 = (_DWORD *)(v10 + 80);
  v81[0] = 0LL;
  *((_QWORD *)&v96 + 1) = v10 + 80;
  v98 = &v72;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v99, &v96);
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v81, v12);
  v13 = (ADAPTER_DISPLAY **)v81[0];
  if ( !v81[0] )
  {
    v74 = -1073741811;
    WdLogSingleEntry4(
      2LL,
      0LL,
      *(int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      -1073741811LL);
    v69 = v74;
    WdLogGlobalForLineNumber = 2308;
    DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v99);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v81, 0LL);
    return v69;
  }
  v73 = *(_BYTE *)(*((_QWORD *)v81[0] + 390) + 288LL);
  if ( v73 )
  {
    *(_BYTE *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 76) = 1;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v104, (struct DXGADAPTER *const)v13, 0LL);
    v74 = COREADAPTERACCESS::AcquireExclusive((__int64)v104, 1u, v14);
    if ( v74 >= 0 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(v13[390]) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v13[390], 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
  }
  while ( 1 )
  {
    if ( v9 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v72),
        (struct DXGDEVICE *)v9);
      if ( _InterlockedExchangeAdd64(v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v77 + 2), v77);
      v77 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v72),
                                             v73);
    v74 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
        *(unsigned int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
        CddDeviceAndContextForCurrentSession);
      v69 = v74;
      WdLogGlobalForLineNumber = 2373;
      if ( v100 )
        lambda_fe0a1c8bb5d899668299a10802864297_::operator()((__int64)v99);
      v70 = v81[0];
      goto LABEL_88;
    }
    v9 = (volatile signed __int64 *)v77;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v79, v77);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v83, (struct DXGPROCESS *)((char *)a2 + 360), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v83);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v101, (__int64)v9, 1, v16, 0);
    v74 = COREDEVICEACCESS::AcquireExclusive((__int64)v101, 2u);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v9) )
      break;
    COREACCESS::~COREACCESS((COREACCESS *)v103, v17);
    COREACCESS::~COREACCESS((COREACCESS *)v102, v18);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v83);
    if ( v80 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v79 + 136));
      KeLeaveCriticalRegion();
      v80 = 0;
    }
  }
  if ( v74 < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      *(int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      *((_QWORD *)this + 8),
      v74);
    WdLogGlobalForLineNumber = 2421;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v83);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v79);
    v19 = v81[0];
    goto LABEL_81;
  }
  v19 = v81[0];
  v89 = 0LL;
  v20 = DxgkQueryDmmInterface(v81[0], v17, &v89);
  v74 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry3(
      2LL,
      *(int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      v20);
    WdLogGlobalForLineNumber = 2437;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v101);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v83);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v79);
    goto LABEL_81;
  }
  v21 = v13[390];
  v22 = 0;
  v23 = 1;
  if ( *((_DWORD *)v21 + 24) )
  {
    do
    {
      if ( (v23 & *v11) != 0 )
      {
        v24 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v21, v22);
        v74 = v24;
        if ( v24 < 0 )
        {
          WdLogSingleEntry4(
            2LL,
            v22,
            *(int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
            *(unsigned int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
            v24);
          WdLogGlobalForLineNumber = 2461;
        }
        ADAPTER_DISPLAY::SetCurrentVirtualMode(v13[390], v22, 0LL);
        ADAPTER_DISPLAY::ProcessModeChange(v13[390], v22);
      }
      if ( (v23 & v11[1]) != 0 )
      {
        v25 = *((_QWORD *)this + 8);
        v26 = 4024LL * v22;
        v27 = *((_QWORD *)v13[390] + 16);
        v82 = *(_OWORD *)(v26 + v27 + 688);
        v28 = v82;
        v29 = 296LL * *(unsigned int *)(*(_QWORD *)(v25 + 48) + 4 * (v22 + 85LL * v72) + 8);
        *(_OWORD *)(v26 + v27 + 688) = *(_OWORD *)(v25 + v29 + 224);
        if ( __PAIR128__(*((unsigned __int64 *)&v82 + 1), v28) != *(_OWORD *)(v29 + *((_QWORD *)this + 8) + 224) )
          v11[11] |= v23;
        *(_DWORD *)(v29 + *((_QWORD *)this + 8) + 244) = ADAPTER_DISPLAY::GetDisplayId(v13[390], v22);
      }
      v21 = v13[390];
      ++v22;
      v23 *= 2;
    }
    while ( v22 < *((_DWORD *)v21 + 24) );
    v5 = v76;
  }
  v30 = *((unsigned int *)this + 20);
  v31 = *((unsigned int *)this + 19);
  v19 = v81[0];
  LOBYTE(v31) = v31 & 1;
  v32 = *((_QWORD *)this + 8);
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0;
  v84[0] = 0;
  v90 = 0LL;
  PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                               v32,
                                               v81[0],
                                               v31,
                                               v30,
                                               v5,
                                               &v90);
  v74 = PathModalityForAdapterWithCoreAccessHeld;
  if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      *((_QWORD *)this + 8),
      *(int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      PathModalityForAdapterWithCoreAccessHeld);
    WdLogGlobalForLineNumber = 2549;
    COREACCESS::~COREACCESS((COREACCESS *)v103, v34);
    COREACCESS::~COREACCESS((COREACCESS *)v102, v35);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v83);
    if ( v80 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v79 + 136));
      KeLeaveCriticalRegion();
    }
    v9 = (volatile signed __int64 *)v77;
    goto LABEL_81;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v84,
    v90,
    *((_QWORD *)v89 + 8),
    (__int64)v19);
  v9 = (volatile signed __int64 *)v77;
  v36 = v85;
  v74 = DmmSetTimingsOnAdapter(v19, v85, v5, 1LL, v11, v75, v77, v101);
  DisplayScenarioJournalSetCommitVidPnStatus(
    340LL * v72 + 8 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL),
    *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v72 + 168);
  if ( v74 >= 0 )
  {
    if ( v84[0] )
      v86(v87, v36);
    v39 = v11[3];
    v84[0] = 0;
    v85 = 0LL;
    v86 = 0LL;
    v87 = 0LL;
    v88 = -1073741212;
    if ( (v39 & v11[2]) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2593;
    }
    v40 = v11[2];
    if ( (v40 | v11[10]) != v40 || (v40 & v11[10]) != v11[10] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2599;
    }
    if ( v11[2] != (v11[2] & (v11[1] | *v11)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2607;
    }
    v41 = v11[3];
    if ( v41 != (v41 & *v11) || (v41 & v11[1]) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2614;
    }
    WdLogSingleEntry5(
      7LL,
      *(int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      (unsigned int)v11[2],
      (unsigned int)v11[10],
      (unsigned int)v11[3]);
    v42 = (ADAPTER_DISPLAY **)((char *)v19 + 3120);
    WdLogGlobalForLineNumber = 2621;
    v43 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 390);
    v44 = 0;
    *(_QWORD *)&v82 = (char *)v19 + 3120;
    if ( !*((_DWORD *)v43 + 24) )
    {
LABEL_76:
      if ( v73 )
        *(_BYTE *)(*((_QWORD *)v19 + 390) + 288LL) = 0;
      DmmHandleSetTimingsResult(v19, (struct _DMM_SET_TIMING_RESULT *)v75, v91);
      v74 = 0;
      COREACCESS::~COREACCESS((COREACCESS *)v103, v67);
      COREACCESS::~COREACCESS((COREACCESS *)v102, v68);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v83);
      goto LABEL_79;
    }
    while ( 1 )
    {
      v45 = 1 << v44;
      if ( ((1 << v44) & v11[21]) != 0 )
        break;
      if ( (v45 & v11[1]) != 0 )
      {
        v46 = *(_QWORD *)(*((_QWORD *)this + 8) + 48LL);
        v78 = *((_QWORD *)this + 8);
        v47 = 296LL * *(unsigned int *)(v46 + 4 * (v44 + 85LL * v72) + 8);
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v43, v44);
        v49 = *((_QWORD *)this + 8);
        v50 = *(_OWORD *)DisplayModeInfo;
        v51 = *((_DWORD *)DisplayModeInfo + 10);
        v52 = *((_OWORD *)DisplayModeInfo + 1);
        v95 = v51;
        v53 = *((_QWORD *)DisplayModeInfo + 4);
        LODWORD(DisplayModeInfo) = HIDWORD(*((_QWORD *)DisplayModeInfo + 3)) - 2;
        v94 = v53;
        v92 = v50;
        v93 = v52;
        if ( ((unsigned int)DisplayModeInfo & 0xFFFFFFFD) != 0 )
        {
          LODWORD(v92) = *(_DWORD *)(v49 + v47 + 208);
          v54 = *(_DWORD *)(v49 + v47 + 212);
        }
        else
        {
          LODWORD(v92) = *(_DWORD *)(v49 + v47 + 212);
          v54 = *(_DWORD *)(v49 + v47 + 208);
        }
        v55 = (ADAPTER_DISPLAY **)v82;
        DWORD1(v92) = v54;
        v56 = *(_QWORD *)v82;
        v57 = 4024LL * v44;
        v58 = *(_QWORD *)(*(_QWORD *)v82 + 128LL);
        *(_OWORD *)(v58 + v57 + 644) = v92;
        *(_OWORD *)(v58 + v57 + 660) = v52;
        *(_QWORD *)(v58 + v57 + 676) = v53;
        *(_DWORD *)(v58 + v57 + 684) = v51;
        *(_DWORD *)(*(_QWORD *)(v56 + 128) + v57 + 1104) = -1;
        v59 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*v55, v44);
        if ( v59 < 0 )
        {
          WdLogSingleEntry4(
            7LL,
            v44,
            *(int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
            *(unsigned int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
            v59);
          WdLogGlobalForLineNumber = 2698;
        }
        if ( v73 || (v45 & v11[2]) != 0 && (v45 & v11[10]) == 0 )
        {
          Global = DXGGLOBAL::GetGlobal();
          do
            v61 = _InterlockedIncrement((volatile signed __int32 *)Global + 344);
          while ( !v61 );
          v62 = (ADAPTER_DISPLAY **)v82;
          *(_DWORD *)(v78 + v47 + 244) = v61;
          ADAPTER_DISPLAY::SetDisplayId(*v62, v44, v61);
          v19 = v81[0];
        }
        v63 = v78;
        if ( (v45 & v11[17]) != 0 )
          *(_QWORD *)(v78 + v47 + 252) = 0LL;
        v64 = *(_DWORD *)(v63 + v47 + 84);
        v76 = 0;
        v65 = DmmGetTargetLinkTrainingStatus(v19, v64, (enum _DXGK_CONNECTION_STATUS *)&v76) < 0;
        v66 = v78;
        if ( !v65 && v76 == 12 )
          *(_DWORD *)(v78 + v47 + 248) = 259;
        MonitorSetLastWireformatAndColorspace(
          (__int64)v19,
          *(_DWORD *)(v66 + v47 + 84),
          *(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)(v66 + v47 + 260),
          *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v66 + v47 + 264));
        goto LABEL_71;
      }
LABEL_72:
      if ( ((v11[15] | v11[21]) & v45) != 0 )
      {
        ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*v42, v44);
        v42 = (ADAPTER_DISPLAY **)v82;
      }
      v43 = *v42;
      if ( ++v44 >= *((_DWORD *)*v42 + 24) )
      {
        v9 = (volatile signed __int64 *)v77;
        goto LABEL_76;
      }
    }
    v11[3] |= v45 & *v11;
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      this,
      (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v72),
      v44,
      v11[v44 + 22]);
LABEL_71:
    v42 = (ADAPTER_DISPLAY **)v82;
    goto LABEL_72;
  }
  WdLogSingleEntry5(
    2LL,
    v36,
    *((_QWORD *)this + 8),
    *(int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
    *(unsigned int *)(340LL * v72 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
    v74);
  WdLogGlobalForLineNumber = 2584;
  if ( v84[0] )
    v86(v87, v36);
  COREACCESS::~COREACCESS((COREACCESS *)v103, v37);
  COREACCESS::~COREACCESS((COREACCESS *)v102, v38);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v83);
LABEL_79:
  if ( v80 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v79 + 136));
    KeLeaveCriticalRegion();
  }
LABEL_81:
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd64(v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v77 + 2), v77);
    v19 = v81[0];
  }
  v69 = v74;
  if ( v100 )
    lambda_fe0a1c8bb5d899668299a10802864297_::operator()((__int64)v99);
  v70 = v19;
LABEL_88:
  DXGADAPTER::ReleaseReference(v70);
  return v69;
}
