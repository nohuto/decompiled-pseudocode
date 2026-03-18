/*
 * XREFs of DxgkIddHandleSetDisplayConfig @ 0x140414B30
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140428970 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x140027004 (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x140050188 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x140050B28 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x1400667C8 (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     DXGKCALLONEXIT__lambda_0e946522d05123f26763d9a2a20a36ba___ @ 0x14006CD34 (DXGKCALLONEXIT__lambda_0e946522d05123f26763d9a2a20a36ba___.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__&DxgkSampleDisplayState_ @ 0x14006CDEC (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__-D.c)
 *     _DXGKCALLONEXIT__lambda_0e946522d05123f26763d9a2a20a36ba____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006D054 (_DXGKCALLONEXIT__lambda_0e946522d05123f26763d9a2a20a36ba____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     Feature_DcuOnExitAlwaysInCalleeContext__private_IsEnabledDeviceUsageNoInline @ 0x14006D114 (Feature_DcuOnExitAlwaysInCalleeContext__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@@Z @ 0x140185BB0 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x140187A6C (DpiFdoWaitConnectionChangeComplete.c)
 *     _lambda_88b058a4e995c6d2e4237c7842c74194_::operator() @ 0x1401BAF48 (_lambda_88b058a4e995c6d2e4237c7842c74194_--operator().c)
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401EE2C8 (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401EE4F0 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ?MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x140266FFC (-MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x1402670B0 (-MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x1402682CC (-MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x140268598 (-MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z @ 0x140268624 (-MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z.c)
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x1402687E4 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     ?MonitorSetScaleFactorOverride@@YAJPEAXII@Z @ 0x140268944 (-MonitorSetScaleFactorOverride@@YAJPEAXII@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x1402BF950 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA140 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CA448 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     DxgkWaitForPnPTransitionDone @ 0x14031C9CC (DxgkWaitForPnPTransitionDone.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403B1828 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403BB0BC (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1403D08F0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E8070 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

void __fastcall DxgkIddHandleSetDisplayConfig(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // r12d
  unsigned int v8; // r14d
  unsigned __int64 v10; // rbx
  unsigned int CurrentProcessSessionId; // eax
  const wchar_t *v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // edx
  struct _LUID *v15; // rdx
  int v16; // r8d
  int v17; // r15d
  struct _LUID v18; // rcx
  int v19; // ebx
  const wchar_t *v20; // r9
  int v21; // r9d
  void *v22; // rbx
  __int64 v23; // rsi
  int v24; // eax
  struct DXGADAPTER *v25; // rdx
  unsigned int *v26; // r8
  unsigned int v27; // ebx
  int v28; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v30; // r9
  unsigned int *v31; // r15
  __int64 v32; // rbx
  unsigned int *v33; // r12
  int v34; // eax
  int v35; // eax
  unsigned int v36; // ecx
  DXGK_STANDARD_COLORIMETRY_FLAGS v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  int MonitorHandle; // eax
  void *v41; // r8
  unsigned int v42; // eax
  struct HDXGMONITOR__ *v43; // rcx
  int IsMonitorAndLinkHDRCapable; // eax
  int v45; // r12d
  unsigned int v46; // r12d
  int IsMonitorAndDriverWCGCapable; // eax
  int v48; // r12d
  int v49; // eax
  int v50; // eax
  __int64 v51; // r12
  struct DXGGLOBAL *v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  unsigned __int64 v57; // r15
  struct DXGGLOBAL *v58; // rax
  int v59; // eax
  const wchar_t *v60; // r9
  struct HDXGMONITOR__ *v61; // rbx
  const wchar_t *v62; // r9
  __int64 v63; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  PVOID v65; // rbx
  struct _KAPC_STATE *p_ApcState; // rcx
  DXGGLOBAL *v67; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r9
  ReferenceCounted *v72; // rax
  ReferenceCounted *v73; // r15
  int v74; // eax
  int v75; // ebx
  int v76; // eax
  int v77; // eax
  int v78; // ebx
  __int64 v79; // [rsp+20h] [rbp-E0h]
  __int64 v80; // [rsp+20h] [rbp-E0h]
  __int64 v81; // [rsp+20h] [rbp-E0h]
  __int64 v82; // [rsp+20h] [rbp-E0h]
  __int64 v83; // [rsp+20h] [rbp-E0h]
  __int64 v84; // [rsp+20h] [rbp-E0h]
  __int64 v85; // [rsp+20h] [rbp-E0h]
  __int64 v86; // [rsp+28h] [rbp-D8h]
  __int64 v87; // [rsp+28h] [rbp-D8h]
  __int64 v88; // [rsp+28h] [rbp-D8h]
  __int64 v89; // [rsp+28h] [rbp-D8h]
  __int64 v90; // [rsp+28h] [rbp-D8h]
  __int64 v91; // [rsp+28h] [rbp-D8h]
  __int64 v92; // [rsp+30h] [rbp-D0h]
  __int64 v93; // [rsp+30h] [rbp-D0h]
  __int64 v94; // [rsp+30h] [rbp-D0h]
  __int64 v95; // [rsp+30h] [rbp-D0h]
  struct _LUID *v96[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v97; // [rsp+60h] [rbp-A0h]
  char v98; // [rsp+64h] [rbp-9Ch] BYREF
  bool v99; // [rsp+65h] [rbp-9Bh] BYREF
  char v100; // [rsp+66h] [rbp-9Ah] BYREF
  struct HDXGMONITOR__ *v101; // [rsp+68h] [rbp-98h]
  unsigned int *v102; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v103[24]; // [rsp+78h] [rbp-88h] BYREF
  int v104; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v105; // [rsp+98h] [rbp-68h] BYREF
  DXGSESSIONDATA *v106; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v107; // [rsp+A8h] [rbp-58h] BYREF
  ReferenceCounted *v108; // [rsp+B0h] [rbp-50h] BYREF
  int v109; // [rsp+B8h] [rbp-48h] BYREF
  int v110; // [rsp+BCh] [rbp-44h] BYREF
  int v111; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v112[48]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v113; // [rsp+F8h] [rbp-8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v114[2]; // [rsp+100h] [rbp+0h] BYREF
  PVOID Object; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v116; // [rsp+118h] [rbp+18h] BYREF
  struct HDXGMONITOR__ *v117; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v118; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v119; // [rsp+130h] [rbp+30h] BYREF
  __int64 v120; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v121; // [rsp+140h] [rbp+40h]
  unsigned int v122; // [rsp+144h] [rbp+44h]
  struct _LUID v123; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v124; // [rsp+150h] [rbp+50h]
  union _LARGE_INTEGER v125; // [rsp+158h] [rbp+58h] BYREF
  _DXGK_COLORIMETRY v126; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v127[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 *v128[3]; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD v129[6]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KAPC_STATE v130; // [rsp+1F0h] [rbp+F0h] BYREF
  char v131; // [rsp+220h] [rbp+120h]
  struct _KAPC_STATE ApcState; // [rsp+228h] [rbp+128h] BYREF
  char v133; // [rsp+258h] [rbp+158h]
  _BYTE v134[144]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v135[88]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v7 = 0;
  v8 = a4;
  v113 = 0LL;
  v10 = (unsigned int)a2;
  v105 = a1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  v131 = 0;
  v116 = CurrentProcessSessionId;
  v129[1] = &v113;
  v129[2] = &v116;
  v129[3] = &v106;
  v129[4] = &v105;
  v106 = 0LL;
  v129[0] = a7;
  DXGKCALLONEXIT__lambda_0e946522d05123f26763d9a2a20a36ba_((__int64)v112, (__int64)v129);
  *a7 = -1073741823;
  if ( (unsigned int)v10 < 4 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v10, -1073741789LL);
    v12 = L"Input buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 774;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v12, v10, -1073741789LL, 0LL, 0LL, 0LL);
LABEL_4:
    *a7 = -1073741789;
    goto LABEL_151;
  }
  v102 = a3;
  v13 = *a3;
  if ( (unsigned int)v13 >= 0x10 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v13, -1073741811LL);
    v79 = *v102;
    WdLogGlobalForLineNumber = 787;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"IddSetDisplayConfig has too many paths (0x%I64x), returning 0x%I64x.",
      v79,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    *a7 = -1073741811;
    goto LABEL_151;
  }
  if ( v10 < 132 * v13 + 4 )
  {
    WdLogSingleEntry3(2LL, v10, *a3, -1073741789LL);
    v86 = *v102;
    WdLogGlobalForLineNumber = 801;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Input buffer (size = 0x%I64x) was too small for 0x%I64x paths of DXGK_IDD_PATH_CONFIG, returning 0x%I64x.",
      v10,
      v86,
      -1073741789LL,
      0LL,
      0LL);
    goto LABEL_4;
  }
  if ( v8 < 8 )
  {
    WdLogSingleEntry2(2LL, v10, -1073741789LL);
    v12 = L"Output buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION_OUTPUT, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 813;
    goto LABEL_3;
  }
  v14 = v105;
  *a5 = 0;
  *a6 = 8;
  v96[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v96, v14);
  if ( !v96[0] )
  {
    if ( (unsigned int)Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline() )
    {
      v78 = -1071775725;
      WdLogSingleEntry2(3LL, v105, -1071775725LL);
      WdLogGlobalForLineNumber = 833;
    }
    else
    {
      v78 = -1073741811;
      WdLogSingleEntry2(3LL, v105, -1073741811LL);
      WdLogGlobalForLineNumber = 840;
    }
    *a7 = v78;
    goto LABEL_150;
  }
  v113 = *(_QWORD *)&v96[0][51].HighPart;
  v118 = 0LL;
  DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v96[0], v15, 0LL, &v118);
  v17 = v16 + 1;
  v116 = v118;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v103,
    (struct DXGADAPTER *)v96[0],
    v16 + 1);
  if ( v96[0][25].LowPart != v17 || BYTE1(v96[0][377].LowPart) )
  {
    v19 = -1071775725;
    WdLogSingleEntry2(3LL, v96[0], -1071775725LL);
    WdLogGlobalForLineNumber = 859;
    goto LABEL_19;
  }
  v18 = v96[0][390];
  if ( !*(_QWORD *)&v18 || (v96[0][55].HighPart & 0x100) == 0 )
  {
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, v96[0], -1073741811LL);
    v20 = L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 868;
    goto LABEL_18;
  }
  if ( *v102 > *(_DWORD *)(*(_QWORD *)&v18 + 96LL) )
  {
    v19 = -1073741811;
    WdLogSingleEntry2((unsigned int)(v17 + 1), v96[0], -1073741811LL);
    v20 = L"Caller specified PathCount exceeds the number of VidPn sourrce on adapter (0x%I64x), returning 0x%I64x.";
    WdLogGlobalForLineNumber = 877;
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v20, (__int64)v96[0], -1073741811LL, 0LL, 0LL, 0LL);
LABEL_19:
    *a7 = v19;
    goto LABEL_20;
  }
  v107 = 0;
  if ( !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v96[0], v96[0], &v107, 0LL) )
  {
    v19 = -1073741811;
    WdLogSingleEntry2((unsigned int)(v21 + 2), v96[0], -1073741811LL);
    v20 = L"Caller specified adapter (0x%I64x) is not a sessionized adapter, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 892;
    goto LABEL_18;
  }
  v22 = (void *)v96[0][27];
  ObfReferenceObject(v22);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
  v23 = v107;
  v24 = DxgkWaitForPnPTransitionDone(0, 0, v107, 2);
  *a7 = v24;
  if ( v24 < 0 )
  {
    ObfDereferenceObject(v22);
    WdLogSingleEntry2(2LL, (unsigned int)v23, *a7);
    v87 = *a7;
    WdLogGlobalForLineNumber = 927;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to wait for all pending PnP transition to be done in session 0x%I64x (ntStatus = 0x%I64x).",
      v23,
      v87,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  *a7 = DpiFdoWaitConnectionChangeComplete((__int64)v22);
  ObfDereferenceObject(v22);
  if ( *a7 < 0 )
  {
    v19 = -1071775725;
    WdLogSingleEntry3(2LL, v96[0], *a7, -1071775725LL);
    v88 = *a7;
    WdLogGlobalForLineNumber = 949;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to wait for all pending connection changes to be completed on adapter 0x%I64x with ntStatus 0x%I64x, returning 0x%I64x.",
      (__int64)v96[0],
      v88,
      -1071775725LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
  v25 = (struct DXGADAPTER *)v96[0];
  if ( v96[0][25].LowPart != v17 || BYTE1(v96[0][377].LowPart) )
  {
    v19 = -1071775725;
    WdLogSingleEntry2(3LL, v96[0], -1071775725LL);
    WdLogGlobalForLineNumber = 966;
    goto LABEL_19;
  }
  v26 = v102;
  v128[0] = (__int64 *)v96;
  v27 = 0;
  v104 = 0;
  v128[1] = (__int64 *)&v104;
  v98 = 0;
  v128[2] = (__int64 *)&v98;
  if ( *v102 )
  {
    do
    {
      v28 = lambda_88b058a4e995c6d2e4237c7842c74194_::operator()(v128, v27, (int *)&v26[33 * v27 + 1]);
      *a7 = v28;
      if ( v28 < 0 )
        goto LABEL_20;
      v26 = v102;
      v27 += v17;
    }
    while ( v27 < *v102 );
    if ( v104 )
    {
      if ( v104 != *v102 )
      {
        *a7 = -1073741811;
        WdLogSingleEntry2(2LL, v96[0], -1073741811LL);
        v89 = *a7;
        WdLogGlobalForLineNumber = 1064;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Some but not all paths contained a mode in DXGK_IDD_SET_DISPLAY_CONFIGURATION on adapter 0x%I64x, returning 0x%I64x.",
          (__int64)v96[0],
          v89,
          0LL,
          0LL,
          0LL);
        goto LABEL_20;
      }
      if ( !v98 )
      {
        *a7 = -1073741811;
        WdLogSingleEntry2(2LL, v96[0], -1073741811LL);
        v90 = *a7;
        WdLogGlobalForLineNumber = 1073;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Did not find primary path from DXGK_IDD_SET_DISPLAY_CONFIGURATION on adapter 0x%I64x, returning 0x%I64x.",
          (__int64)v96[0],
          v90,
          0LL,
          0LL,
          0LL);
        goto LABEL_20;
      }
      Global = DXGGLOBAL::GetGlobal();
      REMOTEMONITORMAPPING::Clear((struct _KTHREAD **)Global + 38147, 0LL);
    }
    v25 = (struct DXGADAPTER *)v96[0];
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v134, v25, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v134, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, SHIDWORD(v113), (unsigned int)v113);
    WdLogGlobalForLineNumber = 1087;
    goto LABEL_41;
  }
  v97 = 0;
  if ( !*v102 )
  {
LABEL_103:
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v134);
    if ( !v104 )
      goto LABEL_41;
    v133 = 0;
    CurrentProcess = PsGetCurrentProcess(v54);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    v57 = v107;
    if ( ProcessSessionId != v107 )
    {
      Object = 0LL;
      v58 = DXGGLOBAL::GetGlobal();
      v59 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)v58 + 118),
              v57,
              (struct _KPROCESS **)&Object);
      *a7 = v59;
      if ( v59 < 0 )
      {
        WdLogSingleEntry2(2LL, (unsigned int)v57, v59);
        v60 = L"Failed to get CSRSS process from session 0x%I64x, (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 1347;
        goto LABEL_107;
      }
      IsEnabledDeviceUsageNoInline = Feature_DcuOnExitAlwaysInCalleeContext__private_IsEnabledDeviceUsageNoInline();
      v65 = Object;
      p_ApcState = &v130;
      if ( IsEnabledDeviceUsageNoInline )
        p_ApcState = &ApcState;
      CPROCESSATTACHHELPER::Attach(p_ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(v65);
    }
    v67 = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(v67);
    v106 = SessionData;
    if ( *((_BYTE *)SessionData + 18992) && *((_BYTE *)SessionData + 18496) )
    {
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v96[0][390] + 664LL)) )
      {
        LOBYTE(v69) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v69) )
        {
          DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
          __debugbreak();
        }
        v101 = 0LL;
        DxgkLogCodePointPacketForSession(114, v57, 0, 0, 0, 0LL);
      }
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v96[0][390] + 664LL)) )
      {
        v101 = 0LL;
        DxgkLogCodePointPacketForSession(114, v57, 0, 0, 0, 0LL);
      }
      memset(v135, 0, sizeof(v135));
      v70 = 216LL * *v102;
      v72 = (ReferenceCounted *)operator new[](v70 + 112, 0x4B677844u, 256LL, v71);
      v73 = v72;
      if ( v72 )
      {
        v108 = v72;
        *(_QWORD *)v72 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
        *((_DWORD *)v72 + 2) = 1;
        *(_QWORD *)v72 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
        v100 = 0;
        LOBYTE(v114[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v114, 0LL, 0x47u, 0);
        v127[0] = &v102;
        v127[1] = &v100;
        v74 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823___DxgkSampleDisplayState_(
                (_WORD *)v73 + 8,
                v114[1],
                (__int64)v127,
                v70);
        *a7 = v74;
        if ( v74 >= 0 )
        {
          v75 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v106, &v108);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
          v119 = 88LL;
          v125.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
          *a7 = DxgkSendDisplayBrokerMessage(
                  0x120000u,
                  (struct _PORT_MESSAGE *)((char *)v73 + 16),
                  0LL,
                  (struct _PORT_MESSAGE *)v135,
                  &v119,
                  0LL,
                  &v125);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
          if ( v96[0][25].LowPart != 1 || BYTE1(v96[0][377].LowPart) )
          {
            WdLogSingleEntry2(3LL, v96[0], -1071775725LL);
            WdLogGlobalForLineNumber = 1658;
            *a7 = -1071775725;
          }
          else
          {
            v76 = *a7;
            if ( *a7 == -1073741772 )
            {
              WdLogSingleEntry1(3LL, *(unsigned int *)v106);
              WdLogGlobalForLineNumber = 1671;
              *a7 = 0;
            }
            else if ( v76 == 192 )
            {
              *a7 = -1073741749;
              WdLogSingleEntry2(3LL, *(unsigned int *)v106, -1073741749LL);
              WdLogGlobalForLineNumber = 1679;
            }
            else if ( v76 >= 0 )
            {
              v77 = *(_DWORD *)&v135[80];
              if ( *(int *)&v135[80] >= 0 )
              {
                DXGSESSIONDATA::SetDisplayConfigDone(v106, v75);
                v77 = *(_DWORD *)&v135[80];
              }
              *a7 = v77;
            }
            else
            {
              WdLogSingleEntry2(2LL, *(unsigned int *)v106, *a7);
              v91 = *a7;
              v85 = *(unsigned int *)v106;
              WdLogGlobalForLineNumber = 1685;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Failed to send Display broker message in session 0x%I64x, status 0x%I64x",
                v85,
                v91,
                0LL,
                0LL,
                0LL);
            }
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v74);
          v84 = *a7;
          WdLogGlobalForLineNumber = 1612;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to initialize display broker message, (Status = 0x%I64x).",
            v84,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v114);
        auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v108, 0LL);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1446;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Cannot allocate buffer to hold the SetDisplayConfig ALPC message",
          1446LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *a7 = -1073741801;
      }
      goto LABEL_108;
    }
    *a7 = -1071775725;
    WdLogSingleEntry2(2LL, v57, -1071775725LL);
    v60 = L"Sending SetDisplayConfig ALPC message from display broker disabled session 0x%I64x, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 1376;
LABEL_107:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v60, v57, *a7, 0LL, 0LL, 0LL);
LABEL_108:
    CPROCESSATTACHHELPER::Detach(&ApcState);
    goto LABEL_41;
  }
  while ( 1 )
  {
    v31 = v102;
    v32 = 33LL * v7;
    v101 = (struct HDXGMONITOR__ *)v7;
    v33 = &v102[v32 + 4];
    if ( (v102[v32 + 1] & 2) != 0 )
    {
      v34 = MonitorSetScaleFactorOverride((__int64)v96[0], *v33, v102[v32 + 14], v30);
      *a7 = v34;
      if ( v34 < 0 )
      {
        v61 = v101;
        WdLogSingleEntry3(2LL, *v33, v101, v34);
        v62 = L"Failed to set monitor DPI override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 1107;
LABEL_110:
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v62, *v33, (__int64)v61, *a7, 0LL, 0LL);
        goto LABEL_41;
      }
    }
    if ( (v31[v32 + 1] & 4) != 0 )
    {
      v35 = MonitorSetPhysicalSizeOverride((__int64)v96[0], *v33, v31[v32 + 15], v31[v32 + 16]);
      *a7 = v35;
      if ( v35 < 0 )
      {
        v61 = v101;
        WdLogSingleEntry3(2LL, *v33, v101, v35);
        v62 = L"Failed to set monitor size override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 1123;
        goto LABEL_110;
      }
    }
    if ( (v31[v32 + 1] & 8) != 0 )
    {
      v36 = v31[v32 + 29];
      v126.RedPoint = *(D3DKMDT_2DOFFSET *)&v31[v32 + 17];
      v126.GreenPoint = *(D3DKMDT_2DOFFSET *)&v31[v32 + 19];
      v126.BluePoint = *(D3DKMDT_2DOFFSET *)&v31[v32 + 21];
      v126.WhitePoint = *(D3DKMDT_2DOFFSET *)&v31[v32 + 23];
      v126.MinLuminance = v31[v32 + 25];
      v126.MaxLuminance = v31[v32 + 26];
      v126.MaxFullFrameLuminance = v31[v32 + 27];
      v126.FormatBitDepths.Value = v31[v32 + 28];
      v37.Value = (v36 & 1) != 0;
      v126.StandardColorimetryFlags = v37;
      if ( (v36 & 2) != 0 )
      {
        v37.Value |= 2u;
        v126.StandardColorimetryFlags = v37;
      }
      if ( (v36 & 4) != 0 )
        v126.StandardColorimetryFlags.Value = v37.Value | 4;
      v33 = &v31[v32 + 4];
      v38 = MonitorSetDriverColorimetryOverride((__int64)v96[0], *v33, &v126, v30);
      *a7 = v38;
      if ( v38 < 0 )
      {
        v63 = v97;
        WdLogSingleEntry3(2LL, *v33, v97, v38);
        v94 = *a7;
        v82 = *v33;
        WdLogGlobalForLineNumber = 1163;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to set monitor colorimetry override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
          v82,
          v63,
          v94,
          0LL,
          0LL);
        goto LABEL_41;
      }
      *a7 = MonitorSetLastWireformat((__int64)v96[0], *v33, (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v31[v32 + 28]);
    }
    if ( (v31[v32 + 1] & 1) == 0 )
    {
      v46 = v97;
      goto LABEL_93;
    }
    v39 = *v33;
    v117 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v96[0], v39, 0LL, DxgkIddHandleSetDisplayConfig, &v117);
    *a7 = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v46 = v97;
      goto LABEL_90;
    }
    v42 = v31[v32 + 13];
    v43 = v117;
    v101 = v117;
    if ( v42 == 3 )
    {
      v110 = 0;
      v109 = 0;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                     v117,
                                     (union MONITOR_AND_LINK_HDR_CAPS *)&v110,
                                     (enum MonitorAndLinkHDRIncapableReason *)&v109);
      v45 = v109;
      *a7 = IsMonitorAndLinkHDRCapable;
      if ( !v45 )
        goto LABEL_82;
      if ( (v110 & 1) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1186;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!MonitorAndLinkCaps.HDR10", 1186LL, 0LL, 0LL, 0LL, 0LL);
      }
      *a7 = -1073741637;
      if ( (v45 & 2) != 0 )
        *a5 |= 1u;
      if ( (v45 & 4) != 0 )
        *a5 |= 2u;
      if ( (v45 & 8) != 0 )
        *a5 |= 8u;
      if ( (v45 & 0x10) != 0 )
        *a5 |= 0x10u;
      if ( (v45 & 0x20) != 0 )
        *a5 |= 0x20u;
    }
    else
    {
      if ( v42 != 2 )
      {
        v46 = v97;
        goto LABEL_84;
      }
      v111 = 0;
      v99 = 0;
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(
                                       v117,
                                       &v99,
                                       (enum MonitorAndLinkWCGIncapableReason *)&v111);
      v48 = v111;
      *a7 = IsMonitorAndDriverWCGCapable;
      if ( !v48 )
      {
LABEL_82:
        v46 = v97;
        goto LABEL_83;
      }
      if ( v99 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"!MonitorAndDriverWCGCapable",
          1224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *a7 = -1073741637;
      if ( (v48 & 2) != 0 )
        *a5 |= 4u;
      if ( (v48 & 4) != 0 )
        *a5 |= 0x40u;
      if ( (v48 & 8) != 0 )
        *a5 |= 0x80u;
    }
    v46 = v97;
    a5[1] = v97;
LABEL_83:
    v43 = v101;
LABEL_84:
    if ( *a7 >= 0 )
    {
      v49 = MonitorEnableDisableHdr(v43, v31[v32 + 13] == 3);
      *a7 = v49;
      if ( v49 >= 0 )
        *a7 = MonitorEnableDisableWcg(v101, v31[v32 + 13] == 2);
    }
    if ( (int)MonitorReleaseMonitorHandle(v96[0], v101, v41, v30) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1257;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(TempStatus)", 1257LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_90:
    if ( *a7 < 0 )
    {
      WdLogSingleEntry3(2LL, v31[v32 + 4], v46, *a7);
      v92 = *a7;
      v80 = v31[v32 + 4];
      WdLogGlobalForLineNumber = 1265;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to set monitor color mode on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
        v80,
        v46,
        v92,
        0LL,
        0LL);
      goto LABEL_41;
    }
LABEL_93:
    if ( (v31[v32 + 1] & 0x10) != 0 )
    {
      v50 = MonitorSetSDRWhiteLevelOverride((__int64)v96[0], v31[v32 + 4], v31[v32 + 30], v30);
      *a7 = v50;
      if ( v50 < 0 )
        break;
    }
    if ( v104 == *v102 && (v31[v32 + 31] || v31[v32 + 32] || v31[v32 + 33]) )
    {
      v51 = v97;
      v120 = *(_QWORD *)&v31[v32 + 2];
      v121 = v31[v32 + 4];
      v123 = *(struct _LUID *)&v31[v32 + 31];
      v124 = v31[v32 + 33];
      v122 = v97;
      v52 = DXGGLOBAL::GetGlobal();
      v53 = REMOTEMONITORMAPPING::AddMapping(
              (struct _KTHREAD **)v52 + 38147,
              &v123,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v120);
      *a7 = v53;
      if ( v53 < 0 )
      {
        WdLogSingleEntry3(2LL, v31[v32 + 4], (unsigned int)v51, v53);
        v93 = *a7;
        v81 = v31[v32 + 4];
        WdLogGlobalForLineNumber = 1316;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to set monitor mapping override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
          v81,
          v51,
          v93,
          0LL,
          0LL);
        goto LABEL_41;
      }
    }
    else
    {
      LODWORD(v51) = v97;
    }
    v7 = v51 + 1;
    v97 = v7;
    if ( v7 >= *v102 )
      goto LABEL_103;
  }
  WdLogSingleEntry3(2LL, v31[v32 + 4], v46, v50);
  v95 = *a7;
  v83 = v31[v32 + 4];
  WdLogGlobalForLineNumber = 1281;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to set monitor SDR white level override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
    v83,
    v46,
    v95,
    0LL,
    0LL);
LABEL_41:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
LABEL_20:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
LABEL_150:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v96, 0LL);
LABEL_151:
  DXGKCALLONEXIT__lambda_0e946522d05123f26763d9a2a20a36ba____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v112);
  CPROCESSATTACHHELPER::Detach(&v130);
}
