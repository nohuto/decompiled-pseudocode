/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14040C830 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     DpiGetSysMmAdapterFromDevice @ 0x140011EAC (DpiGetSysMmAdapterFromDevice.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1400409AC (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x1400409DC (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F6E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z @ 0x140065E5C (-Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x140073584 (-CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ.c)
 *     DpiFdoSetFeatureDatabaseDxgAdapter @ 0x14007D084 (DpiFdoSetFeatureDatabaseDxgAdapter.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x14007DFC0 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ @ 0x140182410 (-GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x14018B73C (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x14018BB74 (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x14018D36C (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z @ 0x14018D478 (-GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ @ 0x14018FC60 (-InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x14018FCB4 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x14018FD48 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x140190A08 (-InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ.c)
 *     ?QueryFeatureEnablement@DXGADAPTER@@AEAAXXZ @ 0x140191BC4 (-QueryFeatureEnablement@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140191ED8 (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x14019381C (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x140199E78 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1401CDE10 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1401CE15C (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D12D0 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D1A2C (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetAdapterInfo @ 0x14022F500 (DpiGetAdapterInfo.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1403037B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035604C (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14036DEB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x140384310 (DpiReadPnpRegistryValue.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1403EF250 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1403FB908 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?AcquireSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAKXZ @ 0x1403FD370 (-AcquireSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAKXZ.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  __int64 v6; // r9
  struct _ERESOURCE *v7; // rax
  __int64 result; // rax
  NTSTATUS v9; // eax
  int LocallyUniqueId; // ebx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  const wchar_t *v14; // r9
  int v15; // edx
  struct _ERESOURCE *v16; // rax
  NTSTATUS v17; // eax
  int v18; // eax
  __int64 v19; // r15
  int AdapterInfo; // eax
  struct _LUID *v21; // rdx
  int (__fastcall *v22)(_QWORD, __int128 *); // rax
  unsigned __int8 v23; // bl
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  const wchar_t *v27; // r9
  unsigned int v28; // eax
  const struct _GUID *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  const wchar_t *v33; // r9
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 v40; // rax
  unsigned int v41; // r13d
  unsigned __int8 v42; // r8
  __int64 v43; // rax
  const wchar_t *v44; // r9
  int v45; // eax
  int v46; // ecx
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // r15
  int v50; // eax
  int v51; // ecx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // r9
  int v55; // ecx
  char v56; // al
  int v57; // eax
  unsigned int v58; // ebx
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  char v61; // r12
  unsigned int v62; // eax
  unsigned int v63; // r8d
  __int64 v64; // r9
  UINT PhysicalAdapterCapsSizeFromDdiVersion; // r15d
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  DXGGLOBAL *Global; // rax
  __int64 v71; // rcx
  unsigned int v72; // r8d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // eax
  __int64 RenderCore; // rdi
  unsigned int v83; // edx
  __int64 v84; // r8
  __int64 v85; // r13
  __int64 v86; // r12
  int v87; // ecx
  int v88; // edi
  int v89; // ebx
  char IsGpuVaIoMmuGlobalSupported; // al
  const wchar_t *v91; // r9
  int v92; // eax
  char v93; // al
  int v94; // eax
  __int64 v95; // rax
  int v96; // eax
  int v97; // ecx
  int v98; // eax
  struct _DXGK_ADAPTER_CAPS *v99; // r12
  char v100; // cl
  char v101; // dl
  char v102; // al
  char v103; // r8
  char v104; // cl
  char v105; // dl
  char v106; // cl
  char v107; // al
  char v108; // al
  char v109; // cl
  unsigned int v110; // eax
  int v111; // ecx
  __int64 v112; // rax
  struct DXGGLOBAL *v113; // rax
  struct DXGGLOBAL *v114; // rax
  struct DXGGLOBAL *v115; // rax
  char v116; // r9
  char v117; // r8
  unsigned int v118; // ecx
  unsigned int v119; // edx
  __int64 v120; // rax
  __int64 v121; // rax
  unsigned int v122; // ebx
  DXGGLOBAL *v123; // rax
  int v124; // eax
  int v125; // ecx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  int v131; // eax
  char v132; // cl
  int v133; // eax
  __int64 v134; // rax
  char *v135; // rbx
  int DisplayCore; // eax
  bool v137; // zf
  char v138; // cl
  char v139; // dl
  int v140; // eax
  char v141; // al
  __int64 v142; // rdx
  DXGADAPTER *v143; // rcx
  int v144; // eax
  __int64 v145; // rax
  bool IsBddFallbackDriver; // cf
  __int64 v147; // r9
  int v148; // eax
  DXGGLOBAL *v149; // rax
  int v150; // eax
  __int64 v151; // rax
  __int64 v152; // r8
  __int64 v153; // r9
  int v154; // eax
  DXGADAPTER *v155; // rcx
  __int64 v156; // r14
  __int64 v157; // rbx
  struct DXGGLOBAL *v158; // rax
  int v159; // eax
  struct DXGGLOBAL *v160; // rax
  __int64 v161; // rdx
  DXGGLOBAL *v162; // rax
  __int64 v163; // [rsp+20h] [rbp-E0h]
  __int64 v164; // [rsp+28h] [rbp-D8h]
  __int64 v165; // [rsp+28h] [rbp-D8h]
  __int64 v166; // [rsp+30h] [rbp-D0h]
  unsigned int v167; // [rsp+50h] [rbp-B0h] BYREF
  bool IsAdapterSessionized; // [rsp+54h] [rbp-ACh]
  unsigned int v169; // [rsp+58h] [rbp-A8h] BYREF
  int v170; // [rsp+5Ch] [rbp-A4h] BYREF
  int v171; // [rsp+60h] [rbp-A0h] BYREF
  int v172; // [rsp+64h] [rbp-9Ch] BYREF
  int v173; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v174; // [rsp+6Ch] [rbp-94h]
  __int64 v175; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v176; // [rsp+78h] [rbp-88h]
  __int64 v177; // [rsp+80h] [rbp-80h] BYREF
  _DXGKARG_QUERYADAPTERINFO v178; // [rsp+88h] [rbp-78h] BYREF
  struct _DXGK_ADAPTER_CAPS *v179[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v180; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v181; // [rsp+F8h] [rbp-8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v182; // [rsp+128h] [rbp+28h] BYREF
  __int128 v183; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v184[2]; // [rsp+168h] [rbp+68h] BYREF

  v179[0] = a3;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6951;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      6951LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 50) )
    return 3221225485LL;
  v7 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL, v6);
  *((_QWORD *)this + 21) = v7;
  if ( !v7 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 6969;
    return 3221225495LL;
  }
  v9 = ExInitializeResourceLite(v7);
  LocallyUniqueId = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v9);
    WdLogGlobalForLineNumber = 6980;
    return (unsigned int)LocallyUniqueId;
  }
  *((_QWORD *)this + 27) = DeviceObject;
  *((_QWORD *)this + 28) = DpiGetSysMmAdapterFromDevice();
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 29) = DeviceAttachmentBaseRef;
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4756));
  if ( LocallyUniqueId < 0 )
  {
    WdLogSingleEntry0(6LL);
    v13 = 7001LL;
    v14 = L"ZwAllocateLocallyUniqueId failed";
LABEL_12:
    v15 = 262145;
LABEL_13:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(0LL, v15, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)LocallyUniqueId;
  }
  v16 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL, v12);
  *((_QWORD *)this + 35) = v16;
  if ( !v16 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 7014;
    return 3221225495LL;
  }
  v17 = ExInitializeResourceLite(v16);
  LocallyUniqueId = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v17);
    WdLogGlobalForLineNumber = 7025;
    return (unsigned int)LocallyUniqueId;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v175 = 0LL;
  *((_QWORD *)this + 5) = -1LL;
  if ( *((_BYTE *)DeviceObject->DeviceExtension + 481) )
  {
    v18 = DXGADAPTER::InitializeParavirtualizedAdapter(this, (struct DRIVER_WORKAROUNDS *)&v175);
    v19 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(2LL, v18);
      WdLogGlobalForLineNumber = 7048;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"InitializeParavirtualizedAdapter failed: 0x%I64x",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v19;
    }
  }
  else
  {
    *((_BYTE *)this + 1785) = 0;
    AdapterInfo = DpiGetAdapterInfo((int)DeviceObject, (char *)this + 1744, (char *)this + 288);
    LocallyUniqueId = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      WdLogSingleEntry2(3LL, this, AdapterInfo);
      WdLogGlobalForLineNumber = 7065;
      return (unsigned int)LocallyUniqueId;
    }
  }
  DpiFdoSetFeatureDatabaseDxgAdapter(*((_QWORD *)this + 27), this);
  *(_QWORD *)v184 = 0LL;
  v22 = (int (__fastcall *)(_QWORD, __int128 *))*((_QWORD *)this + 296);
  v183 = 0LL;
  if ( v22 && v22(*((_QWORD *)this + 287), &v183) >= 0 )
  {
    *(_QWORD *)((char *)this + 4828) = *((_QWORD *)&v183 + 1);
    *((_DWORD *)this + 1209) = v184[0];
  }
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(this, v21, v184, 0LL);
  v23 = IsAdapterSessionized;
  if ( IsAdapterSessionized )
  {
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *(DXGSESSIONMGR **)(*((_QWORD *)this + 2) + 944LL),
                                       v184[0]);
    if ( !SessionDataForSpecifiedSession
      || (v25 = DXGSESSIONDATA::AcquireSessionAdapterOrdinal(SessionDataForSpecifiedSession),
          *((_DWORD *)this + 61) = v25,
          v25 == -1) )
    {
      WdLogSingleEntry2(2LL, v184[0], -1073741801LL);
      v26 = v184[0];
      v27 = L"Exceeded the maximum number of sessionized adapter in session 0x%I64x, returning 0x%I64x.";
      v164 = -1073741801LL;
      WdLogGlobalForLineNumber = 7098;
LABEL_31:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v27, v26, v164, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
  }
  v28 = DXGGLOBAL::AcquireAdapterOrdinal(*((DXGGLOBAL **)this + 2), v23);
  *((_DWORD *)this + 60) = v28;
  if ( v28 == -1 )
    return 3221225495LL;
  if ( (*((_DWORD *)this + 111) & 0x200) != 0 )
    *((_BYTE *)DXGGLOBAL::GetGlobal() + 304800) = 1;
  v32 = *((_DWORD *)this + 111);
  if ( (v32 & 8) != 0 && (v32 & 0x10) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7122;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!(IsSoftGPU() && IsWarpAdapter())",
      7122LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + 57) )
  {
    WdLogSingleEntry0(2LL);
    v33 = L"Miniport did not provide required DDIs";
    v165 = 0LL;
    v163 = 7129LL;
    WdLogGlobalForLineNumber = 7129;
LABEL_40:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v33, v163, v165, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 74) )
    *((_QWORD *)this + 74) = DXGADAPTER::DefaultDdiEscape;
  if ( !*((_QWORD *)this + 135) )
    *((_QWORD *)this + 135) = W32kStub_GreSfmOpenTokenEvent;
  v34 = DXGADAPTER::CallDriverQueryInterface((PDEVICE_OBJECT *)this, v29, v30, v31, (char *)this + 2096);
  v39 = v34;
  if ( v34 >= 0 )
  {
    if ( *((_WORD *)this + 1049) >= 4u )
      goto LABEL_49;
  }
  else
  {
    v40 = WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = this;
    *(_QWORD *)(v40 + 32) = v39;
    WdLogGlobalForLineNumber = 7160;
  }
  memset((char *)this + 2096, 0, 0xB8uLL);
LABEL_49:
  v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL);
  v176 = v41;
  *((_DWORD *)this + 570) = v41;
  if ( v41 < 0x7000 )
  {
    if ( v41 < 0x6002 )
      goto LABEL_58;
  }
  else
  {
    if ( !*((_DWORD *)this + 464) )
      goto LABEL_58;
    if ( *((_DWORD *)this + 465) )
    {
      v42 = 0;
LABEL_57:
      DXGADAPTER::SetModeBehavior(this, v35, v42);
      goto LABEL_58;
    }
  }
  if ( *((_DWORD *)this + 464) && *((_DWORD *)this + 465) )
  {
    v42 = 1;
    goto LABEL_57;
  }
LABEL_58:
  if ( v41 - 20480 <= 5 )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7204LL;
    v44 = L"Cannot load an M1 threshold driver on later builds.";
LABEL_60:
    WdLogGlobalForLineNumber = v43;
LABEL_61:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v44, v43, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  *(_QWORD *)&v178.InputDataSize = 0LL;
  v178.pOutputData = (char *)this + 2400;
  *(_QWORD *)&v178.Type = 1LL;
  *(_QWORD *)&v178.Flags.0 = 0LL;
  HIDWORD(v178.hKmdProcessHandle) = 0;
  v178.pInputData = 0LL;
  v178.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v41);
  if ( !v178.OutputDataSize )
    return 3221225485LL;
  v45 = DXGADAPTER::DdiQueryAdapterInfo(this, &v178);
  v19 = v45;
  if ( v45 < 0 )
  {
    WdLogSingleEntry1(2LL, v45);
    WdLogGlobalForLineNumber = 7227;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Miniport failed DdiQueryAdapterInfo(DXGKQAITYPE_DRIVERCAPS) with status 0x%I64x",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v19;
  }
  v46 = *((_DWORD *)this + 684);
  if ( v46 <= 9472 )
  {
    if ( v46 < 4864 )
    {
      v49 = 0LL;
      if ( *((_QWORD *)this + 104) )
      {
        v48 = 1300;
      }
      else if ( v46 == 4608 )
      {
        v48 = 1200;
      }
      else if ( !*((_QWORD *)this + 100) || (v48 = 1105, (*((_DWORD *)this + 613) & 4) == 0) )
      {
        v48 = 1000;
      }
      *((_DWORD *)this + 751) = v48;
      goto LABEL_79;
    }
  }
  else if ( *((_DWORD *)DeviceObject->DeviceExtension + 687) <= 0xA00Bu )
  {
    WdLogSingleEntry1(2LL, *((int *)this + 684));
    v47 = *((int *)this + 684);
    WdLogGlobalForLineNumber = 7233;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Miniport returned incorrect WDDMVersion: 0x%I64x",
      v47,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v48 = DxgkConvertWddmVersionToD3DKMTDriverVersion(v46);
  *((_DWORD *)this + 751) = v48;
  v49 = 0LL;
LABEL_79:
  v50 = *((_DWORD *)this + 744);
  if ( v48 >= 2600 )
  {
    v51 = *((_DWORD *)this + 111);
    if ( (v50 & 8) != 0 )
    {
      *((_DWORD *)this + 111) = v51 | 0x80000;
    }
    else if ( (v51 & 0x80000) != 0 && v41 >= 0x11002 )
    {
      WdLogSingleEntry0(2LL);
      v43 = 7287LL;
      v44 = L"MiscCaps.ComputeOnly is not set, but the device belongs to the ComputeAccelerator class";
      goto LABEL_60;
    }
  }
  else
  {
    v50 &= ~8u;
    *((_DWORD *)this + 744) = v50;
  }
  if ( *((_BYTE *)this + 1784) && (v50 & 0xC) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7294;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"UMD name is missing and device is not compute only",
      7294LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225524LL;
  }
  v52 = *((_QWORD *)this + 27);
  v170 = 0;
  v53 = DpiReadPnpRegistryValue(v52, L"ACGSupported", &v170, 4LL, 2);
  v55 = v170;
  if ( v53 < 0 )
    v55 = 0;
  v170 = v55;
  if ( v55 || (v56 = 0, *((int *)this + 751) >= 2200) )
    v56 = 1;
  *((_BYTE *)this + 212) = v56;
  if ( *((_BYTE *)this + 209) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_DWORD *)this + 744) &= 0xFFFFFFEB;
    *((_DWORD *)this + 617) &= 0xFFFFD2FF;
    *((_BYTE *)this + 2940) = 0;
    *((_BYTE *)this + 2968) = 1;
    *((_BYTE *)this + 2942) = 1;
    if ( *((_BYTE *)this + 210) )
      *((_DWORD *)this + 613) &= ~0x100000u;
  }
  else if ( v41 >= 0x5023 )
  {
    if ( g_bCreateParavirtualizedGpu )
    {
      v57 = *((_DWORD *)this + 111);
      if ( (v57 & 4) == 0 && (v57 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 617) |= 0x400u;
    }
  }
  v174 = *((_DWORD *)this + 74);
  v58 = v174;
  v59 = 344LL * v174;
  if ( !is_mul_ok(v174, 0x158uLL) )
    v59 = -1LL;
  v60 = operator new[](v59, 0x4B677844u, 64LL, v54);
  *((_QWORD *)this + 374) = v60;
  if ( !v60 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 7353;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGK_PHYSICALADAPTERINFO",
      7353LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v61 = 0;
  if ( *((int *)this + 684) < 0x2000 || v41 < 0x5005 )
    goto LABEL_147;
  *((_DWORD *)this + 750) = 0;
  v62 = 0;
  v167 = 0;
  if ( v58 )
  {
    PhysicalAdapterCapsSizeFromDdiVersion = GetPhysicalAdapterCapsSizeFromDdiVersion(v41);
    while ( 1 )
    {
      v180.pInputData = &v167;
      *(_QWORD *)&v180.Type = 15LL;
      *(_QWORD *)&v180.InputDataSize = 4LL;
      v180.pOutputData = (void *)(v64 + 344LL * v63);
      *(_QWORD *)&v180.Flags.0 = 0LL;
      HIDWORD(v180.hKmdProcessHandle) = 0;
      v180.OutputDataSize = PhysicalAdapterCapsSizeFromDdiVersion;
      v66 = DXGADAPTER::DdiQueryAdapterInfo(this, &v180);
      if ( v66 < 0 )
        break;
      if ( v41 >= 0xC003 )
      {
        v67 = *((_QWORD *)this + 374);
        v68 = 344LL * v167;
        if ( (*(_DWORD *)(v68 + v67 + 16) & 0x20) != 0 )
        {
          v69 = *(unsigned int *)(v68 + v67 + 24);
          if ( (unsigned int)v69 >= *(unsigned __int16 *)(v68 + v67) )
          {
            WdLogSingleEntry3(2LL, this, v69, *(unsigned __int16 *)(v68 + v67));
            v80 = *((_QWORD *)this + 374);
            WdLogGlobalForLineNumber = 7398;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Adapter 0x%I64x: VirtualCopyEngineSupported but node index is invalid (VirtualCopyIndex:%u, NumExecutionNodes:%u)",
              (__int64)this,
              *(unsigned int *)(344LL * v167 + v80 + 24),
              *(unsigned __int16 *)(344LL * v167 + v80),
              0LL,
              0LL);
            return 3221225485LL;
          }
          if ( (*((_DWORD *)this + 617) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(2LL, this);
            WdLogGlobalForLineNumber = 7405;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Adapter 0x%I64x: IoMmuSecureModeRequired must be set for a device exposing a virtual copy engine",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
        }
      }
      Global = DXGGLOBAL::GetGlobal();
      if ( DXGGLOBAL::GpuVaIoMmuEnabled(Global) )
      {
        v71 = *((_QWORD *)this + 27);
        v171 = 0;
        v172 = 0;
        if ( (int)DpiReadPnpRegistryValue(v71, L"DxgkGpuVaIommuRequired", &v171, 4LL, 2) >= 0 )
          *(_DWORD *)(344LL * v167 + *((_QWORD *)this + 374) + 16) = (v171 != 0 ? 0x40 : 0) | *(_DWORD *)(344LL * v167 + *((_QWORD *)this + 374) + 16) & 0xFFFFFFBF;
        if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)this + 27), L"DxgkGpuVaIommuGlobalSupported", &v172, 4LL, 2) >= 0 )
          *(_DWORD *)(344LL * v167 + *((_QWORD *)this + 374) + 16) = (v172 != 0 ? 0x80 : 0) | *(_DWORD *)(344LL * v167 + *((_QWORD *)this + 374) + 16) & 0xFFFFFF7F;
      }
      v72 = v167;
      v73 = *((_QWORD *)this + 374);
      v74 = 344LL * v167;
      if ( (*(_DWORD *)(v74 + v73 + 16) & 2) != 0 )
      {
        *(_BYTE *)(v74 + v73 + 49) = 1;
        v72 = v167;
      }
      v75 = *((_QWORD *)this + 374);
      v76 = 344LL * v72;
      if ( (*(_DWORD *)(v76 + v75 + 16) & 0x40) != 0 )
      {
        if ( !DXGADAPTER::IsGpuVaIoMmuSupported(this) )
        {
          WdLogSingleEntry1(2LL, this);
          WdLogGlobalForLineNumber = 7436;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: GpuVaIommuRequired is set for a physical adapter, but not in IOMMU_CAPS",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        *(_BYTE *)(v76 + v75 + 49) = 1;
        *(_BYTE *)(344LL * v167 + *((_QWORD *)this + 374) + 48) = 1;
        v72 = v167;
      }
      v77 = *((_QWORD *)this + 374);
      v78 = 344LL * v72;
      if ( (*(_DWORD *)(v78 + v77 + 16) & 0x80u) != 0 )
      {
        if ( !DXGADAPTER::IsGpuVaIoMmuGlobalSupported(this) )
        {
          WdLogSingleEntry1(2LL, this);
          WdLogGlobalForLineNumber = 7447;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: GpuVaIommuGlobalRequired is set for a physical adapter, but not in IOMMU_CAPS",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        *(_BYTE *)(v78 + v77 + 49) = 1;
        *(_BYTE *)(344LL * v167 + *((_QWORD *)this + 374) + 48) = 1;
        v72 = v167;
      }
      v64 = *((_QWORD *)this + 374);
      v58 = v174;
      v79 = v72;
      v63 = v72 + 1;
      v62 = *(unsigned __int16 *)(344 * v79 + v64) + *((_DWORD *)this + 750);
      v167 = v63;
      *((_DWORD *)this + 750) = v62;
      if ( v63 >= v58 )
        goto LABEL_130;
    }
    WdLogSingleEntry1(4LL, v66);
    WdLogGlobalForLineNumber = 7380;
    v61 = 1;
  }
  else
  {
LABEL_130:
    if ( *((int *)this + 751) <= 2400 && v62 > 0x40 )
    {
      WdLogSingleEntry3(2LL, this, 64LL, v62);
      v166 = *((unsigned int *)this + 750);
      WdLogGlobalForLineNumber = 7465;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Adapter 0x%I64x: Exceeded maximum number of %I64d nodes on pre-WDDM 2.5 adapter. Total node count: %I64d",
        (__int64)this,
        64LL,
        v166,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)this + 616) & 1) == 0 )
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 7470;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Adapter 0x%I64x: SchedulingCaps.MultiEngineAware is not set by WDDMv2 driver",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  v49 = 0LL;
  if ( (*((_DWORD *)this + 617) & 0x800) != 0 )
  {
    v169 = 0;
    if ( v58 )
    {
      while ( 1 )
      {
        v177 = 0LL;
        v178.pInputData = &v169;
        v178.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
        v178.pOutputData = &v177;
        v178.InputDataSize = 4;
        v178.OutputDataSize = 8;
        v81 = DXGADAPTER::DdiQueryAdapterInfo(this, &v178);
        RenderCore = v81;
        if ( v81 < 0 )
          break;
        if ( (v177 & 0xFFF) != 0 )
        {
          WdLogSingleEntry1(2LL, v177);
          v43 = v177;
          v44 = L"Frame buffer reserve size must be a multiple of PAGE_SIZE. Size=%I64u";
          WdLogGlobalForLineNumber = 7495;
          goto LABEL_61;
        }
        *(_QWORD *)(344LL * v169 + *((_QWORD *)this + 374) + 56) = v177;
        v83 = v169;
        v84 = *(_QWORD *)(344LL * v169 + *((_QWORD *)this + 374) + 56);
        if ( v84 )
        {
          result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v169, v84);
          if ( (int)result < 0 )
            return result;
          v83 = v169;
        }
        v169 = v83 + 1;
        if ( v83 + 1 >= v58 )
          goto LABEL_146;
      }
      WdLogSingleEntry1(2LL, v81);
      v91 = L"Failed to query frame buffer save area size. Status 0x%I64x";
      WdLogGlobalForLineNumber = 7489;
      goto LABEL_160;
    }
  }
LABEL_146:
  if ( v61 )
  {
LABEL_147:
    if ( v58 )
    {
      v85 = v58;
      do
      {
        v86 = *((_QWORD *)this + 374);
        *(_WORD *)(v49 + v86) = *((_WORD *)this + 1238);
        v87 = *(_DWORD *)(v49 + v86 + 16) ^ ((unsigned __int8)*(_DWORD *)(v49 + v86 + 16) ^ (unsigned __int8)(*((_DWORD *)this + 617) >> 7)) & 1;
        *(_DWORD *)(v49 + v86 + 16) = v87;
        v88 = v87 ^ (v87 ^ (*((_DWORD *)this + 617) >> 5)) & 2;
        *(_DWORD *)(v49 + v86 + 16) = v88;
        v89 = v88 ^ ((unsigned __int8)v88 ^ (DXGADAPTER::IsGpuVaIoMmuSupported(this) << 6)) & 0x40;
        *(_DWORD *)(v49 + v86 + 16) = v89;
        IsGpuVaIoMmuGlobalSupported = DXGADAPTER::IsGpuVaIoMmuGlobalSupported(this);
        *(_DWORD *)(v49 + v86 + 16) = v89 ^ ((unsigned __int8)v89 ^ (unsigned __int8)(IsGpuVaIoMmuGlobalSupported << 7)) & 0x80;
        *(_WORD *)(v49 + v86 + 2) = *((_WORD *)this + 1236);
        *(_QWORD *)(v49 + v86 + 8) = *((_QWORD *)this + 27);
        if ( (((unsigned __int8)v89 ^ ((unsigned __int8)v89 ^ (unsigned __int8)(IsGpuVaIoMmuGlobalSupported << 7)) & 0x80) & 0xC2) != 0 )
          *(_WORD *)(v49 + v86 + 48) = 257;
        v49 += 344LL;
        --v85;
      }
      while ( v85 );
      v41 = v176;
    }
  }
  if ( *((int *)this + 751) >= 2400 )
  {
    if ( *((_DWORD *)this + 744) >= 0x200u )
    {
      WdLogSingleEntry0(2LL);
      v43 = 7549LL;
      v44 = L"Driver should not set MiscCaps.Reserved bits";
      goto LABEL_60;
    }
    *((_BYTE *)this + 3057) = *((_BYTE *)this + 2976) & 1;
  }
  v92 = *((_DWORD *)this + 744);
  if ( (v92 & 0x10) != 0 && !*((_QWORD *)this + 175) )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7559LL;
    v44 = L"Driver sets IndependentVidPnVSyncControl cap but does not support DxgkDdiControlInterrupt3, returning failure";
    goto LABEL_60;
  }
  if ( *((_BYTE *)this + 3220) )
    *((_DWORD *)this + 744) = v92 & 0xFFFFFFEF;
  if ( v41 >= 0x3001 )
  {
    v94 = *((_DWORD *)this + 684);
    if ( v94 != 4096
      && v94 != 4608
      && v94 != 4864
      && v94 != 0x2000
      && v94 != 8448
      && v94 != 8704
      && v94 != 8960
      && v94 != 9216
      && v94 != 9472
      && v94 != 9728
      && v94 != 9984
      && v94 != 10240
      && v94 != 10496
      && v94 != 12288
      && v94 != 12544
      && v94 != 12800 )
    {
      WdLogSingleEntry1(2LL, *((int *)this + 684));
      v95 = *((int *)this + 684);
      v33 = L"Miniport returned unknown WDDM version 0x%I64x";
      v165 = 0LL;
      WdLogGlobalForLineNumber = 7617;
LABEL_203:
      v163 = v95;
      goto LABEL_40;
    }
  }
  else
  {
    *((_DWORD *)this + 684) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 888) || (v93 = 1, (*((_DWORD *)this + 111) & 8) != 0) )
    v93 = 0;
  *((_BYTE *)this + 3016) = v93;
  if ( v93 )
  {
    if ( *((int *)this + 684) < 4608
      && (*((_DWORD *)this + 732)
       || *((_DWORD *)this + 733)
       || *((_BYTE *)this + 2936)
       || *((_BYTE *)this + 2937)
       || *((_BYTE *)this + 2938)
       || (*((_DWORD *)this + 613) & 0x10000000) != 0
       || (*((_DWORD *)this + 616) & 0x14) != 0
       || *((_BYTE *)this + 2939)
       || *((_BYTE *)this + 2941)
       || *((_BYTE *)this + 2942)) )
    {
      WdLogSingleEntry0(2LL);
      v43 = 7643LL;
      v44 = L"Driver reports WDDM version less than 1.2 but implements some WDDM 1.2 features.";
      goto LABEL_60;
    }
    v96 = *((_DWORD *)this + 684);
    if ( v96 >= 4864 )
    {
      if ( v96 >= 0x2000 )
        goto LABEL_213;
    }
    else if ( (*((_DWORD *)this + 615) & 0x10) != 0
           || (*((_DWORD *)this + 617) & 0x10) != 0
           || *((_BYTE *)this + 2943)
           || *((_DWORD *)this + 736) )
    {
      WdLogSingleEntry0(2LL);
      v43 = 7658LL;
      v44 = L"Driver reports WDDM version less than 1.3 but implements some WDDM 1.3 features.";
      goto LABEL_60;
    }
    if ( *((_BYTE *)this + 2948) )
    {
      WdLogSingleEntry0(2LL);
      v43 = 7686LL;
      v44 = L"Pre-WDDM 2.0 driver should not set the HybridIntegrated cap.";
      goto LABEL_60;
    }
  }
LABEL_213:
  v97 = *((_DWORD *)this + 617);
  if ( (v97 & 0x10000) != 0 )
  {
    if ( (*((_DWORD *)this + 617) & 0x8010) != 0x8010 )
    {
      WdLogSingleEntry0(2LL);
      v43 = 7700LL;
      v44 = L"Driver reports CrossAdapterResourceScanout but does not report lower tier support.";
      goto LABEL_60;
    }
  }
  else if ( (v97 & 0x8000) != 0 && (v97 & 0x10) == 0 )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7708LL;
    v44 = L"Driver reports CrossAdapterResourceTexture but does not report lower tier support.";
    goto LABEL_60;
  }
  if ( v41 >= 0x4000 )
  {
    if ( v41 >= 0x5011 )
      goto LABEL_226;
  }
  else
  {
    v97 &= ~0x10u;
    *((_BYTE *)this + 2943) = 0;
    *((_DWORD *)this + 617) = v97;
  }
  v98 = *((_DWORD *)this + 111);
  if ( (v98 & 1) != 0 && (v97 & 0x10) != 0 && (v98 & 0x1000) != 0 )
    *((_BYTE *)this + 2948) = 1;
LABEL_226:
  v99 = v179[0];
  v100 = *(_BYTE *)v179[0] ^ (*(_BYTE *)v179[0] ^ (4 * *((_BYTE *)this + 2936))) & 4;
  *(_BYTE *)v179[0] = v100;
  v101 = v100 & 0xF7 | (*((_BYTE *)this + 2942) != 0 ? 8 : 0);
  *(_BYTE *)v99 = v101;
  v102 = v101 ^ (v101 ^ (32 * (*((_DWORD *)this + 617) >> 4))) & 0x20;
  *(_BYTE *)v99 = v102;
  v103 = v102 ^ (v102 ^ (*((_BYTE *)this + 2943) << 6)) & 0x40;
  *(_BYTE *)v99 = v103;
  *((_DWORD *)v99 + 1) = *((_DWORD *)this + 609);
  v104 = *((_BYTE *)v99 + 1) ^ (*((_BYTE *)this + 2948) ^ *((_BYTE *)v99 + 1)) & 1;
  *((_BYTE *)v99 + 1) = v104;
  *((_DWORD *)v99 + 2) = *((_DWORD *)this + 684);
  v105 = v104 ^ (v104 ^ (32 * (*((_DWORD *)this + 744) >> 3))) & 0x20;
  v106 = v103 & 0xEF;
  *((_BYTE *)v99 + 1) = v105;
  *(_BYTE *)v99 = v103 & 0xEF;
  if ( v41 >= 0x5021 )
  {
    v106 = v103 ^ (v103 ^ (16 * *((_BYTE *)this + 2968))) & 0x10;
    *(_BYTE *)v99 = v106;
  }
  if ( *((_BYTE *)this + 209) )
    goto LABEL_259;
  if ( (v106 & 0x40) != 0 )
  {
    if ( v41 < 0x5005 && (*((_DWORD *)this + 464) || *((_DWORD *)this + 465)) )
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
      v43 = *((_QWORD *)this + 27);
      v44 = L"Driver reports device 0x%I64x is hybrid discrete device but it has VidPn source and target.";
      WdLogGlobalForLineNumber = 7771;
      goto LABEL_61;
    }
    v107 = v105 ^ (v105 ^ (2 * *((_BYTE *)this + 2971))) & 2;
    *((_BYTE *)v99 + 1) = v107;
    v108 = v107 & 1;
    goto LABEL_236;
  }
  v108 = v105 & 1;
  if ( (v105 & 1) != 0 )
  {
LABEL_236:
    if ( (v106 & 0x20) == 0 )
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
      v43 = *((_QWORD *)this + 27);
      v44 = L"Driver reports device 0x%I64x as hybrid device but does not support cross adapter resource.";
      WdLogGlobalForLineNumber = 7785;
      goto LABEL_61;
    }
  }
  v109 = v106 & 0x40;
  if ( v108 )
  {
    if ( v109 )
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
      v43 = *((_QWORD *)this + 27);
      v44 = L"Driver reports both HybridIntegrated and HybridDiscrete caps 0x%I64x";
      WdLogGlobalForLineNumber = 7792;
      goto LABEL_61;
    }
    if ( !*((_DWORD *)this + 465) )
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
      v43 = *((_QWORD *)this + 27);
      v44 = L"Driver reports the HybridIntegrated cap, but the adapter has no outputs. 0x%I64x";
      WdLogGlobalForLineNumber = 7800;
      goto LABEL_61;
    }
  }
  if ( *((_BYTE *)this + 2938) && (!*((_QWORD *)this + 101) || !*((_QWORD *)this + 102) || !*((_QWORD *)this + 103)) )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7814LL;
    v44 = L"Driver reports SupportPerEngineTDR cap but does not fill in all of the required DDIs.";
    goto LABEL_60;
  }
  if ( (*((_DWORD *)this + 613) & 4) != 0 && !*((_QWORD *)this + 100) )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7821LL;
    v44 = L"Driver reports SupportKernelModeCommandBuffer cap but does not fill in the pfnRenderKm DDI.";
    goto LABEL_60;
  }
  if ( *((_BYTE *)this + 2941) && (!*((_QWORD *)this + 105) || !*((_QWORD *)this + 106)) )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7829LL;
    v44 = L"Driver reports SupportRuntimePowerManagement cap but does not fill in the pfnSetPowerComponentFState or pfnPow"
           "erRuntimeControlRequest DDI.";
    goto LABEL_60;
  }
  if ( v41 < 0x300C && *((_QWORD *)this + 105) && *((_QWORD *)this + 106) )
    *((_BYTE *)this + 2941) = 1;
LABEL_259:
  *((_WORD *)this + 1509) = 0;
  *((_BYTE *)this + 3020) = 0;
  if ( !*((_BYTE *)this + 2940) )
    goto LABEL_297;
  if ( v41 < 0x300B )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7851LL;
    v44 = L"Driver reports SupportMultiPlaneOverlay cap but it is not compiled with expected header files.";
    goto LABEL_60;
  }
  if ( v41 < 0x4000 )
  {
    *((_BYTE *)this + 3018) = 1;
    goto LABEL_279;
  }
  if ( v41 == 0x4000 )
  {
    *((_BYTE *)this + 3019) = 1;
    goto LABEL_279;
  }
  v110 = *((_DWORD *)this + 736);
  if ( !v110 )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7864LL;
    v44 = L"Driver reports SupportMultiPlaneOverlay cap but doesn't report any overlay planes or panel fitter.";
    goto LABEL_60;
  }
  if ( v110 <= 8 )
  {
    if ( v41 > 0x5000 )
      *((_BYTE *)this + 3020) = 1;
    goto LABEL_279;
  }
  v111 = *((_DWORD *)this + 684);
  if ( v111 < 8704 )
  {
    if ( v111 < 0x2000 || v110 != 10 )
    {
      WdLogSingleEntry0(2LL);
      v43 = 7887LL;
      goto LABEL_272;
    }
    *((_DWORD *)this + 736) = 8;
  }
  else if ( v110 > 0xA )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7874LL;
LABEL_272:
    v44 = L"Driver reports more than the supported number of overlay planes.";
    goto LABEL_60;
  }
LABEL_279:
  v112 = *((_QWORD *)this + 109);
  if ( !v112 && !*((_QWORD *)this + 125) && !*((_QWORD *)this + 129) )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7903LL;
LABEL_283:
    v44 = L"Driver reports SupportMultiPlaneOverlay cap but does not fill in all of the required DDIs.";
    goto LABEL_60;
  }
  if ( v41 > 0x4002 && !*((_QWORD *)this + 113) && !*((_QWORD *)this + 124) && !*((_QWORD *)this + 128) )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7915LL;
    goto LABEL_283;
  }
  if ( !*((_BYTE *)this + 2939) )
  {
    WdLogSingleEntry0(2LL);
    v43 = 7925LL;
    v44 = L"Driver reports SupportMultiPlaneOverlay cap but DirectFlip is not supported.";
    goto LABEL_60;
  }
  if ( v112 )
  {
    v113 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v113, 1LL, 1LL);
  }
  if ( *((_QWORD *)this + 125) )
  {
    v114 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v114, 2LL, 1LL);
  }
  if ( *((_QWORD *)this + 129) )
  {
    v115 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v115, 3LL, 1LL);
  }
LABEL_297:
  v116 = *((_BYTE *)this + 209);
  *((_BYTE *)this + 3055) = 0;
  if ( v116 )
    goto LABEL_310;
  v117 = 0;
  if ( v41 >= 0x700A && *((int *)this + 684) >= 8704 && (!*((_QWORD *)this + 83) || *((_QWORD *)this + 146)) )
  {
    *((_BYTE *)this + 3055) = 1;
    v117 = 1;
  }
  if ( *((int *)this + 684) < 8960 )
  {
LABEL_310:
    *((_DWORD *)this + 612) &= 0xFFFFFFE3;
  }
  else
  {
    v118 = (*((_DWORD *)this + 612) >> 3) & 1;
    v119 = (*((_DWORD *)this + 612) >> 2) & 1;
    if ( v119 < v118 || v118 < ((*((_DWORD *)this + 612) >> 4) & 1u) )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      v121 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 7975;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Driver reports support higher level of colorSpaceTransform but not lower levels on device 0x%I64x, returning 0x%I64x.",
        v121,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( !v117 && v119 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      v120 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 7983;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ColorSpaceTransform is supported on the device 0x%I64x which does not have pfnSetTargetGamma, returning 0x%I64x.",
        v120,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 133LL) && !v116 )
  {
    v122 = *((_DWORD *)this + 684) >= 0x2000;
    v123 = DXGGLOBAL::GetGlobal();
    v124 = DXGGLOBAL::DeferredInitialize(v123, v122);
    RenderCore = v124;
    if ( v124 < 0 )
    {
      WdLogSingleEntry1(2LL, v124);
      v91 = L"DXGGLOBAL::DeferredInitialize failed (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 8010;
LABEL_160:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v91, RenderCore, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)RenderCore;
    }
  }
  DXGADAPTER::Config = 0;
  DXGADAPTER::ReadConfig(this, v99);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((_BYTE *)this + 209) )
  {
    **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFFDFFFF | v175 & 0x20000;
    **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFFE7FFF | v175 & 0x18000;
    **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFEFFFFF | v175 & 0x100000;
    **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFF3FFFF | v175 & 0xC0000;
    *((_BYTE *)this + 3021) = 0;
  }
  else if ( (*((_DWORD *)this + 111) & 0x10) != 0 && *((_BYTE *)this + 3071) )
  {
    *((_DWORD *)this + 617) |= 0x400u;
  }
  v125 = *((_DWORD *)this + 684);
  if ( v125 < 9216 )
    goto LABEL_323;
  v126 = *((_QWORD *)this + 167);
  if ( *((_QWORD *)this + 166) )
  {
    if ( v126 )
      goto LABEL_324;
LABEL_335:
    WdLogSingleEntry0(2LL);
    v43 = 8064LL;
    v44 = L"Driver cannot support only one of DdiQueryDiagnosticTypesSupport and DdiControlDiagnosticReporting.";
    goto LABEL_60;
  }
  if ( v126 )
    goto LABEL_335;
LABEL_323:
  *((_QWORD *)this + 166) = W32kStub_UserRemoveWindowedSwapChain;
  *((_QWORD *)this + 167) = DXGADAPTER::DefaultDdiControlDiagnosticReporting;
LABEL_324:
  if ( v125 >= 12800 && v41 >= 0x11001 )
  {
    memset(&v181, 0, 24);
    v181.Type = DXGKQAITYPE_POWERCOMPONENTINFO|0x20;
    *(_OWORD *)&v181.OutputDataSize = 0LL;
    v181.pOutputData = (char *)this + 5088;
    v181.OutputDataSize = 4;
    if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v181) < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v128, v127, v129, v130) + 24) = this;
      WdLogGlobalForLineNumber = 8079;
    }
  }
  v173 = 0;
  memset(&v182, 0, 24);
  v182.Type = DXGKQAITYPE_PHYSICALADAPTERCAPS|0x20;
  v182.pOutputData = &v173;
  *(_OWORD *)&v182.OutputDataSize = 0LL;
  v182.OutputDataSize = 4;
  v131 = DXGADAPTER::DdiQueryAdapterInfo(this, &v182);
  v132 = *((_BYTE *)this + 3072) & 0xFD;
  if ( v131 >= 0 )
    v132 |= 2 * (v173 & 1);
  *((_BYTE *)this + 3072) = v132;
  result = DXGADAPTER::CheckMcdmDdiOverall(this);
  if ( (int)result >= 0 )
  {
    DXGADAPTER::InitializeDriverDiagnosticReporting(this);
    DXGADAPTER::QueryFeatureEnablement(this);
    if ( (*((_DWORD *)this + 616) & 0x800) != 0 )
    {
      if ( (*((_DWORD *)this + 1257) & 0x40) == 0 )
      {
        WdLogSingleEntry0(2LL);
        v43 = 8119LL;
        v44 = L"Driver reports NativeGpuFence cap when NativeFence feature is disabled, returning failure";
        goto LABEL_60;
      }
      v178.Type = DXGKQAITYPE_QUERYSEGMENT3|0x20;
      v178.pOutputData = (char *)this + 5032;
      v178.OutputDataSize = 56;
      v133 = DXGADAPTER::DdiQueryAdapterInfo(this, &v178);
      RenderCore = v133;
      if ( v133 < 0 )
      {
        WdLogSingleEntry1(2LL, v133);
        v91 = L"Failed to get DXGK_NATIVE_FENCE_CAPS. Status 0x%I64x";
        WdLogGlobalForLineNumber = 8130;
        goto LABEL_160;
      }
    }
    RenderCore = (int)ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 391);
    v134 = *((_QWORD *)this + 391);
    if ( (int)RenderCore < 0 )
    {
      if ( v134 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8142;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pRenderCore == NULL", 8142LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(2LL, this, RenderCore);
      WdLogGlobalForLineNumber = 8145;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create ADAPTER_RENDER on adapter 0x%I64x (Status = 0x%I64x).",
        (__int64)this,
        RenderCore,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
    if ( v134 )
    {
      if ( IsAdapterSessionized )
      {
        WdLogSingleEntry0(2LL);
        v33 = L"Render capable adapter should NOT be sessionized!";
        v95 = 8161LL;
        WdLogGlobalForLineNumber = 8161;
        v165 = 0LL;
        goto LABEL_203;
      }
      if ( (*((_DWORD *)this + 744) & 0xC) == 0 )
        *((_BYTE *)this + 3072) |= 1u;
    }
    v135 = (char *)this + 3120;
    DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 390);
    RenderCore = DisplayCore;
    if ( DisplayCore < 0 )
    {
      if ( *(_QWORD *)v135 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8176;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pDisplayCore == NULL", 8176LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(2LL, this, RenderCore);
      WdLogGlobalForLineNumber = 8179;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create ADAPTER_DISPLAY on adapter 0x%I64x (Status = 0x%I64x).",
        (__int64)this,
        RenderCore,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
    if ( *((_QWORD *)this + 391) )
    {
      v137 = *(_QWORD *)v135 == 0LL;
    }
    else
    {
      v137 = *(_QWORD *)v135 == 0LL;
      if ( !*(_QWORD *)v135 )
      {
        WdLogSingleEntry2(2LL, this, -1073741735LL);
        v33 = L"Current adapter 0x%I64x does not have display or render capabilities (Status = 0x%I64x).";
        v165 = -1073741735LL;
        v163 = (__int64)this;
        WdLogGlobalForLineNumber = 0x2000;
        goto LABEL_40;
      }
    }
    v138 = *(_BYTE *)v99 & 0xFE | !v137;
    *(_BYTE *)v99 = v138;
    v139 = v138 & 0xFD | (*((_QWORD *)this + 391) != 0LL ? 2 : 0);
    *(_BYTE *)v99 = v139;
    if ( *(_QWORD *)v135 )
      v140 = *(_DWORD *)(*(_QWORD *)v135 + 24LL);
    else
      LOBYTE(v140) = 0;
    v141 = v139 & 0x7F | ((_BYTE)v140 << 7);
    *(_BYTE *)v99 = v141;
    if ( (v141 & 1) != 0 )
      *((_BYTE *)v99 + 1) = *((_BYTE *)v99 + 1) & 0xFB | (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0);
    else
      *((_BYTE *)v99 + 1) &= ~4u;
    if ( !*((_QWORD *)this + 391) )
      *((_DWORD *)this + 613) |= 1u;
    if ( DXGADAPTER::IsDxgmms2(this) )
    {
      v144 = *((_DWORD *)this + 111);
      if ( (v144 & 4) == 0
        && (v144 & 8) == 0
        && v142
        && v41 >= 0x5008
        && (!*((_QWORD *)this + 114) || !*((_QWORD *)this + 126)) )
      {
        WdLogSingleEntry0(2LL);
        v43 = 8233LL;
        v44 = L"Driver is compiled against DXGKDDI_INTERFACE_VERSION_WDDM2_0_M2_2_1 or greater, but does not fill in the p"
               "fnCalibrateGpuClock or pfnSetStablePowerState DDI.";
        goto LABEL_60;
      }
    }
    if ( *((_BYTE *)this + 3016) && DXGADAPTER::IsFullWDDMAdapter(v143) && *((int *)this + 684) >= 4608 )
    {
      if ( !*((_BYTE *)this + 2939) )
      {
        WdLogSingleEntry0(2LL);
        v43 = 8248LL;
        v44 = L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 full adapter features.";
        goto LABEL_60;
      }
    }
    else if ( !*((_BYTE *)this + 2939) )
    {
      goto LABEL_381;
    }
    if ( *((_BYTE *)this + 209) )
      goto LABEL_382;
    v145 = *((_QWORD *)this + 391);
    if ( !v145
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v145 + 760) + 8LL) + 656LL))(*(_QWORD *)(v145 + 768)) )
    {
      *(_WORD *)((char *)this + 2939) = 0;
    }
LABEL_381:
    if ( !*((_BYTE *)this + 209) )
    {
LABEL_383:
      IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
      v148 = *((_DWORD *)this + 111);
      *((_DWORD *)this + 50) = IsBddFallbackDriver ? 3 : 1;
      if ( (v148 & 0x10) != 0 && !*((_QWORD *)this + 390) )
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v179);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v179);
        if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 119) )
        {
          WdLogSingleEntry2(2LL, this, -1073741735LL);
          WdLogGlobalForLineNumber = 8298;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Current adapter 0x%I64x does not have display or render capabilities (Status = 0x%I64x).",
            (__int64)this,
            -1073741735LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)this + 3);
          *((_QWORD *)this + 4) = -1LL;
          v149 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::SetWarpAdapter(v149, this);
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v179);
      }
      if ( *((_BYTE *)this + 209) || (v150 = DXGADAPTER::InitializePowerManagement(this), RenderCore = v150, v150 >= 0) )
      {
        if ( *((_BYTE *)this + 3016) )
        {
          if ( *((int *)this + 684) >= 4864 )
          {
            if ( DXGADAPTER::IsFullWDDMAdapter(this) )
            {
              v154 = *((_DWORD *)this + 111);
              if ( (v154 & 4) == 0 && (v154 & 0x20) == 0 && (*((_DWORD *)this + 615) & 0x10) == 0 )
              {
                WdLogSingleEntry0(2LL);
                v43 = 8329LL;
                v44 = L"WDDM 1.3 driver must support independent flip.";
                goto LABEL_60;
              }
            }
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, this, v150);
        WdLogGlobalForLineNumber = 8316;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to initialize power management for the adapter 0x%I64x (Status = 0x%I64x).",
          (__int64)this,
          RenderCore,
          0LL,
          0LL,
          0LL);
      }
      if ( (*((_DWORD *)this + 111) & 0x10) != 0 )
        *((_BYTE *)this + 3058) = 1;
      if ( v41 >= 0xA008 )
        *((_BYTE *)this + 3058) = 1;
      v151 = operator new(0x28uLL, 0x4B677844u, 64LL, v147);
      if ( v151 )
      {
        *(_OWORD *)v151 = 0LL;
        *(_OWORD *)(v151 + 16) = 0LL;
        *(_QWORD *)(v151 + 32) = 0LL;
      }
      else
      {
        v151 = 0LL;
      }
      *((_QWORD *)this + 621) = v151;
      if ( !v151 )
      {
        WdLogSingleEntry0(2LL);
        v27 = L"Failed to allocate MockDriverState object";
        v26 = 8367LL;
        WdLogGlobalForLineNumber = 8367;
        v164 = 0LL;
        goto LABEL_31;
      }
      LocallyUniqueId = MOCKDRIVERSTATE::Initialize((MOCKDRIVERSTATE *)v151, this, v152, v153);
      if ( LocallyUniqueId < 0 )
      {
        WdLogSingleEntry0(2LL);
        v13 = 8374LL;
        v14 = L"Failed to initialize MockDriverState object";
        v15 = 0x40000;
        goto LABEL_13;
      }
      *((_BYTE *)this + 4976) = 0;
      LocallyUniqueId = DXGADAPTER::InitializeVSyncPhaseState(this);
      if ( LocallyUniqueId < 0 )
      {
        WdLogSingleEntry0(6LL);
        v13 = 8387LL;
        v14 = L"Failed to allocate VSync Phase Timer state";
        goto LABEL_12;
      }
      if ( (int)DXGADAPTER::InitializeCABCStateV2(v155) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 8402;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to initialize CABC State",
          8402LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v156 = *((_QWORD *)this + 391);
      if ( v156 && !*((_BYTE *)this + 209) )
      {
        v157 = *(_QWORD *)(v156 + 736);
        v158 = DXGGLOBAL::GetGlobal();
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v157 + 8) + 920LL))(
          *(_QWORD *)(v156 + 744),
          (__int64)v158 + 1296);
      }
      if ( (*((_DWORD *)this + 111) & 1) != 0 )
        *((_QWORD *)DXGGLOBAL::GetGlobal() + 123) = *(_QWORD *)((char *)this + 412);
      if ( (int)RenderCore < 0 )
        return (unsigned int)RenderCore;
      if ( v174 <= 1 )
        goto LABEL_426;
      v159 = *((_DWORD *)this + 105);
      if ( v159 == 4318 )
      {
        v160 = DXGGLOBAL::GetGlobal();
        v161 = 7LL;
      }
      else
      {
        if ( v159 != 4098 )
        {
LABEL_426:
          v162 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::RecordFeatureUsageWddmVersion(v162, this);
          return (unsigned int)RenderCore;
        }
        v160 = DXGGLOBAL::GetGlobal();
        v161 = 8LL;
      }
      DXGGLOBAL::RecordFeatureUsage(v160, v161, 1LL);
      goto LABEL_426;
    }
LABEL_382:
    *((_QWORD *)this + 114) = 0LL;
    goto LABEL_383;
  }
  return result;
}
