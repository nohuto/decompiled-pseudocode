/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x14002133C (DpiGetSysMmAdapterFromDevice.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x14004039C (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x1400403CC (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F168 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140054D34 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1400659DC (-Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x140074024 (-CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ.c)
 *     DpiFdoSetFeatureDatabaseDxgAdapter @ 0x14007D7B4 (DpiFdoSetFeatureDatabaseDxgAdapter.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x14007E640 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ @ 0x1401848C0 (-GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x14018D974 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x14018DDAC (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x14018F6B8 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z @ 0x14018F7C4 (-GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ @ 0x140191FB0 (-InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x140192004 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x140192098 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x140192624 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x140192D58 (-InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ.c)
 *     ?QueryFeatureEnablement@DXGADAPTER@@AEAAXXZ @ 0x140193F14 (-QueryFeatureEnablement@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14019425C (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x140195B8C (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x14019C368 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1401D315C (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1401D34A8 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D6604 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D6D5C (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetAdapterInfo @ 0x140235D60 (DpiGetAdapterInfo.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBEC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1402FACA0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14035B368 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x14036B708 (DpiReadPnpRegistryValue.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1403E9430 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1403F56EC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?AcquireSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAKXZ @ 0x1403F700C (-AcquireSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAKXZ.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  struct _ERESOURCE *v6; // rax
  __int64 result; // rax
  NTSTATUS v8; // eax
  NTSTATUS LocallyUniqueId; // ebx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v11; // rax
  const wchar_t *v12; // r9
  __int64 v13; // rdx
  struct _ERESOURCE *v14; // rax
  NTSTATUS v15; // eax
  int v16; // eax
  __int64 v17; // r15
  int AdapterInfo; // eax
  struct _LUID *v19; // rdx
  int (__fastcall *v20)(_QWORD, __int128 *); // rax
  unsigned __int8 v21; // bl
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  const wchar_t *v25; // r9
  unsigned int v26; // eax
  const struct _GUID *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  const wchar_t *v31; // r9
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 v38; // rax
  unsigned int v39; // r13d
  unsigned __int8 v40; // r8
  __int64 v41; // rax
  const wchar_t *v42; // r9
  int v43; // eax
  int v44; // ecx
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // r15
  int v48; // eax
  int v49; // ecx
  __int64 v50; // rcx
  int v51; // eax
  int v52; // ecx
  char v53; // al
  int v54; // eax
  unsigned int v55; // ebx
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  char v58; // r12
  unsigned int v59; // eax
  unsigned int v60; // r8d
  __int64 v61; // r9
  UINT PhysicalAdapterCapsSizeFromDdiVersion; // r15d
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  DXGGLOBAL *Global; // rax
  __int64 v68; // rcx
  unsigned int v69; // r8d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // eax
  __int64 RenderCore; // rdi
  unsigned int v80; // edx
  __int64 v81; // r8
  __int64 v82; // r13
  __int64 v83; // r12
  int v84; // ecx
  int v85; // edi
  int v86; // ebx
  char IsGpuVaIoMmuGlobalSupported; // al
  const wchar_t *v88; // r9
  int v89; // eax
  char v90; // al
  int v91; // eax
  __int64 v92; // rax
  int v93; // eax
  int v94; // ecx
  int v95; // eax
  struct _DXGK_ADAPTER_CAPS *v96; // r12
  char v97; // cl
  char v98; // dl
  char v99; // al
  char v100; // r8
  char v101; // cl
  char v102; // dl
  char v103; // cl
  char v104; // al
  char v105; // al
  char v106; // cl
  unsigned int v107; // eax
  int v108; // ecx
  __int64 v109; // rax
  struct DXGGLOBAL *v110; // rax
  struct DXGGLOBAL *v111; // rax
  struct DXGGLOBAL *v112; // rax
  char v113; // r9
  char v114; // r8
  unsigned int v115; // ecx
  unsigned int v116; // edx
  __int64 v117; // rax
  __int64 v118; // rax
  unsigned int v119; // ebx
  DXGGLOBAL *v120; // rax
  int v121; // eax
  int v122; // ecx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  int v128; // eax
  char v129; // cl
  int v130; // eax
  __int64 v131; // rax
  char *v132; // rbx
  int DisplayCore; // eax
  bool v134; // zf
  char v135; // cl
  char v136; // dl
  int v137; // eax
  char v138; // al
  __int64 v139; // rdx
  DXGADAPTER *v140; // rcx
  int v141; // eax
  __int64 v142; // rax
  bool IsBddFallbackDriver; // cf
  int v144; // eax
  DXGGLOBAL *v145; // rax
  int v146; // eax
  __int64 v147; // rax
  int v148; // eax
  DXGADAPTER *v149; // rcx
  __int64 v150; // r14
  __int64 v151; // rbx
  struct DXGGLOBAL *v152; // rax
  int v153; // eax
  struct DXGGLOBAL *v154; // rax
  __int64 v155; // rdx
  DXGGLOBAL *v156; // rax
  __int64 v157; // [rsp+20h] [rbp-E0h]
  __int64 v158; // [rsp+28h] [rbp-D8h]
  __int64 v159; // [rsp+28h] [rbp-D8h]
  __int64 v160; // [rsp+30h] [rbp-D0h]
  unsigned int v161; // [rsp+50h] [rbp-B0h] BYREF
  bool IsAdapterSessionized; // [rsp+54h] [rbp-ACh]
  unsigned int v163; // [rsp+58h] [rbp-A8h] BYREF
  int v164; // [rsp+5Ch] [rbp-A4h] BYREF
  int v165; // [rsp+60h] [rbp-A0h] BYREF
  int v166; // [rsp+64h] [rbp-9Ch] BYREF
  int v167; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v168; // [rsp+6Ch] [rbp-94h]
  __int64 v169; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v170; // [rsp+78h] [rbp-88h]
  __int64 v171; // [rsp+80h] [rbp-80h] BYREF
  _DXGKARG_QUERYADAPTERINFO v172; // [rsp+88h] [rbp-78h] BYREF
  struct _DXGK_ADAPTER_CAPS *v173[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v174; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v175; // [rsp+F8h] [rbp-8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v176; // [rsp+128h] [rbp+28h] BYREF
  __int128 v177; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v178[2]; // [rsp+168h] [rbp+68h] BYREF

  v173[0] = a3;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7008;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      7008LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 50) )
    return 3221225485LL;
  v6 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 21) = v6;
  if ( !v6 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 7026;
    return 3221225495LL;
  }
  v8 = ExInitializeResourceLite(v6);
  LocallyUniqueId = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v8);
    WdLogGlobalForLineNumber = 7037;
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
    v11 = 7058LL;
    v12 = L"ZwAllocateLocallyUniqueId failed";
LABEL_12:
    v13 = 262145LL;
LABEL_13:
    WdLogGlobalForLineNumber = v11;
    DxgkLogInternalTriageEvent(0LL, v13, 0xFFFFFFFFLL, v12, v11, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)LocallyUniqueId;
  }
  v14 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 35) = v14;
  if ( !v14 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 7071;
    return 3221225495LL;
  }
  v15 = ExInitializeResourceLite(v14);
  LocallyUniqueId = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v15);
    WdLogGlobalForLineNumber = 7082;
    return (unsigned int)LocallyUniqueId;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v169 = 0LL;
  *((_QWORD *)this + 5) = -1LL;
  if ( *((_BYTE *)DeviceObject->DeviceExtension + 481) )
  {
    v16 = DXGADAPTER::InitializeParavirtualizedAdapter(this, (struct DRIVER_WORKAROUNDS *)&v169);
    v17 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL, v16);
      WdLogGlobalForLineNumber = 7105;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"InitializeParavirtualizedAdapter failed: 0x%I64x",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v17;
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
      WdLogGlobalForLineNumber = 7122;
      return (unsigned int)LocallyUniqueId;
    }
  }
  DpiFdoSetFeatureDatabaseDxgAdapter(*((_QWORD *)this + 27), this);
  *(_QWORD *)v178 = 0LL;
  v20 = (int (__fastcall *)(_QWORD, __int128 *))*((_QWORD *)this + 296);
  v177 = 0LL;
  if ( v20 && v20(*((_QWORD *)this + 287), &v177) >= 0 )
  {
    *(_QWORD *)((char *)this + 4828) = *((_QWORD *)&v177 + 1);
    *((_DWORD *)this + 1209) = v178[0];
  }
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(this, v19, v178, 0LL);
  v21 = IsAdapterSessionized;
  if ( IsAdapterSessionized )
  {
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *(DXGSESSIONMGR **)(*((_QWORD *)this + 2) + 976LL),
                                       v178[0]);
    if ( !SessionDataForSpecifiedSession
      || (v23 = DXGSESSIONDATA::AcquireSessionAdapterOrdinal(SessionDataForSpecifiedSession),
          *((_DWORD *)this + 61) = v23,
          v23 == -1) )
    {
      WdLogSingleEntry2(2LL, v178[0], -1073741801LL);
      v24 = v178[0];
      v25 = L"Exceeded the maximum number of sessionized adapter in session 0x%I64x, returning 0x%I64x.";
      v158 = -1073741801LL;
      WdLogGlobalForLineNumber = 7155;
LABEL_31:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v25, v24, v158, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
  }
  v26 = DXGGLOBAL::AcquireAdapterOrdinal(*((DXGGLOBAL **)this + 2), v21);
  *((_DWORD *)this + 60) = v26;
  if ( v26 == -1 )
    return 3221225495LL;
  if ( (*((_DWORD *)this + 111) & 0x200) != 0 )
    *((_BYTE *)DXGGLOBAL::GetGlobal() + 304880) = 1;
  v30 = *((_DWORD *)this + 111);
  if ( (v30 & 8) != 0 && (v30 & 0x10) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7179;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!(IsSoftGPU() && IsWarpAdapter())",
      7179LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + 57) )
  {
    WdLogSingleEntry0(2LL);
    v31 = L"Miniport did not provide required DDIs";
    v159 = 0LL;
    v157 = 7186LL;
    WdLogGlobalForLineNumber = 7186;
LABEL_40:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v31, v157, v159, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 74) )
    *((_QWORD *)this + 74) = DXGADAPTER::DefaultDdiEscape;
  if ( !*((_QWORD *)this + 135) )
    *((_QWORD *)this + 135) = W32kStub_GreSfmOpenTokenEvent;
  v32 = DXGADAPTER::CallDriverQueryInterface((PDEVICE_OBJECT *)this, v27, v28, v29, (char *)this + 2096);
  v37 = v32;
  if ( v32 >= 0 )
  {
    if ( *((_WORD *)this + 1049) >= 4u )
      goto LABEL_49;
  }
  else
  {
    v38 = WdLogNewEntry5_WdTrace(v34, v33, v35, v36);
    *(_QWORD *)(v38 + 24) = this;
    *(_QWORD *)(v38 + 32) = v37;
    WdLogGlobalForLineNumber = 7217;
  }
  memset((char *)this + 2096, 0, 0xB8uLL);
LABEL_49:
  v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL);
  v170 = v39;
  *((_DWORD *)this + 570) = v39;
  if ( v39 < 0x7000 )
  {
    if ( v39 < 0x6002 )
      goto LABEL_58;
  }
  else
  {
    if ( !*((_DWORD *)this + 464) )
      goto LABEL_58;
    if ( *((_DWORD *)this + 465) )
    {
      v40 = 0;
LABEL_57:
      DXGADAPTER::SetModeBehavior(this, v33, v40);
      goto LABEL_58;
    }
  }
  if ( *((_DWORD *)this + 464) && *((_DWORD *)this + 465) )
  {
    v40 = 1;
    goto LABEL_57;
  }
LABEL_58:
  if ( v39 - 20480 <= 5 )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7261LL;
    v42 = L"Cannot load an M1 threshold driver on later builds.";
LABEL_60:
    WdLogGlobalForLineNumber = v41;
LABEL_61:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v42, v41, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  *(_QWORD *)&v172.InputDataSize = 0LL;
  v172.pOutputData = (char *)this + 2400;
  *(_QWORD *)&v172.Type = 1LL;
  *(_QWORD *)&v172.Flags.0 = 0LL;
  HIDWORD(v172.hKmdProcessHandle) = 0;
  v172.pInputData = 0LL;
  v172.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v39);
  if ( !v172.OutputDataSize )
    return 3221225485LL;
  v43 = DXGADAPTER::DdiQueryAdapterInfo(this, &v172);
  v17 = v43;
  if ( v43 < 0 )
  {
    WdLogSingleEntry1(2LL, v43);
    WdLogGlobalForLineNumber = 7284;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Miniport failed DdiQueryAdapterInfo(DXGKQAITYPE_DRIVERCAPS) with status 0x%I64x",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v17;
  }
  v44 = *((_DWORD *)this + 684);
  if ( v44 <= 9472 )
  {
    if ( v44 < 4864 )
    {
      v47 = 0LL;
      if ( *((_QWORD *)this + 104) )
      {
        v46 = 1300;
      }
      else if ( v44 == 4608 )
      {
        v46 = 1200;
      }
      else if ( !*((_QWORD *)this + 100) || (v46 = 1105, (*((_DWORD *)this + 613) & 4) == 0) )
      {
        v46 = 1000;
      }
      *((_DWORD *)this + 751) = v46;
      goto LABEL_79;
    }
  }
  else if ( *((_DWORD *)DeviceObject->DeviceExtension + 687) <= 0xA00Bu )
  {
    WdLogSingleEntry1(2LL, *((int *)this + 684));
    v45 = *((int *)this + 684);
    WdLogGlobalForLineNumber = 7290;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Miniport returned incorrect WDDMVersion: 0x%I64x",
      v45,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v46 = DxgkConvertWddmVersionToD3DKMTDriverVersion(v44);
  *((_DWORD *)this + 751) = v46;
  v47 = 0LL;
LABEL_79:
  v48 = *((_DWORD *)this + 744);
  if ( v46 >= 2600 )
  {
    v49 = *((_DWORD *)this + 111);
    if ( (v48 & 8) != 0 )
    {
      *((_DWORD *)this + 111) = v49 | 0x80000;
    }
    else if ( (v49 & 0x80000) != 0 && v39 >= 0x11002 )
    {
      WdLogSingleEntry0(2LL);
      v41 = 7344LL;
      v42 = L"MiscCaps.ComputeOnly is not set, but the device belongs to the ComputeAccelerator class";
      goto LABEL_60;
    }
  }
  else
  {
    v48 &= ~8u;
    *((_DWORD *)this + 744) = v48;
  }
  if ( *((_BYTE *)this + 1784) && (v48 & 0xC) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7351;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"UMD name is missing and device is not compute only",
      7351LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225524LL;
  }
  v50 = *((_QWORD *)this + 27);
  v164 = 0;
  v51 = DpiReadPnpRegistryValue(v50, L"ACGSupported", &v164, 4LL, 2);
  v52 = v164;
  if ( v51 < 0 )
    v52 = 0;
  v164 = v52;
  if ( v52 || (v53 = 0, *((int *)this + 751) >= 2200) )
    v53 = 1;
  *((_BYTE *)this + 212) = v53;
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
  else if ( v39 >= 0x5023 )
  {
    if ( g_bCreateParavirtualizedGpu )
    {
      v54 = *((_DWORD *)this + 111);
      if ( (v54 & 4) == 0 && (v54 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 617) |= 0x400u;
    }
  }
  v168 = *((_DWORD *)this + 74);
  v55 = v168;
  v56 = 344LL * v168;
  if ( !is_mul_ok(v168, 0x158uLL) )
    v56 = -1LL;
  v57 = operator new[](v56, 0x4B677844u, 64LL);
  *((_QWORD *)this + 374) = v57;
  if ( !v57 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 7410;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGK_PHYSICALADAPTERINFO",
      7410LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v58 = 0;
  if ( *((int *)this + 684) < 0x2000 || v39 < 0x5005 )
    goto LABEL_147;
  *((_DWORD *)this + 750) = 0;
  v59 = 0;
  v161 = 0;
  if ( v55 )
  {
    PhysicalAdapterCapsSizeFromDdiVersion = GetPhysicalAdapterCapsSizeFromDdiVersion(v39);
    while ( 1 )
    {
      v174.pInputData = &v161;
      *(_QWORD *)&v174.Type = 15LL;
      *(_QWORD *)&v174.InputDataSize = 4LL;
      v174.pOutputData = (void *)(v61 + 344LL * v60);
      *(_QWORD *)&v174.Flags.0 = 0LL;
      HIDWORD(v174.hKmdProcessHandle) = 0;
      v174.OutputDataSize = PhysicalAdapterCapsSizeFromDdiVersion;
      v63 = DXGADAPTER::DdiQueryAdapterInfo(this, &v174);
      if ( v63 < 0 )
        break;
      if ( v39 >= 0xC003 )
      {
        v64 = *((_QWORD *)this + 374);
        v65 = 344LL * v161;
        if ( (*(_DWORD *)(v65 + v64 + 16) & 0x20) != 0 )
        {
          v66 = *(unsigned int *)(v65 + v64 + 24);
          if ( (unsigned int)v66 >= *(unsigned __int16 *)(v65 + v64) )
          {
            WdLogSingleEntry3(2LL, this, v66, *(unsigned __int16 *)(v65 + v64));
            v77 = *((_QWORD *)this + 374);
            WdLogGlobalForLineNumber = 7455;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Adapter 0x%I64x: VirtualCopyEngineSupported but node index is invalid (VirtualCopyIndex:%u, NumExecutionNodes:%u)",
              (__int64)this,
              *(unsigned int *)(344LL * v161 + v77 + 24),
              *(unsigned __int16 *)(344LL * v161 + v77),
              0LL,
              0LL);
            return 3221225485LL;
          }
          if ( (*((_DWORD *)this + 617) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(2LL, this);
            WdLogGlobalForLineNumber = 7462;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
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
        v68 = *((_QWORD *)this + 27);
        v165 = 0;
        v166 = 0;
        if ( (int)DpiReadPnpRegistryValue(v68, L"DxgkGpuVaIommuRequired", &v165, 4LL, 2) >= 0 )
          *(_DWORD *)(344LL * v161 + *((_QWORD *)this + 374) + 16) = (v165 != 0 ? 0x40 : 0) | *(_DWORD *)(344LL * v161 + *((_QWORD *)this + 374) + 16) & 0xFFFFFFBF;
        if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)this + 27), L"DxgkGpuVaIommuGlobalSupported", &v166, 4LL, 2) >= 0 )
          *(_DWORD *)(344LL * v161 + *((_QWORD *)this + 374) + 16) = (v166 != 0 ? 0x80 : 0) | *(_DWORD *)(344LL * v161 + *((_QWORD *)this + 374) + 16) & 0xFFFFFF7F;
      }
      v69 = v161;
      v70 = *((_QWORD *)this + 374);
      v71 = 344LL * v161;
      if ( (*(_DWORD *)(v71 + v70 + 16) & 2) != 0 )
      {
        *(_BYTE *)(v71 + v70 + 49) = 1;
        v69 = v161;
      }
      v72 = *((_QWORD *)this + 374);
      v73 = 344LL * v69;
      if ( (*(_DWORD *)(v73 + v72 + 16) & 0x40) != 0 )
      {
        if ( !DXGADAPTER::IsGpuVaIoMmuSupported(this) )
        {
          WdLogSingleEntry1(2LL, this);
          WdLogGlobalForLineNumber = 7493;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: GpuVaIommuRequired is set for a physical adapter, but not in IOMMU_CAPS",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        *(_BYTE *)(v73 + v72 + 49) = 1;
        *(_BYTE *)(344LL * v161 + *((_QWORD *)this + 374) + 48) = 1;
        v69 = v161;
      }
      v74 = *((_QWORD *)this + 374);
      v75 = 344LL * v69;
      if ( (*(_DWORD *)(v75 + v74 + 16) & 0x80u) != 0 )
      {
        if ( !DXGADAPTER::IsGpuVaIoMmuGlobalSupported(this) )
        {
          WdLogSingleEntry1(2LL, this);
          WdLogGlobalForLineNumber = 7504;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Adapter 0x%I64x: GpuVaIommuGlobalRequired is set for a physical adapter, but not in IOMMU_CAPS",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        *(_BYTE *)(v75 + v74 + 49) = 1;
        *(_BYTE *)(344LL * v161 + *((_QWORD *)this + 374) + 48) = 1;
        v69 = v161;
      }
      v61 = *((_QWORD *)this + 374);
      v55 = v168;
      v76 = v69;
      v60 = v69 + 1;
      v59 = *(unsigned __int16 *)(344 * v76 + v61) + *((_DWORD *)this + 750);
      v161 = v60;
      *((_DWORD *)this + 750) = v59;
      if ( v60 >= v55 )
        goto LABEL_130;
    }
    WdLogSingleEntry1(4LL, v63);
    WdLogGlobalForLineNumber = 7437;
    v58 = 1;
  }
  else
  {
LABEL_130:
    if ( *((int *)this + 751) <= 2400 && v59 > 0x40 )
    {
      WdLogSingleEntry3(2LL, this, 64LL, v59);
      v160 = *((unsigned int *)this + 750);
      WdLogGlobalForLineNumber = 7522;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Adapter 0x%I64x: Exceeded maximum number of %I64d nodes on pre-WDDM 2.5 adapter. Total node count: %I64d",
        (__int64)this,
        64LL,
        v160,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)this + 616) & 1) == 0 )
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 7527;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
  v47 = 0LL;
  if ( (*((_DWORD *)this + 617) & 0x800) != 0 )
  {
    v163 = 0;
    if ( v55 )
    {
      while ( 1 )
      {
        v171 = 0LL;
        v172.pInputData = &v163;
        v172.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
        v172.pOutputData = &v171;
        v172.InputDataSize = 4;
        v172.OutputDataSize = 8;
        v78 = DXGADAPTER::DdiQueryAdapterInfo(this, &v172);
        RenderCore = v78;
        if ( v78 < 0 )
          break;
        if ( (v171 & 0xFFF) != 0 )
        {
          WdLogSingleEntry1(2LL, v171);
          v41 = v171;
          v42 = L"Frame buffer reserve size must be a multiple of PAGE_SIZE. Size=%I64u";
          WdLogGlobalForLineNumber = 7552;
          goto LABEL_61;
        }
        *(_QWORD *)(344LL * v163 + *((_QWORD *)this + 374) + 56) = v171;
        v80 = v163;
        v81 = *(_QWORD *)(344LL * v163 + *((_QWORD *)this + 374) + 56);
        if ( v81 )
        {
          result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v163, v81);
          if ( (int)result < 0 )
            return result;
          v80 = v163;
        }
        v163 = v80 + 1;
        if ( v80 + 1 >= v55 )
          goto LABEL_146;
      }
      WdLogSingleEntry1(2LL, v78);
      v88 = L"Failed to query frame buffer save area size. Status 0x%I64x";
      WdLogGlobalForLineNumber = 7546;
      goto LABEL_160;
    }
  }
LABEL_146:
  if ( v58 )
  {
LABEL_147:
    if ( v55 )
    {
      v82 = v55;
      do
      {
        v83 = *((_QWORD *)this + 374);
        *(_WORD *)(v47 + v83) = *((_WORD *)this + 1238);
        v84 = *(_DWORD *)(v47 + v83 + 16) ^ ((unsigned __int8)*(_DWORD *)(v47 + v83 + 16) ^ (unsigned __int8)(*((_DWORD *)this + 617) >> 7)) & 1;
        *(_DWORD *)(v47 + v83 + 16) = v84;
        v85 = v84 ^ (v84 ^ (*((_DWORD *)this + 617) >> 5)) & 2;
        *(_DWORD *)(v47 + v83 + 16) = v85;
        v86 = v85 ^ ((unsigned __int8)v85 ^ (DXGADAPTER::IsGpuVaIoMmuSupported(this) << 6)) & 0x40;
        *(_DWORD *)(v47 + v83 + 16) = v86;
        IsGpuVaIoMmuGlobalSupported = DXGADAPTER::IsGpuVaIoMmuGlobalSupported(this);
        *(_DWORD *)(v47 + v83 + 16) = v86 ^ ((unsigned __int8)v86 ^ (unsigned __int8)(IsGpuVaIoMmuGlobalSupported << 7)) & 0x80;
        *(_WORD *)(v47 + v83 + 2) = *((_WORD *)this + 1236);
        *(_QWORD *)(v47 + v83 + 8) = *((_QWORD *)this + 27);
        if ( (((unsigned __int8)v86 ^ ((unsigned __int8)v86 ^ (unsigned __int8)(IsGpuVaIoMmuGlobalSupported << 7)) & 0x80) & 0xC2) != 0 )
          *(_WORD *)(v47 + v83 + 48) = 257;
        v47 += 344LL;
        --v82;
      }
      while ( v82 );
      v39 = v170;
    }
  }
  if ( *((int *)this + 751) >= 2400 )
  {
    if ( *((_DWORD *)this + 744) >= 0x200u )
    {
      WdLogSingleEntry0(2LL);
      v41 = 7606LL;
      v42 = L"Driver should not set MiscCaps.Reserved bits";
      goto LABEL_60;
    }
    *((_BYTE *)this + 3057) = *((_BYTE *)this + 2976) & 1;
  }
  v89 = *((_DWORD *)this + 744);
  if ( (v89 & 0x10) != 0 && !*((_QWORD *)this + 175) )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7616LL;
    v42 = L"Driver sets IndependentVidPnVSyncControl cap but does not support DxgkDdiControlInterrupt3, returning failure";
    goto LABEL_60;
  }
  if ( *((_BYTE *)this + 3220) )
    *((_DWORD *)this + 744) = v89 & 0xFFFFFFEF;
  if ( v39 >= 0x3001 )
  {
    v91 = *((_DWORD *)this + 684);
    if ( v91 != 4096
      && v91 != 4608
      && v91 != 4864
      && v91 != 0x2000
      && v91 != 8448
      && v91 != 8704
      && v91 != 8960
      && v91 != 9216
      && v91 != 9472
      && v91 != 9728
      && v91 != 9984
      && v91 != 10240
      && v91 != 10496
      && v91 != 12288
      && v91 != 12544
      && v91 != 12800 )
    {
      WdLogSingleEntry1(2LL, *((int *)this + 684));
      v92 = *((int *)this + 684);
      v31 = L"Miniport returned unknown WDDM version 0x%I64x";
      v159 = 0LL;
      WdLogGlobalForLineNumber = 7674;
LABEL_203:
      v157 = v92;
      goto LABEL_40;
    }
  }
  else
  {
    *((_DWORD *)this + 684) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 920) || (v90 = 1, (*((_DWORD *)this + 111) & 8) != 0) )
    v90 = 0;
  *((_BYTE *)this + 3016) = v90;
  if ( v90 )
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
      v41 = 7700LL;
      v42 = L"Driver reports WDDM version less than 1.2 but implements some WDDM 1.2 features.";
      goto LABEL_60;
    }
    v93 = *((_DWORD *)this + 684);
    if ( v93 >= 4864 )
    {
      if ( v93 >= 0x2000 )
        goto LABEL_213;
    }
    else if ( (*((_DWORD *)this + 615) & 0x10) != 0
           || (*((_DWORD *)this + 617) & 0x10) != 0
           || *((_BYTE *)this + 2943)
           || *((_DWORD *)this + 736) )
    {
      WdLogSingleEntry0(2LL);
      v41 = 7715LL;
      v42 = L"Driver reports WDDM version less than 1.3 but implements some WDDM 1.3 features.";
      goto LABEL_60;
    }
    if ( *((_BYTE *)this + 2948) )
    {
      WdLogSingleEntry0(2LL);
      v41 = 7743LL;
      v42 = L"Pre-WDDM 2.0 driver should not set the HybridIntegrated cap.";
      goto LABEL_60;
    }
  }
LABEL_213:
  v94 = *((_DWORD *)this + 617);
  if ( (v94 & 0x10000) != 0 )
  {
    if ( (*((_DWORD *)this + 617) & 0x8010) != 0x8010 )
    {
      WdLogSingleEntry0(2LL);
      v41 = 7757LL;
      v42 = L"Driver reports CrossAdapterResourceScanout but does not report lower tier support.";
      goto LABEL_60;
    }
  }
  else if ( (v94 & 0x8000) != 0 && (v94 & 0x10) == 0 )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7765LL;
    v42 = L"Driver reports CrossAdapterResourceTexture but does not report lower tier support.";
    goto LABEL_60;
  }
  if ( v39 >= 0x4000 )
  {
    if ( v39 >= 0x5011 )
      goto LABEL_226;
  }
  else
  {
    v94 &= ~0x10u;
    *((_BYTE *)this + 2943) = 0;
    *((_DWORD *)this + 617) = v94;
  }
  v95 = *((_DWORD *)this + 111);
  if ( (v95 & 1) != 0 && (v94 & 0x10) != 0 && (v95 & 0x1000) != 0 )
    *((_BYTE *)this + 2948) = 1;
LABEL_226:
  v96 = v173[0];
  v97 = *(_BYTE *)v173[0] ^ (*(_BYTE *)v173[0] ^ (4 * *((_BYTE *)this + 2936))) & 4;
  *(_BYTE *)v173[0] = v97;
  v98 = v97 & 0xF7 | (*((_BYTE *)this + 2942) != 0 ? 8 : 0);
  *(_BYTE *)v96 = v98;
  v99 = v98 ^ (v98 ^ (32 * (*((_DWORD *)this + 617) >> 4))) & 0x20;
  *(_BYTE *)v96 = v99;
  v100 = v99 ^ (v99 ^ (*((_BYTE *)this + 2943) << 6)) & 0x40;
  *(_BYTE *)v96 = v100;
  *((_DWORD *)v96 + 1) = *((_DWORD *)this + 609);
  v101 = *((_BYTE *)v96 + 1) ^ (*((_BYTE *)this + 2948) ^ *((_BYTE *)v96 + 1)) & 1;
  *((_BYTE *)v96 + 1) = v101;
  *((_DWORD *)v96 + 2) = *((_DWORD *)this + 684);
  v102 = v101 ^ (v101 ^ (32 * (*((_DWORD *)this + 744) >> 3))) & 0x20;
  v103 = v100 & 0xEF;
  *((_BYTE *)v96 + 1) = v102;
  *(_BYTE *)v96 = v100 & 0xEF;
  if ( v39 >= 0x5021 )
  {
    v103 = v100 ^ (v100 ^ (16 * *((_BYTE *)this + 2968))) & 0x10;
    *(_BYTE *)v96 = v103;
  }
  if ( *((_BYTE *)this + 209) )
    goto LABEL_259;
  if ( (v103 & 0x40) != 0 )
  {
    if ( v39 < 0x5005 && (*((_DWORD *)this + 464) || *((_DWORD *)this + 465)) )
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
      v41 = *((_QWORD *)this + 27);
      v42 = L"Driver reports device 0x%I64x is hybrid discrete device but it has VidPn source and target.";
      WdLogGlobalForLineNumber = 7828;
      goto LABEL_61;
    }
    v104 = v102 ^ (v102 ^ (2 * *((_BYTE *)this + 2971))) & 2;
    *((_BYTE *)v96 + 1) = v104;
    v105 = v104 & 1;
    goto LABEL_236;
  }
  v105 = v102 & 1;
  if ( (v102 & 1) != 0 )
  {
LABEL_236:
    if ( (v103 & 0x20) == 0 )
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
      v41 = *((_QWORD *)this + 27);
      v42 = L"Driver reports device 0x%I64x as hybrid device but does not support cross adapter resource.";
      WdLogGlobalForLineNumber = 7842;
      goto LABEL_61;
    }
  }
  v106 = v103 & 0x40;
  if ( v105 )
  {
    if ( v106 )
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
      v41 = *((_QWORD *)this + 27);
      v42 = L"Driver reports both HybridIntegrated and HybridDiscrete caps 0x%I64x";
      WdLogGlobalForLineNumber = 7849;
      goto LABEL_61;
    }
    if ( !*((_DWORD *)this + 465) )
    {
      WdLogSingleEntry1(2LL, *((_QWORD *)this + 27));
      v41 = *((_QWORD *)this + 27);
      v42 = L"Driver reports the HybridIntegrated cap, but the adapter has no outputs. 0x%I64x";
      WdLogGlobalForLineNumber = 7857;
      goto LABEL_61;
    }
  }
  if ( *((_BYTE *)this + 2938) && (!*((_QWORD *)this + 101) || !*((_QWORD *)this + 102) || !*((_QWORD *)this + 103)) )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7871LL;
    v42 = L"Driver reports SupportPerEngineTDR cap but does not fill in all of the required DDIs.";
    goto LABEL_60;
  }
  if ( (*((_DWORD *)this + 613) & 4) != 0 && !*((_QWORD *)this + 100) )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7878LL;
    v42 = L"Driver reports SupportKernelModeCommandBuffer cap but does not fill in the pfnRenderKm DDI.";
    goto LABEL_60;
  }
  if ( *((_BYTE *)this + 2941) && (!*((_QWORD *)this + 105) || !*((_QWORD *)this + 106)) )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7886LL;
    v42 = L"Driver reports SupportRuntimePowerManagement cap but does not fill in the pfnSetPowerComponentFState or pfnPow"
           "erRuntimeControlRequest DDI.";
    goto LABEL_60;
  }
  if ( v39 < 0x300C && *((_QWORD *)this + 105) && *((_QWORD *)this + 106) )
    *((_BYTE *)this + 2941) = 1;
LABEL_259:
  *((_WORD *)this + 1509) = 0;
  *((_BYTE *)this + 3020) = 0;
  if ( !*((_BYTE *)this + 2940) )
    goto LABEL_297;
  if ( v39 < 0x300B )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7908LL;
    v42 = L"Driver reports SupportMultiPlaneOverlay cap but it is not compiled with expected header files.";
    goto LABEL_60;
  }
  if ( v39 < 0x4000 )
  {
    *((_BYTE *)this + 3018) = 1;
    goto LABEL_279;
  }
  if ( v39 == 0x4000 )
  {
    *((_BYTE *)this + 3019) = 1;
    goto LABEL_279;
  }
  v107 = *((_DWORD *)this + 736);
  if ( !v107 )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7921LL;
    v42 = L"Driver reports SupportMultiPlaneOverlay cap but doesn't report any overlay planes or panel fitter.";
    goto LABEL_60;
  }
  if ( v107 <= 8 )
  {
    if ( v39 > 0x5000 )
      *((_BYTE *)this + 3020) = 1;
    goto LABEL_279;
  }
  v108 = *((_DWORD *)this + 684);
  if ( v108 < 8704 )
  {
    if ( v108 < 0x2000 || v107 != 10 )
    {
      WdLogSingleEntry0(2LL);
      v41 = 7944LL;
      goto LABEL_272;
    }
    *((_DWORD *)this + 736) = 8;
  }
  else if ( v107 > 0xA )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7931LL;
LABEL_272:
    v42 = L"Driver reports more than the supported number of overlay planes.";
    goto LABEL_60;
  }
LABEL_279:
  v109 = *((_QWORD *)this + 109);
  if ( !v109 && !*((_QWORD *)this + 125) && !*((_QWORD *)this + 129) )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7960LL;
LABEL_283:
    v42 = L"Driver reports SupportMultiPlaneOverlay cap but does not fill in all of the required DDIs.";
    goto LABEL_60;
  }
  if ( v39 > 0x4002 && !*((_QWORD *)this + 113) && !*((_QWORD *)this + 124) && !*((_QWORD *)this + 128) )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7972LL;
    goto LABEL_283;
  }
  if ( !*((_BYTE *)this + 2939) )
  {
    WdLogSingleEntry0(2LL);
    v41 = 7982LL;
    v42 = L"Driver reports SupportMultiPlaneOverlay cap but DirectFlip is not supported.";
    goto LABEL_60;
  }
  if ( v109 )
  {
    v110 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v110, 1LL, 1LL);
  }
  if ( *((_QWORD *)this + 125) )
  {
    v111 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v111, 2LL, 1LL);
  }
  if ( *((_QWORD *)this + 129) )
  {
    v112 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RecordFeatureUsage(v112, 3LL, 1LL);
  }
LABEL_297:
  v113 = *((_BYTE *)this + 209);
  *((_BYTE *)this + 3055) = 0;
  if ( v113 )
    goto LABEL_310;
  v114 = 0;
  if ( v39 >= 0x700A && *((int *)this + 684) >= 8704 && (!*((_QWORD *)this + 83) || *((_QWORD *)this + 146)) )
  {
    *((_BYTE *)this + 3055) = 1;
    v114 = 1;
  }
  if ( *((int *)this + 684) < 8960 )
  {
LABEL_310:
    *((_DWORD *)this + 612) &= 0xFFFFFFE3;
  }
  else
  {
    v115 = (*((_DWORD *)this + 612) >> 3) & 1;
    v116 = (*((_DWORD *)this + 612) >> 2) & 1;
    if ( v116 < v115 || v115 < ((*((_DWORD *)this + 612) >> 4) & 1u) )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      v118 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 8032;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Driver reports support higher level of colorSpaceTransform but not lower levels on device 0x%I64x, returning 0x%I64x.",
        v118,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( !v114 && v116 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 27), -1073741811LL);
      v117 = *((_QWORD *)this + 27);
      WdLogGlobalForLineNumber = 8040;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"ColorSpaceTransform is supported on the device 0x%I64x which does not have pfnSetTargetGamma, returning 0x%I64x.",
        v117,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 133LL) && !v113 )
  {
    v119 = *((_DWORD *)this + 684) >= 0x2000;
    v120 = DXGGLOBAL::GetGlobal();
    v121 = DXGGLOBAL::DeferredInitialize(v120, v119);
    RenderCore = v121;
    if ( v121 < 0 )
    {
      WdLogSingleEntry1(2LL, v121);
      v88 = L"DXGGLOBAL::DeferredInitialize failed (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 8067;
LABEL_160:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v88, RenderCore, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)RenderCore;
    }
  }
  DXGADAPTER::Config = 0;
  DXGADAPTER::ReadConfig(this, v96);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((_BYTE *)this + 209) )
  {
    **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFFDFFFF | v169 & 0x20000;
    **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFFE7FFF | v169 & 0x18000;
    **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFEFFFFF | v169 & 0x100000;
    **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFF3FFFF | v169 & 0xC0000;
    *((_BYTE *)this + 3021) = 0;
  }
  else if ( (*((_DWORD *)this + 111) & 0x10) != 0 && *((_BYTE *)this + 3071) )
  {
    *((_DWORD *)this + 617) |= 0x400u;
  }
  v122 = *((_DWORD *)this + 684);
  if ( v122 < 9216 )
    goto LABEL_323;
  v123 = *((_QWORD *)this + 167);
  if ( *((_QWORD *)this + 166) )
  {
    if ( v123 )
      goto LABEL_324;
LABEL_335:
    WdLogSingleEntry0(2LL);
    v41 = 8121LL;
    v42 = L"Driver cannot support only one of DdiQueryDiagnosticTypesSupport and DdiControlDiagnosticReporting.";
    goto LABEL_60;
  }
  if ( v123 )
    goto LABEL_335;
LABEL_323:
  *((_QWORD *)this + 166) = W32kStub_UserRemoveWindowedSwapChain;
  *((_QWORD *)this + 167) = DXGADAPTER::DefaultDdiControlDiagnosticReporting;
LABEL_324:
  if ( v122 >= 12800 && v39 >= 0x11001 )
  {
    memset(&v175, 0, 24);
    v175.Type = DXGKQAITYPE_POWERCOMPONENTINFO|0x20;
    *(_OWORD *)&v175.OutputDataSize = 0LL;
    v175.pOutputData = (char *)this + 5088;
    v175.OutputDataSize = 4;
    if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v175) < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v125, v124, v126, v127) + 24) = this;
      WdLogGlobalForLineNumber = 8136;
    }
  }
  v167 = 0;
  memset(&v176, 0, 24);
  v176.Type = DXGKQAITYPE_PHYSICALADAPTERCAPS|0x20;
  v176.pOutputData = &v167;
  *(_OWORD *)&v176.OutputDataSize = 0LL;
  v176.OutputDataSize = 4;
  v128 = DXGADAPTER::DdiQueryAdapterInfo(this, &v176);
  v129 = *((_BYTE *)this + 3072) & 0xFD;
  if ( v128 >= 0 )
    v129 |= 2 * (v167 & 1);
  *((_BYTE *)this + 3072) = v129;
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
        v41 = 8176LL;
        v42 = L"Driver reports NativeGpuFence cap when NativeFence feature is disabled, returning failure";
        goto LABEL_60;
      }
      v172.Type = DXGKQAITYPE_QUERYSEGMENT3|0x20;
      v172.pOutputData = (char *)this + 5032;
      v172.OutputDataSize = 56;
      v130 = DXGADAPTER::DdiQueryAdapterInfo(this, &v172);
      RenderCore = v130;
      if ( v130 < 0 )
      {
        WdLogSingleEntry1(2LL, v130);
        v88 = L"Failed to get DXGK_NATIVE_FENCE_CAPS. Status 0x%I64x";
        WdLogGlobalForLineNumber = 8187;
        goto LABEL_160;
      }
    }
    RenderCore = (int)ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 391);
    v131 = *((_QWORD *)this + 391);
    if ( (int)RenderCore < 0 )
    {
      if ( v131 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8199;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pRenderCore == NULL", 8199LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(2LL, this, RenderCore);
      WdLogGlobalForLineNumber = 8202;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create ADAPTER_RENDER on adapter 0x%I64x (Status = 0x%I64x).",
        (__int64)this,
        RenderCore,
        0LL,
        0LL,
        0LL);
      return (unsigned int)RenderCore;
    }
    if ( v131 )
    {
      if ( IsAdapterSessionized )
      {
        WdLogSingleEntry0(2LL);
        v31 = L"Render capable adapter should NOT be sessionized!";
        v92 = 8218LL;
        WdLogGlobalForLineNumber = 8218;
        v159 = 0LL;
        goto LABEL_203;
      }
      if ( (*((_DWORD *)this + 744) & 0xC) == 0 )
        *((_BYTE *)this + 3072) |= 1u;
    }
    v132 = (char *)this + 3120;
    DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 390);
    RenderCore = DisplayCore;
    if ( DisplayCore < 0 )
    {
      if ( *(_QWORD *)v132 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8233;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pDisplayCore == NULL", 8233LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(2LL, this, RenderCore);
      WdLogGlobalForLineNumber = 8236;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
      v134 = *(_QWORD *)v132 == 0LL;
    }
    else
    {
      v134 = *(_QWORD *)v132 == 0LL;
      if ( !*(_QWORD *)v132 )
      {
        WdLogSingleEntry2(2LL, this, -1073741735LL);
        v31 = L"Current adapter 0x%I64x does not have display or render capabilities (Status = 0x%I64x).";
        v159 = -1073741735LL;
        v157 = (__int64)this;
        WdLogGlobalForLineNumber = 8249;
        goto LABEL_40;
      }
    }
    v135 = *(_BYTE *)v96 & 0xFE | !v134;
    *(_BYTE *)v96 = v135;
    v136 = v135 & 0xFD | (*((_QWORD *)this + 391) != 0LL ? 2 : 0);
    *(_BYTE *)v96 = v136;
    if ( *(_QWORD *)v132 )
      v137 = *(_DWORD *)(*(_QWORD *)v132 + 24LL);
    else
      LOBYTE(v137) = 0;
    v138 = v136 & 0x7F | ((_BYTE)v137 << 7);
    *(_BYTE *)v96 = v138;
    if ( (v138 & 1) != 0 )
      *((_BYTE *)v96 + 1) = *((_BYTE *)v96 + 1) & 0xFB | (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0);
    else
      *((_BYTE *)v96 + 1) &= ~4u;
    if ( !*((_QWORD *)this + 391) )
      *((_DWORD *)this + 613) |= 1u;
    if ( DXGADAPTER::IsDxgmms2(this) )
    {
      v141 = *((_DWORD *)this + 111);
      if ( (v141 & 4) == 0
        && (v141 & 8) == 0
        && v139
        && v39 >= 0x5008
        && (!*((_QWORD *)this + 114) || !*((_QWORD *)this + 126)) )
      {
        WdLogSingleEntry0(2LL);
        v41 = 8290LL;
        v42 = L"Driver is compiled against DXGKDDI_INTERFACE_VERSION_WDDM2_0_M2_2_1 or greater, but does not fill in the p"
               "fnCalibrateGpuClock or pfnSetStablePowerState DDI.";
        goto LABEL_60;
      }
    }
    if ( *((_BYTE *)this + 3016) && DXGADAPTER::IsFullWDDMAdapter(v140) && *((int *)this + 684) >= 4608 )
    {
      if ( !*((_BYTE *)this + 2939) )
      {
        WdLogSingleEntry0(2LL);
        v41 = 8305LL;
        v42 = L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 full adapter features.";
        goto LABEL_60;
      }
    }
    else if ( !*((_BYTE *)this + 2939) )
    {
      goto LABEL_381;
    }
    if ( *((_BYTE *)this + 209) )
      goto LABEL_382;
    v142 = *((_QWORD *)this + 391);
    if ( !v142
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v142 + 760) + 8LL) + 656LL))(*(_QWORD *)(v142 + 768)) )
    {
      *(_WORD *)((char *)this + 2939) = 0;
    }
LABEL_381:
    if ( !*((_BYTE *)this + 209) )
    {
LABEL_383:
      IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
      v144 = *((_DWORD *)this + 111);
      *((_DWORD *)this + 50) = IsBddFallbackDriver ? 3 : 1;
      if ( (v144 & 0x10) != 0 && !*((_QWORD *)this + 390) )
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v173);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v173);
        if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 123) )
        {
          WdLogSingleEntry2(2LL, this, -1073741735LL);
          WdLogGlobalForLineNumber = 8355;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
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
          v145 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::SetWarpAdapter(v145, this);
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v173);
      }
      if ( *((_BYTE *)this + 209) || (v146 = DXGADAPTER::InitializePowerManagement(this), RenderCore = v146, v146 >= 0) )
      {
        if ( *((_BYTE *)this + 3016) )
        {
          if ( *((int *)this + 684) >= 4864 )
          {
            if ( DXGADAPTER::IsFullWDDMAdapter(this) )
            {
              v148 = *((_DWORD *)this + 111);
              if ( (v148 & 4) == 0 && (v148 & 0x20) == 0 && (*((_DWORD *)this + 615) & 0x10) == 0 )
              {
                WdLogSingleEntry0(2LL);
                v41 = 8386LL;
                v42 = L"WDDM 1.3 driver must support independent flip.";
                goto LABEL_60;
              }
            }
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, this, v146);
        WdLogGlobalForLineNumber = 8373;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
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
      if ( v39 >= 0xA008 )
        *((_BYTE *)this + 3058) = 1;
      v147 = operator new(0x28uLL, 0x4B677844u, 64LL);
      if ( v147 )
      {
        *(_OWORD *)v147 = 0LL;
        *(_OWORD *)(v147 + 16) = 0LL;
        *(_QWORD *)(v147 + 32) = 0LL;
      }
      else
      {
        v147 = 0LL;
      }
      *((_QWORD *)this + 621) = v147;
      if ( !v147 )
      {
        WdLogSingleEntry0(2LL);
        v25 = L"Failed to allocate MockDriverState object";
        v24 = 8424LL;
        WdLogGlobalForLineNumber = 8424;
        v158 = 0LL;
        goto LABEL_31;
      }
      LocallyUniqueId = MOCKDRIVERSTATE::Initialize((MOCKDRIVERSTATE *)v147, this);
      if ( LocallyUniqueId < 0 )
      {
        WdLogSingleEntry0(2LL);
        v11 = 8431LL;
        v12 = L"Failed to initialize MockDriverState object";
        v13 = 0x40000LL;
        goto LABEL_13;
      }
      *((_BYTE *)this + 4976) = 0;
      LocallyUniqueId = DXGADAPTER::InitializeVSyncPhaseState(this);
      if ( LocallyUniqueId < 0 )
      {
        WdLogSingleEntry0(6LL);
        v11 = 8444LL;
        v12 = L"Failed to allocate VSync Phase Timer state";
        goto LABEL_12;
      }
      if ( (int)DXGADAPTER::InitializeCABCStateV2(v149) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 8459;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to initialize CABC State",
          8459LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v150 = *((_QWORD *)this + 391);
      if ( v150 && !*((_BYTE *)this + 209) )
      {
        v151 = *(_QWORD *)(v150 + 736);
        v152 = DXGGLOBAL::GetGlobal();
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v151 + 8) + 920LL))(
          *(_QWORD *)(v150 + 744),
          (__int64)v152 + 1328);
      }
      if ( (*((_DWORD *)this + 111) & 1) != 0 )
        *((_QWORD *)DXGGLOBAL::GetGlobal() + 127) = *(_QWORD *)((char *)this + 412);
      if ( (int)RenderCore < 0 )
        return (unsigned int)RenderCore;
      if ( v168 <= 1 )
        goto LABEL_426;
      v153 = *((_DWORD *)this + 105);
      if ( v153 == 4318 )
      {
        v154 = DXGGLOBAL::GetGlobal();
        v155 = 7LL;
      }
      else
      {
        if ( v153 != 4098 )
        {
LABEL_426:
          v156 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::RecordFeatureUsageWddmVersion(v156, this);
          return (unsigned int)RenderCore;
        }
        v154 = DXGGLOBAL::GetGlobal();
        v155 = 8LL;
      }
      DXGGLOBAL::RecordFeatureUsage(v154, v155, 1LL);
      goto LABEL_426;
    }
LABEL_382:
    *((_QWORD *)this + 114) = 0LL;
    goto LABEL_383;
  }
  return result;
}
