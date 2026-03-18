/*
 * XREFs of DxgkIddHandleSetDisplayConfig @ 0x1404117C0
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140428678 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x14002728C (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x140050598 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x140066334 (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff___ @ 0x14006CB98 (DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff___.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__&DxgkSampleDisplayState_ @ 0x14006CC50 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__-D.c)
 *     _DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006CEB8 (_DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@@Z @ 0x140187E08 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x140189C24 (DpiFdoWaitConnectionChangeComplete.c)
 *     _lambda_b551f60be551ee3a50bc0487d00c1fde_::operator() @ 0x1401BD7CC (_lambda_b551f60be551ee3a50bc0487d00c1fde_--operator().c)
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401F3C6C (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401F3E94 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ?MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026DEFC (-MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026DFB0 (-MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x14026F22C (-MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x14026F4F8 (-MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z @ 0x14026F584 (-MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z.c)
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026F744 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     ?MonitorSetScaleFactorOverride@@YAJPEAXII@Z @ 0x14026F8A4 (-MonitorSetScaleFactorOverride@@YAJPEAXII@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402E06D8 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F81C (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     DxgkWaitForPnPTransitionDone @ 0x14036D5E0 (DxgkWaitForPnPTransitionDone.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403A23C0 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403AF234 (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1403C43D0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E1720 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

__int64 __fastcall DxgkIddHandleSetDisplayConfig(
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
  const wchar_t *v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // edx
  struct _LUID *v14; // rdx
  int v15; // r8d
  int v16; // r15d
  struct _LUID v17; // rcx
  int v18; // ebx
  const wchar_t *v19; // r9
  int v20; // r9d
  void *v21; // rbx
  __int64 v22; // rsi
  int v23; // eax
  struct DXGADAPTER *v24; // rdx
  unsigned int *v25; // r8
  unsigned int v26; // ebx
  int v27; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v29; // r9
  unsigned int *v30; // r15
  __int64 v31; // rbx
  unsigned int *v32; // r12
  int v33; // eax
  int v34; // eax
  unsigned int v35; // ecx
  DXGK_STANDARD_COLORIMETRY_FLAGS v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  int MonitorHandle; // eax
  void *v40; // r8
  unsigned int v41; // eax
  struct HDXGMONITOR__ *v42; // rcx
  int IsMonitorAndLinkHDRCapable; // eax
  int v44; // r12d
  unsigned int v45; // r12d
  int IsMonitorAndDriverWCGCapable; // eax
  int v47; // r12d
  int v48; // eax
  int v49; // eax
  __int64 v50; // r12
  struct DXGGLOBAL *v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  unsigned __int64 v56; // r15
  struct DXGGLOBAL *v57; // rax
  int v58; // eax
  const wchar_t *v59; // r9
  struct HDXGMONITOR__ *v60; // rbx
  const wchar_t *v61; // r9
  __int64 v62; // rbx
  DXGGLOBAL *v63; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v65; // rcx
  __int64 v66; // rbx
  ReferenceCounted *v67; // rax
  ReferenceCounted *v68; // r15
  int v69; // eax
  int v70; // ebx
  int v71; // eax
  int v72; // eax
  int v73; // ebx
  __int64 v75; // [rsp+20h] [rbp-E0h]
  __int64 v76; // [rsp+20h] [rbp-E0h]
  __int64 v77; // [rsp+20h] [rbp-E0h]
  __int64 v78; // [rsp+20h] [rbp-E0h]
  __int64 v79; // [rsp+20h] [rbp-E0h]
  __int64 v80; // [rsp+20h] [rbp-E0h]
  __int64 v81; // [rsp+20h] [rbp-E0h]
  __int64 v82; // [rsp+28h] [rbp-D8h]
  __int64 v83; // [rsp+28h] [rbp-D8h]
  __int64 v84; // [rsp+28h] [rbp-D8h]
  __int64 v85; // [rsp+28h] [rbp-D8h]
  __int64 v86; // [rsp+28h] [rbp-D8h]
  __int64 v87; // [rsp+28h] [rbp-D8h]
  __int64 v88; // [rsp+30h] [rbp-D0h]
  __int64 v89; // [rsp+30h] [rbp-D0h]
  __int64 v90; // [rsp+30h] [rbp-D0h]
  __int64 v91; // [rsp+30h] [rbp-D0h]
  struct _LUID *v92[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v93; // [rsp+60h] [rbp-A0h]
  char v94; // [rsp+64h] [rbp-9Ch] BYREF
  bool v95; // [rsp+65h] [rbp-9Bh] BYREF
  char v96; // [rsp+66h] [rbp-9Ah] BYREF
  struct HDXGMONITOR__ *v97; // [rsp+68h] [rbp-98h]
  unsigned int *v98; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v99[24]; // [rsp+78h] [rbp-88h] BYREF
  int v100; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v101; // [rsp+98h] [rbp-68h] BYREF
  DXGSESSIONDATA *v102; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v103; // [rsp+A8h] [rbp-58h] BYREF
  ReferenceCounted *v104; // [rsp+B0h] [rbp-50h] BYREF
  int v105; // [rsp+B8h] [rbp-48h] BYREF
  int v106; // [rsp+BCh] [rbp-44h] BYREF
  int v107; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v108[48]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v109; // [rsp+F8h] [rbp-8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v110[2]; // [rsp+100h] [rbp+0h] BYREF
  PVOID Object; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 CurrentProcessSessionId; // [rsp+118h] [rbp+18h] BYREF
  struct HDXGMONITOR__ *v113; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v114; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v115; // [rsp+130h] [rbp+30h] BYREF
  __int64 v116; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v117; // [rsp+140h] [rbp+40h]
  unsigned int v118; // [rsp+144h] [rbp+44h]
  struct _LUID v119; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v120; // [rsp+150h] [rbp+50h]
  union _LARGE_INTEGER v121; // [rsp+158h] [rbp+58h] BYREF
  _DXGK_COLORIMETRY v122; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v123[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 *v124[3]; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD v125[6]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1F0h] [rbp+F0h] BYREF
  char v127; // [rsp+220h] [rbp+120h]
  _BYTE v128[144]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v129[88]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v7 = 0;
  v8 = a4;
  v109 = 0LL;
  v10 = (unsigned int)a2;
  v101 = a1;
  v102 = 0LL;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  v125[1] = &v109;
  v125[2] = &CurrentProcessSessionId;
  v125[3] = &v102;
  v125[4] = &v101;
  v125[0] = a7;
  DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff_((__int64)v108, (__int64)v125);
  *a7 = -1073741823;
  if ( (unsigned int)v10 < 4 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v10, -1073741789LL);
    v11 = L"Input buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 767;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v11, v10, -1073741789LL, 0LL, 0LL, 0LL);
LABEL_4:
    *a7 = -1073741789;
    return DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v108);
  }
  v98 = a3;
  v12 = *a3;
  if ( (unsigned int)v12 >= 0x10 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v12, -1073741811LL);
    v75 = *v98;
    WdLogGlobalForLineNumber = 780;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"IddSetDisplayConfig has too many paths (0x%I64x), returning 0x%I64x.",
      v75,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    *a7 = -1073741811;
    return DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v108);
  }
  if ( v10 < 132 * v12 + 4 )
  {
    WdLogSingleEntry3(2LL, v10, *a3, -1073741789LL);
    v82 = *v98;
    WdLogGlobalForLineNumber = 794;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Input buffer (size = 0x%I64x) was too small for 0x%I64x paths of DXGK_IDD_PATH_CONFIG, returning 0x%I64x.",
      v10,
      v82,
      -1073741789LL,
      0LL,
      0LL);
    goto LABEL_4;
  }
  if ( v8 < 8 )
  {
    WdLogSingleEntry2(2LL, v10, -1073741789LL);
    v11 = L"Output buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION_OUTPUT, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 806;
    goto LABEL_3;
  }
  v13 = v101;
  *a5 = 0;
  *a6 = 8;
  v92[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v92, v13);
  if ( !v92[0] )
  {
    if ( (unsigned int)Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline() )
    {
      v73 = -1071775725;
      WdLogSingleEntry2(3LL, v101, -1071775725LL);
      WdLogGlobalForLineNumber = 826;
    }
    else
    {
      v73 = -1073741811;
      WdLogSingleEntry2(3LL, v101, -1073741811LL);
      WdLogGlobalForLineNumber = 833;
    }
    *a7 = v73;
    goto LABEL_148;
  }
  v109 = *(_QWORD *)&v92[0][51].HighPart;
  v114 = 0LL;
  DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v92[0], v14, 0LL, &v114);
  v16 = v15 + 1;
  CurrentProcessSessionId = v114;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v99,
    (struct DXGADAPTER *)v92[0],
    v15 + 1);
  if ( v92[0][25].LowPart != v16 || BYTE1(v92[0][377].LowPart) )
  {
    v18 = -1071775725;
    WdLogSingleEntry2(3LL, v92[0], -1071775725LL);
    WdLogGlobalForLineNumber = 852;
    goto LABEL_19;
  }
  v17 = v92[0][390];
  if ( !*(_QWORD *)&v17 || (v92[0][55].HighPart & 0x100) == 0 )
  {
    v18 = -1073741811;
    WdLogSingleEntry2(2LL, v92[0], -1073741811LL);
    v19 = L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 861;
    goto LABEL_18;
  }
  if ( *v98 > *(_DWORD *)(*(_QWORD *)&v17 + 96LL) )
  {
    v18 = -1073741811;
    WdLogSingleEntry2((unsigned int)(v16 + 1), v92[0], -1073741811LL);
    v19 = L"Caller specified PathCount exceeds the number of VidPn sourrce on adapter (0x%I64x), returning 0x%I64x.";
    WdLogGlobalForLineNumber = 870;
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v19, (__int64)v92[0], -1073741811LL, 0LL, 0LL, 0LL);
LABEL_19:
    *a7 = v18;
    goto LABEL_20;
  }
  v103 = 0;
  if ( !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v92[0], v92[0], &v103, 0LL) )
  {
    v18 = -1073741811;
    WdLogSingleEntry2((unsigned int)(v20 + 2), v92[0], -1073741811LL);
    v19 = L"Caller specified adapter (0x%I64x) is not a sessionized adapter, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 885;
    goto LABEL_18;
  }
  v21 = (void *)v92[0][27];
  ObfReferenceObject(v21);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
  v22 = v103;
  v23 = DxgkWaitForPnPTransitionDone(0, 0, v103, 2);
  *a7 = v23;
  if ( v23 < 0 )
  {
    ObfDereferenceObject(v21);
    WdLogSingleEntry2(2LL, (unsigned int)v22, *a7);
    v83 = *a7;
    WdLogGlobalForLineNumber = 920;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to wait for all pending PnP transition to be done in session 0x%I64x (ntStatus = 0x%I64x).",
      v22,
      v83,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  *a7 = DpiFdoWaitConnectionChangeComplete((__int64)v21);
  ObfDereferenceObject(v21);
  if ( *a7 < 0 )
  {
    v18 = -1071775725;
    WdLogSingleEntry3(2LL, v92[0], *a7, -1071775725LL);
    v84 = *a7;
    WdLogGlobalForLineNumber = 942;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to wait for all pending connection changes to be completed on adapter 0x%I64x with ntStatus 0x%I64x, returning 0x%I64x.",
      (__int64)v92[0],
      v84,
      -1071775725LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
  v24 = (struct DXGADAPTER *)v92[0];
  if ( v92[0][25].LowPart != v16 || BYTE1(v92[0][377].LowPart) )
  {
    v18 = -1071775725;
    WdLogSingleEntry2(3LL, v92[0], -1071775725LL);
    WdLogGlobalForLineNumber = 959;
    goto LABEL_19;
  }
  v25 = v98;
  v124[0] = (__int64 *)v92;
  v26 = 0;
  v100 = 0;
  v124[1] = (__int64 *)&v100;
  v94 = 0;
  v124[2] = (__int64 *)&v94;
  if ( *v98 )
  {
    do
    {
      v27 = lambda_b551f60be551ee3a50bc0487d00c1fde_::operator()(v124, v26, (int *)&v25[33 * v26 + 1]);
      *a7 = v27;
      if ( v27 < 0 )
        goto LABEL_20;
      v25 = v98;
      v26 += v16;
    }
    while ( v26 < *v98 );
    if ( v100 )
    {
      if ( v100 != *v98 )
      {
        *a7 = -1073741811;
        WdLogSingleEntry2(2LL, v92[0], -1073741811LL);
        v85 = *a7;
        WdLogGlobalForLineNumber = 1057;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Some but not all paths contained a mode in DXGK_IDD_SET_DISPLAY_CONFIGURATION on adapter 0x%I64x, returning 0x%I64x.",
          (__int64)v92[0],
          v85,
          0LL,
          0LL,
          0LL);
        goto LABEL_20;
      }
      if ( !v94 )
      {
        *a7 = -1073741811;
        WdLogSingleEntry2(2LL, v92[0], -1073741811LL);
        v86 = *a7;
        WdLogGlobalForLineNumber = 1066;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Did not find primary path from DXGK_IDD_SET_DISPLAY_CONFIGURATION on adapter 0x%I64x, returning 0x%I64x.",
          (__int64)v92[0],
          v86,
          0LL,
          0LL,
          0LL);
        goto LABEL_20;
      }
      Global = DXGGLOBAL::GetGlobal();
      REMOTEMONITORMAPPING::Clear((struct _KTHREAD **)Global + 38157, 0LL);
    }
    v24 = (struct DXGADAPTER *)v92[0];
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v128, v24, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v128, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, SHIDWORD(v109), (unsigned int)v109);
    WdLogGlobalForLineNumber = 1080;
    goto LABEL_41;
  }
  v93 = 0;
  if ( !*v98 )
  {
LABEL_103:
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v128);
    if ( !v100 )
      goto LABEL_41;
    v127 = 0;
    CurrentProcess = PsGetCurrentProcess(v53);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    v56 = v103;
    if ( ProcessSessionId != v103 )
    {
      Object = 0LL;
      v57 = DXGGLOBAL::GetGlobal();
      v58 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)v57 + 122),
              v56,
              (struct _KPROCESS **)&Object);
      *a7 = v58;
      if ( v58 < 0 )
      {
        WdLogSingleEntry2(2LL, (unsigned int)v56, v58);
        v59 = L"Failed to get CSRSS process from session 0x%I64x, (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 1340;
        goto LABEL_107;
      }
      CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(Object);
    }
    v63 = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(v63);
    v102 = SessionData;
    if ( *((_BYTE *)SessionData + 18992) && *((_BYTE *)SessionData + 18496) )
    {
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v92[0][390] + 672LL)) )
      {
        LOBYTE(v65) = 1;
        if ( (unsigned __int8)WdIsDebuggerPresent(v65) )
        {
          DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
          __debugbreak();
        }
        v97 = 0LL;
        DxgkLogCodePointPacketForSession(114, v56, 0, 0, 0, 0LL);
      }
      if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v92[0][390] + 672LL)) )
      {
        v97 = 0LL;
        DxgkLogCodePointPacketForSession(114, v56, 0, 0, 0, 0LL);
      }
      memset(v129, 0, sizeof(v129));
      v66 = 216LL * *v98;
      v67 = (ReferenceCounted *)operator new[](v66 + 112, 0x4B677844u, 256LL);
      v68 = v67;
      if ( v67 )
      {
        v104 = v67;
        *(_QWORD *)v67 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
        *((_DWORD *)v67 + 2) = 1;
        *(_QWORD *)v67 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
        v96 = 0;
        LOBYTE(v110[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v110, 0LL, 0x47u, 0);
        v123[0] = &v98;
        v123[1] = &v96;
        v69 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823___DxgkSampleDisplayState_(
                (_WORD *)v68 + 8,
                v110[1],
                (__int64)v123,
                v66);
        *a7 = v69;
        if ( v69 >= 0 )
        {
          v70 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v102, &v104);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
          v115 = 88LL;
          v121.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
          *a7 = DxgkSendDisplayBrokerMessage(
                  0x120000u,
                  (struct _PORT_MESSAGE *)((char *)v68 + 16),
                  0LL,
                  (struct _PORT_MESSAGE *)v129,
                  &v115,
                  0LL,
                  &v121);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
          if ( v92[0][25].LowPart != 1 || BYTE1(v92[0][377].LowPart) )
          {
            WdLogSingleEntry2(3LL, v92[0], -1071775725LL);
            WdLogGlobalForLineNumber = 1644;
            *a7 = -1071775725;
          }
          else
          {
            v71 = *a7;
            if ( *a7 == -1073741772 )
            {
              WdLogSingleEntry1(3LL, *(unsigned int *)v102);
              WdLogGlobalForLineNumber = 1657;
              *a7 = 0;
            }
            else if ( v71 == 192 )
            {
              *a7 = -1073741749;
              WdLogSingleEntry2(3LL, *(unsigned int *)v102, -1073741749LL);
              WdLogGlobalForLineNumber = 1665;
            }
            else if ( v71 >= 0 )
            {
              v72 = *(_DWORD *)&v129[80];
              if ( *(int *)&v129[80] >= 0 )
              {
                DXGSESSIONDATA::SetDisplayConfigDone(v102, v70);
                v72 = *(_DWORD *)&v129[80];
              }
              *a7 = v72;
            }
            else
            {
              WdLogSingleEntry2(2LL, *(unsigned int *)v102, *a7);
              v87 = *a7;
              v81 = *(unsigned int *)v102;
              WdLogGlobalForLineNumber = 1671;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed to send Display broker message in session 0x%I64x, status 0x%I64x",
                v81,
                v87,
                0LL,
                0LL,
                0LL);
            }
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v69);
          v80 = *a7;
          WdLogGlobalForLineNumber = 1598;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to initialize display broker message, (Status = 0x%I64x).",
            v80,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v110);
        auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v104, 0LL);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 1432;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Cannot allocate buffer to hold the SetDisplayConfig ALPC message",
          1432LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *a7 = -1073741801;
      }
      goto LABEL_108;
    }
    *a7 = -1071775725;
    WdLogSingleEntry2(2LL, v56, -1071775725LL);
    v59 = L"Sending SetDisplayConfig ALPC message from display broker disabled session 0x%I64x, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 1362;
LABEL_107:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v59, v56, *a7, 0LL, 0LL, 0LL);
LABEL_108:
    CPROCESSATTACHHELPER::Detach(&ApcState);
    goto LABEL_41;
  }
  while ( 1 )
  {
    v30 = v98;
    v31 = 33LL * v7;
    v97 = (struct HDXGMONITOR__ *)v7;
    v32 = &v98[v31 + 4];
    if ( (v98[v31 + 1] & 2) != 0 )
    {
      v33 = MonitorSetScaleFactorOverride((__int64)v92[0], *v32, v98[v31 + 14], v29);
      *a7 = v33;
      if ( v33 < 0 )
      {
        v60 = v97;
        WdLogSingleEntry3(2LL, *v32, v97, v33);
        v61 = L"Failed to set monitor DPI override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 1100;
LABEL_110:
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v61, *v32, (__int64)v60, *a7, 0LL, 0LL);
        goto LABEL_41;
      }
    }
    if ( (v30[v31 + 1] & 4) != 0 )
    {
      v34 = MonitorSetPhysicalSizeOverride((__int64)v92[0], *v32, v30[v31 + 15], v30[v31 + 16]);
      *a7 = v34;
      if ( v34 < 0 )
      {
        v60 = v97;
        WdLogSingleEntry3(2LL, *v32, v97, v34);
        v61 = L"Failed to set monitor size override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).";
        WdLogGlobalForLineNumber = 1116;
        goto LABEL_110;
      }
    }
    if ( (v30[v31 + 1] & 8) != 0 )
    {
      v35 = v30[v31 + 29];
      v122.RedPoint = *(D3DKMDT_2DOFFSET *)&v30[v31 + 17];
      v122.GreenPoint = *(D3DKMDT_2DOFFSET *)&v30[v31 + 19];
      v122.BluePoint = *(D3DKMDT_2DOFFSET *)&v30[v31 + 21];
      v122.WhitePoint = *(D3DKMDT_2DOFFSET *)&v30[v31 + 23];
      v122.MinLuminance = v30[v31 + 25];
      v122.MaxLuminance = v30[v31 + 26];
      v122.MaxFullFrameLuminance = v30[v31 + 27];
      v122.FormatBitDepths.Value = v30[v31 + 28];
      v36.Value = (v35 & 1) != 0;
      v122.StandardColorimetryFlags = v36;
      if ( (v35 & 2) != 0 )
      {
        v36.Value |= 2u;
        v122.StandardColorimetryFlags = v36;
      }
      if ( (v35 & 4) != 0 )
        v122.StandardColorimetryFlags.Value = v36.Value | 4;
      v32 = &v30[v31 + 4];
      v37 = MonitorSetDriverColorimetryOverride((__int64)v92[0], *v32, &v122, v29);
      *a7 = v37;
      if ( v37 < 0 )
      {
        v62 = v93;
        WdLogSingleEntry3(2LL, *v32, v93, v37);
        v90 = *a7;
        v78 = *v32;
        WdLogGlobalForLineNumber = 1156;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to set monitor colorimetry override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
          v78,
          v62,
          v90,
          0LL,
          0LL);
        goto LABEL_41;
      }
      *a7 = MonitorSetLastWireformat((__int64)v92[0], *v32, (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v30[v31 + 28]);
    }
    if ( (v30[v31 + 1] & 1) == 0 )
    {
      v45 = v93;
      goto LABEL_93;
    }
    v38 = *v32;
    v113 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v92[0], v38, 0LL, DxgkIddHandleSetDisplayConfig, &v113);
    *a7 = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v45 = v93;
      goto LABEL_90;
    }
    v41 = v30[v31 + 13];
    v42 = v113;
    v97 = v113;
    if ( v41 == 3 )
    {
      v106 = 0;
      v105 = 0;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                     v113,
                                     (union MONITOR_AND_LINK_HDR_CAPS *)&v106,
                                     (enum MonitorAndLinkHDRIncapableReason *)&v105);
      v44 = v105;
      *a7 = IsMonitorAndLinkHDRCapable;
      if ( !v44 )
        goto LABEL_82;
      if ( (v106 & 1) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1179;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"!MonitorAndLinkCaps.HDR10",
          1179LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *a7 = -1073741637;
      if ( (v44 & 2) != 0 )
        *a5 |= 1u;
      if ( (v44 & 4) != 0 )
        *a5 |= 2u;
      if ( (v44 & 8) != 0 )
        *a5 |= 8u;
      if ( (v44 & 0x10) != 0 )
        *a5 |= 0x10u;
      if ( (v44 & 0x20) != 0 )
        *a5 |= 0x20u;
    }
    else
    {
      if ( v41 != 2 )
      {
        v45 = v93;
        goto LABEL_84;
      }
      v107 = 0;
      v95 = 0;
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(
                                       v113,
                                       &v95,
                                       (enum MonitorAndLinkWCGIncapableReason *)&v107);
      v47 = v107;
      *a7 = IsMonitorAndDriverWCGCapable;
      if ( !v47 )
      {
LABEL_82:
        v45 = v93;
        goto LABEL_83;
      }
      if ( v95 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1217;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"!MonitorAndDriverWCGCapable",
          1217LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *a7 = -1073741637;
      if ( (v47 & 2) != 0 )
        *a5 |= 4u;
      if ( (v47 & 4) != 0 )
        *a5 |= 0x40u;
      if ( (v47 & 8) != 0 )
        *a5 |= 0x80u;
    }
    v45 = v93;
    a5[1] = v93;
LABEL_83:
    v42 = v97;
LABEL_84:
    if ( *a7 >= 0 )
    {
      v48 = MonitorEnableDisableHdr(v42, v30[v31 + 13] == 3);
      *a7 = v48;
      if ( v48 >= 0 )
        *a7 = MonitorEnableDisableWcg(v97, v30[v31 + 13] == 2);
    }
    if ( (int)MonitorReleaseMonitorHandle(v92[0], v97, v40, v29) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1250;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(TempStatus)", 1250LL, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_90:
    if ( *a7 < 0 )
    {
      WdLogSingleEntry3(2LL, v30[v31 + 4], v45, *a7);
      v88 = *a7;
      v76 = v30[v31 + 4];
      WdLogGlobalForLineNumber = 1258;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to set monitor color mode on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
        v76,
        v45,
        v88,
        0LL,
        0LL);
      goto LABEL_41;
    }
LABEL_93:
    if ( (v30[v31 + 1] & 0x10) != 0 )
    {
      v49 = MonitorSetSDRWhiteLevelOverride((__int64)v92[0], v30[v31 + 4], v30[v31 + 30], v29);
      *a7 = v49;
      if ( v49 < 0 )
        break;
    }
    if ( v100 == *v98 && (v30[v31 + 31] || v30[v31 + 32] || v30[v31 + 33]) )
    {
      v50 = v93;
      v116 = *(_QWORD *)&v30[v31 + 2];
      v117 = v30[v31 + 4];
      v119 = *(struct _LUID *)&v30[v31 + 31];
      v120 = v30[v31 + 33];
      v118 = v93;
      v51 = DXGGLOBAL::GetGlobal();
      v52 = REMOTEMONITORMAPPING::AddMapping(
              (struct _KTHREAD **)v51 + 38157,
              &v119,
              (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v116);
      *a7 = v52;
      if ( v52 < 0 )
      {
        WdLogSingleEntry3(2LL, v30[v31 + 4], (unsigned int)v50, v52);
        v89 = *a7;
        v77 = v30[v31 + 4];
        WdLogGlobalForLineNumber = 1309;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to set monitor mapping override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
          v77,
          v50,
          v89,
          0LL,
          0LL);
        goto LABEL_41;
      }
    }
    else
    {
      LODWORD(v50) = v93;
    }
    v7 = v50 + 1;
    v93 = v7;
    if ( v7 >= *v98 )
      goto LABEL_103;
  }
  WdLogSingleEntry3(2LL, v30[v31 + 4], v45, v49);
  v91 = *a7;
  v79 = v30[v31 + 4];
  WdLogGlobalForLineNumber = 1274;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to set monitor SDR white level override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
    v79,
    v45,
    v91,
    0LL,
    0LL);
LABEL_41:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v128);
LABEL_20:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v99);
LABEL_148:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v92, 0LL);
  return DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v108);
}
