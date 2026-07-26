/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015E430 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140018400 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400187A0 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400189A0 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140022000 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400241B0 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x140024C70 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004B4A0 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisIfAddIfStackEntry @ 0x14004BB90 (NdisIfAddIfStackEntry.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140055140 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x140058080 (-ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140058120 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x14006E120 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1400702B0 (-ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400772A0 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140079A70 (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_qqZddZD @ 0x140079FF0 (WPP_RECORDER_SF_qqZddZD.c)
 *     WPP_RECORDER_SF_qqZ @ 0x140081560 (WPP_RECORDER_SF_qqZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1400830E0 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1400860B0 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x140086ED0 (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400894F0 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x14008E390 (-ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140092F80 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     McTemplateK0jqxjqxdd_EtwWriteTransfer @ 0x140096190 (McTemplateK0jqxjqxdd_EtwWriteTransfer.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400971B0 (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x140097908 (-EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14009CBC8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     NdisIfDeleteIfStackEntry @ 0x1400CF7A0 (NdisIfDeleteIfStackEntry.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1400E5E5C (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_N.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x14014CB3C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x14015F140 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x14015FB30 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015FB90 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14016BBB0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x14016C400 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisPktMonFilterRegister @ 0x14016FF90 (ndisPktMonFilterRegister.c)
 *     ?ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z @ 0x1401710E0 (-ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1401711C0 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x140172190 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401721D0 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140173240 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140173D80 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x140174760 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rax
  int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  int v12; // ecx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // r10d
  int v17; // r11d
  int v18; // ebx
  int v19; // edi
  int Data3; // esi
  int Data2; // r14d
  struct _NDIS_MINIPORT_BLOCK *v22; // rdi
  struct NDIS_BIND_FILTER_LINK *v23; // r13
  struct _NDIS_FILTER_DRIVER_BLOCK *v24; // r15
  unsigned int FilterAdapterRegistry; // r14d
  __int64 v26; // rsi
  int v27; // edx
  unsigned __int8 v28; // r8
  __int64 Pool2; // rax
  __int64 v30; // rdx
  size_t v31; // r8
  ULONG v32; // r9d
  char v33; // r12
  struct Rtl::KString *v34; // rax
  void *v35; // rcx
  unsigned __int16 v36; // bx
  _WORD *v37; // rax
  __int64 Watchdog; // rax
  struct NDISWATCHDOG__ *v39; // rcx
  __int64 v40; // rbx
  KIRQL v41; // r14
  struct _NDIS_FILTER_BLOCK *v42; // r13
  __int64 v43; // rbx
  KIRQL v44; // al
  struct _NDIS_MINIPORT_BLOCK *BaseMiniport; // r12
  KIRQL v46; // al
  __int64 v47; // rax
  unsigned __int8 v48; // al
  UCHAR v49; // r11
  __int64 v50; // rdx
  __int64 v51; // rcx
  _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediumType; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rbx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // r8
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterHwCapabilities; // r10
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // r9
  _NDIS_SRIOV_CAPABILITIES *SriovHwCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  _NDIS_IF_BLOCK *IfBlock; // rdx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  void (__stdcall *v64)(PVOID); // r8
  void *v65; // r9
  void *v66; // r10
  _NDIS_MEDIUM MediaType; // eax
  const GUID *p_InterfaceGuid; // r9
  const GUID *v69; // r8
  __int64 v70; // r9
  KIRQL v71; // bl
  bool v72; // zf
  int v73; // ecx
  char MiniportMediaType; // r10
  __int64 v75; // rcx
  __int64 v76; // rax
  NET_IFINDEX IfIndex; // edx
  __int64 v78; // rax
  NET_IFINDEX v79; // edx
  __int64 v80; // rcx
  KIRQL v81; // bl
  __int64 v82; // r13
  KIRQL v83; // al
  KIRQL v84; // bl
  KIRQL v85; // bl
  KIRQL v86; // bl
  _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediaType; // eax
  _NDIS_MEDIUM v88; // ecx
  __int64 v89; // rax
  _NDIS_MEDIUM v90; // ecx
  _NDIS_PHYSICAL_MEDIUM v91; // eax
  PVOID v92; // r12
  char *v93; // rbx
  int v94; // edx
  __int64 v95; // rcx
  NTSTATUS v96; // ebx
  int v97; // edx
  struct _NDIS_MINIPORT_BLOCK *v98; // rdx
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-130h]
  int UserDataCounta; // [rsp+20h] [rbp-130h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-128h]
  char v102[8]; // [rsp+30h] [rbp-120h]
  char v103[8]; // [rsp+38h] [rbp-118h]
  char v104[8]; // [rsp+38h] [rbp-118h]
  char v105[8]; // [rsp+40h] [rbp-110h]
  int v106; // [rsp+58h] [rbp-F8h]
  int v107; // [rsp+88h] [rbp-C8h]
  char v108; // [rsp+D0h] [rbp-80h]
  char v109; // [rsp+D1h] [rbp-7Fh]
  unsigned int Data1; // [rsp+E0h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v112; // [rsp+E8h] [rbp-68h]
  int v113; // [rsp+F0h] [rbp-60h]
  int v114; // [rsp+F4h] [rbp-5Ch]
  int v115; // [rsp+F8h] [rbp-58h]
  int v116; // [rsp+FCh] [rbp-54h]
  int v117; // [rsp+100h] [rbp-50h]
  int v118; // [rsp+104h] [rbp-4Ch]
  int v119; // [rsp+108h] [rbp-48h]
  int v120; // [rsp+10Ch] [rbp-44h]
  int v121; // [rsp+110h] [rbp-40h]
  ULONG v122; // [rsp+114h] [rbp-3Ch]
  int v123; // [rsp+118h] [rbp-38h] BYREF
  char v124[8]; // [rsp+120h] [rbp-30h]
  struct _NDIS_FILTER_DRIVER_BLOCK *v125; // [rsp+128h] [rbp-28h]
  struct _NDIS_FILTER_BLOCK *v126; // [rsp+130h] [rbp-20h] BYREF
  PVOID WnodeEventItem; // [rsp+138h] [rbp-18h] BYREF
  struct _NDIS_FILTER_ATTACH_PARAMETERS v128; // [rsp+140h] [rbp-10h] BYREF
  struct _UNICODE_STRING v129[10]; // [rsp+220h] [rbp+D0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+2C0h] [rbp+170h] BYREF
  _EVENT_DATA_DESCRIPTOR v131; // [rsp+2D0h] [rbp+180h] BYREF
  unsigned int *p_Data1; // [rsp+2E0h] [rbp+190h]
  __int64 v133; // [rsp+2E8h] [rbp+198h]
  wchar_t pszSrc[88]; // [rsp+2F0h] [rbp+1A0h] BYREF

  v113 = a3;
  v125 = a2;
  v112 = a1;
  *(_QWORD *)v124 = 0LL;
  v126 = 0LL;
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  v109 = 0;
  memset(&v128, 0, sizeof(v128));
  v123 = 0;
  v108 = 0;
  WnodeEventItem = 0LL;
  if ( !ndisReferenceFilterDriver(a2, 0) )
    return 3221291010LL;
  if ( !(unsigned __int8)ndisReferenceMiniport(a1, 0x27u) )
  {
    ndisDereferenceFilterDriver(a2, 0, 0);
    return 3221291010LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x18u,
      (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
      (char)a2,
      (char)a1,
      &a2->DefaultFilterCharacteristics.FriendlyName.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  p = a4->BindDriver._p;
  v9 = a1->InterfaceGuid.Data4[7];
  v10 = a1->InterfaceGuid.Data4[6];
  v11 = a1->InterfaceGuid.Data4[5];
  v12 = p->_t.Guid.Data4[7];
  v13 = p->_t.Guid.Data4[6];
  v14 = p->_t.Guid.Data4[5];
  v15 = p->_t.Guid.Data4[4];
  v16 = p->_t.Guid.Data4[3];
  v17 = p->_t.Guid.Data4[2];
  v18 = p->_t.Guid.Data4[1];
  v19 = p->_t.Guid.Data4[0];
  Data3 = p->_t.Guid.Data3;
  Data2 = p->_t.Guid.Data2;
  LODWORD(p) = p->_t.Guid.Data1;
  v114 = v12;
  v115 = v13;
  v116 = v112->InterfaceGuid.Data4[4];
  v117 = v112->InterfaceGuid.Data4[3];
  v118 = v112->InterfaceGuid.Data4[2];
  v119 = v112->InterfaceGuid.Data4[1];
  v120 = v112->InterfaceGuid.Data4[0];
  v121 = v112->InterfaceGuid.Data3;
  v122 = v112->InterfaceGuid.Data2;
  Data1 = v112->InterfaceGuid.Data1;
  v107 = v19;
  v106 = v11;
  *(_DWORD *)v103 = v119;
  *(_DWORD *)v102 = v120;
  LODWORD(UserData) = v121;
  UserDataCount[0] = v122;
  v22 = v112;
  v23 = a4;
  if ( (int)RtlStringCbPrintfW(
              pszSrc,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              Data1,
              *(_QWORD *)UserDataCount,
              UserData,
              *(_QWORD *)v102,
              *(_QWORD *)v103,
              v118,
              v117,
              v116,
              v106,
              v10,
              v9,
              (_DWORD)p,
              Data2,
              Data3,
              v107,
              v18,
              v17,
              v16,
              v15,
              v14,
              v13,
              v12,
              v113) >= 0 )
  {
    ndisFindAdjacentFilters(v112, a4, (struct _NDIS_FILTER_BLOCK **)&EventDescriptor, &v126);
    v24 = v125;
    v28 = v125->DefaultFilterCharacteristics.MajorNdisVersion > 6u
       || v125->DefaultFilterCharacteristics.MajorNdisVersion == 6
       && v125->DefaultFilterCharacteristics.MinorNdisVersion >= 0x28u;
    FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v125->DefaultFilterCharacteristics.ServiceName, v112, v28);
    if ( FilterAdapterRegistry )
      goto LABEL_9;
    if ( v112->MajorNdisVersion < 6u && (v112->LinkStateIndicationFlags & 1) == 0 )
      ndisMDoMiniportOp(v112, 1, 0x10114u, &v123, 4u, 1u, 1u);
    if ( !ndisReferenceFilterDriver(v24, 3u) )
    {
      FilterAdapterRegistry = -1073676282;
      goto LABEL_9;
    }
    Pool2 = ExAllocatePool2(64LL, 1416LL, 1650869326);
    v26 = Pool2;
    if ( !Pool2 )
    {
      FilterAdapterRegistry = -1073741670;
      ndisDereferenceFilterDriver(v24, 0, 3u);
      goto LABEL_10;
    }
    *(_QWORD *)(Pool2 + 184) = -1LL;
    v33 = 0;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 960) = 0LL;
    *(_DWORD *)(Pool2 + 968) = 0;
    *(_QWORD *)(Pool2 + 972) = 0LL;
    *(_DWORD *)(Pool2 + 980) = 0;
    *(_OWORD *)(Pool2 + 984) = 0LL;
    *(_OWORD *)(Pool2 + 1000) = 0LL;
    *(_OWORD *)(Pool2 + 1016) = 0LL;
    *(_OWORD *)(Pool2 + 1032) = 0LL;
    *(_OWORD *)(Pool2 + 1048) = 0LL;
    *(_OWORD *)(Pool2 + 1064) = 0LL;
    *(_OWORD *)(Pool2 + 1080) = 0LL;
    *(_OWORD *)(Pool2 + 1096) = 0LL;
    *(_DWORD *)(Pool2 + 1112) = 0;
    *(_OWORD *)(Pool2 + 1116) = 0LL;
    *(_OWORD *)(Pool2 + 1132) = 0LL;
    *(_OWORD *)(Pool2 + 1148) = 0LL;
    *(_OWORD *)(Pool2 + 1164) = 0LL;
    *(_OWORD *)(Pool2 + 1180) = 0LL;
    *(_OWORD *)(Pool2 + 1196) = 0LL;
    *(_OWORD *)(Pool2 + 1212) = 0LL;
    *(_OWORD *)(Pool2 + 1228) = 0LL;
    *(_DWORD *)(Pool2 + 1244) = 0;
    *(_OWORD *)(Pool2 + 1248) = 0LL;
    *(_OWORD *)(Pool2 + 1264) = 0LL;
    *(_OWORD *)(Pool2 + 1280) = 0LL;
    *(_OWORD *)(Pool2 + 1296) = 0LL;
    *(_OWORD *)(Pool2 + 1312) = 0LL;
    *(_DWORD *)(Pool2 + 1328) = 0;
    *(_OWORD *)(Pool2 + 1332) = 0LL;
    *(_OWORD *)(Pool2 + 1348) = 0LL;
    *(_OWORD *)(Pool2 + 1364) = 0LL;
    *(_OWORD *)(Pool2 + 1380) = 0LL;
    *(_OWORD *)(Pool2 + 1396) = 0LL;
    *(_DWORD *)(Pool2 + 1412) = 0;
    *(_DWORD *)Pool2 = 92799237;
    *(_QWORD *)(Pool2 + 16) = v24;
    v34 = Rtl::KString::Initialize(pszSrc, v30, v31, v32);
    v35 = *(void **)(v26 + 40);
    *(_QWORD *)(v26 + 40) = v34;
    if ( v35 )
      ExFreePoolWithTag(v35, 0x7274534Bu);
    if ( !*(_QWORD *)(v26 + 40) )
    {
      FilterAdapterRegistry = -1073741670;
      goto LABEL_70;
    }
    v36 = v24->DefaultFilterCharacteristics.FriendlyName.Length + 14 + v22->pAdapterInstanceName->Length;
    v37 = (_WORD *)ExAllocatePool2(66LL, v36 + 16LL, 1953711182);
    *(_QWORD *)(v26 + 48) = v37;
    if ( !v37 )
    {
      FilterAdapterRegistry = -1073741670;
      goto LABEL_70;
    }
    *v37 = 0;
    *(_WORD *)(*(_QWORD *)(v26 + 48) + 2LL) = v36;
    *(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) = *(_QWORD *)(v26 + 48) + 16LL;
    RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v26 + 48), v22->pAdapterInstanceName);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v26 + 48) >> 1)) = 45;
    **(_WORD **)(v26 + 48) += 2;
    RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v26 + 48), &v24->DefaultFilterCharacteristics.FriendlyName);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v26 + 48) >> 1)) = 45;
    **(_WORD **)(v26 + 48) += 2;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) + 2
                                                         * ((unsigned __int64)**(unsigned __int16 **)(v26 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v26 + 40) - 8) >> 1));
    **(_WORD **)(v26 + 48) += 8;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v26 + 48) >> 1)) = 0;
    *(_QWORD *)(v26 + 648) = NdisNblTrackerRegisterComponent(1, v26, *(_QWORD *)(v26 + 48));
    Watchdog = ndisAllocateWatchdog();
    v39 = *(struct NDISWATCHDOG__ **)(v26 + 184);
    v40 = Watchdog;
    if ( v39 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v39);
    *(_QWORD *)(v26 + 184) = v40;
    KeInitializeSpinLock((PKSPIN_LOCK)(v26 + 144));
    v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 144));
    *(_QWORD *)(v26 + 152) = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v26);
    if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v26, 256) )
      FILTER_CLEAR_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 256);
    FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 8);
    *(_QWORD *)(v26 + 152) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v41);
    *(_BYTE *)(v26 + 64) = 0;
    ndisInitializeRef((struct _REFERENCE_EX *)(v26 + 72), 3u);
    ndisInitializeZeroBasedRef((struct _REFERENCE_EX *)(v26 + 312));
    ndisCloseRef((PKSPIN_LOCK)(v26 + 312));
    if ( ndisDatapathVerifierMode == 1 )
    {
      if ( !MmIsDriverVerifyingByAddress(*(PVOID *)(*(_QWORD *)(v26 + 16) + 176LL))
        || !ndisDriverVerifierNdisFlagEnabled() )
      {
LABEL_46:
        if ( v22->MajorNdisVersion >= 6u )
        {
          if ( ndisNblContextVerifierMode == 1 )
          {
            if ( !MmIsDriverVerifyingByAddress(*(PVOID *)(*(_QWORD *)(v26 + 16) + 176LL))
              || !ndisDriverVerifierNdisFlagEnabled() )
            {
              goto LABEL_53;
            }
          }
          else if ( ndisNblContextVerifierMode != 2 )
          {
            goto LABEL_53;
          }
          *(_OWORD *)(v26 + 928) = 0LL;
          *(_OWORD *)(v26 + 944) = 0LL;
          FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 1024);
        }
LABEL_53:
        *(_QWORD *)(v26 + 584) = v24->DefaultFilterCharacteristics.SendNetBufferListsHandler;
        *(_QWORD *)(v26 + 592) = v24->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
        *(_QWORD *)(v26 + 608) = v24->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
        *(_QWORD *)(v26 + 616) = v24->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
        *(_QWORD *)(v26 + 600) = v24->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
        *(_QWORD *)(v26 + 168) = v26 + 160;
        *(_QWORD *)(v26 + 160) = v26 + 160;
        FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                                  (struct _NDIS_FILTER_BLOCK *)v26,
                                  (struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *)(v26 + 576),
                                  0);
        if ( FilterAdapterRegistry )
          goto LABEL_70;
        v42 = v126;
        v43 = *(_QWORD *)&EventDescriptor.Id;
        *(_QWORD *)(v26 + 208) = ndisStackExpansionFallbackWorker;
        *(_QWORD *)(v26 + 216) = v26;
        *(_QWORD *)(v26 + 192) = 0LL;
        *(_QWORD *)(v26 + 112) = v42;
        *(_QWORD *)(v26 + 120) = v43;
        if ( !v42 && !v43 && v22->HighestFilter )
        {
          FilterAdapterRegistry = -1073741823;
LABEL_69:
          v23 = a4;
          goto LABEL_70;
        }
        v44 = KeAcquireSpinLockRaiseToDpc(&v22->Lock);
        if ( v43 )
          *(_QWORD *)(v43 + 112) = v26;
        else
          v22->HighestFilter = (_NDIS_FILTER_BLOCK *)v26;
        if ( v42 )
          v42->HigherFilter = (_NDIS_FILTER_BLOCK *)v26;
        else
          v22->LowestFilter = (_NDIS_FILTER_BLOCK *)v26;
        *(_QWORD *)(v26 + 32) = v22;
        v22->MiniportThread = 0LL;
        KeReleaseSpinLock(&v22->Lock, v44);
        v109 = 1;
        BaseMiniport = v22;
        if ( v22->BaseMiniport )
          BaseMiniport = v22->BaseMiniport;
        v46 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
        *(_QWORD *)(v26 + 104) = ndisGlobalFilterList;
        ndisGlobalFilterList = (_NDIS_FILTER_BLOCK *)v26;
        KeReleaseSpinLock(&ndisGlobalFilterListLock, v46);
        if ( !(unsigned __int8)ndisQueueFilterOnDriver((struct _NDIS_FILTER_BLOCK *)v26, v24) )
        {
          FilterAdapterRegistry = -1073676286;
LABEL_68:
          v33 = 0;
          goto LABEL_69;
        }
        if ( (v24->Bind._p->_t.FilterBindFlags & 2) != 0 )
        {
          FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                    &v24->DefaultFilterCharacteristics.ServiceName,
                                    (struct _NDIS_FILTER_BLOCK *)v26,
                                    v22);
          if ( FilterAdapterRegistry )
            goto LABEL_68;
        }
        *(_QWORD *)(v26 + 752) = a4;
        *(_BYTE *)(v26 + 64) = 1;
        Ndis::BindEngine::BeginPolicyUpdates(&v22->BindEngine);
        Ndis::BindState::AddBindContext(&a4->BindState, (void *)v26);
        Ndis::BindEngine::EndPolicyUpdates(&v22->BindEngine);
        memset(&v128, 0, sizeof(v128));
        v47 = *(_QWORD *)(v26 + 16);
        if ( *(_BYTE *)(v47 + 100) > 6u )
          goto LABEL_81;
        v48 = *(_BYTE *)(v47 + 101);
        if ( !v48 )
        {
          v49 = 1;
          v128.Header.Size = 164;
          goto LABEL_82;
        }
        if ( v48 < 0x14u )
        {
          v49 = 2;
          v128.Header.Size = 176;
          goto LABEL_82;
        }
        if ( v48 >= 0x1Eu )
        {
LABEL_81:
          v128.Header.Size = 224;
          v49 = 4;
        }
        else
        {
          v49 = 3;
          v128.Header.Size = 200;
        }
LABEL_82:
        v50 = *(_QWORD *)(v26 + 112);
        v128.Header.Revision = v49;
        v128.Header.Type = -103;
        v128.BaseMiniportIfIndex = BaseMiniport->IfIndex;
        v128.BaseMiniportNetLuid.Value = BaseMiniport->NetLuid.Value;
        v128.BaseMiniportName = &BaseMiniport->MiniportName;
        v128.BaseMiniportInstanceName = BaseMiniport->pAdapterInstanceName;
        if ( v50 )
        {
          v128.LowerIfIndex = *(_DWORD *)(v50 + 680);
          v128.LowerIfNetLuid.Value = *(_QWORD *)(*(_QWORD *)(v50 + 688) + 1312LL);
        }
        else
        {
          v51 = *(_QWORD *)(v26 + 32);
          v128.LowerIfIndex = *(_DWORD *)(v51 + 4056);
          v128.LowerIfNetLuid.Value = *(_QWORD *)(v51 + 4024);
        }
        v128.FilterModuleGuidName = *(_UNICODE_STRING **)(v26 + 40);
        v128.MiniportMediaSpecificAttributes = v22->MediaSpecificAttributes;
        if ( (v22->MacOptions & 0x80000001) == 0x80000001 )
        {
          MiniportPhysicalMediumType = v22->MiniportPhysicalMediumType;
          v128.MiniportMediaType = NdisMediumWan;
        }
        else if ( v42 )
        {
          v128.MiniportMediaType = v42->MediaType;
          MiniportPhysicalMediumType = v42->PhysicalMediaType;
        }
        else
        {
          v128.MiniportMediaType = v22->MiniportMediaType;
          MiniportPhysicalMediumType = v22->MiniportPhysicalMediumType;
        }
        v128.MiniportPhysicalMediaType = MiniportPhysicalMediumType;
        if ( v50 )
        {
          v128.MediaConnectState = *(_DWORD *)(v50 + 380);
          v128.MediaDuplexState = *(_DWORD *)(v50 + 384);
          v128.XmitLinkSpeed = *(_QWORD *)(v50 + 392);
          v128.RcvLinkSpeed = *(_QWORD *)(v50 + 400);
          v128.DefaultOffloadConfiguration = *(_NDIS_OFFLOAD **)(v50 + 656);
        }
        else
        {
          v128.MediaConnectState = v22->MiniportMediaConnectState;
          v128.MediaDuplexState = v22->MiniportMediaDuplexState;
          v128.XmitLinkSpeed = v22->MiniportXmitLinkSpeed;
          v128.RcvLinkSpeed = v22->MiniportRcvLinkSpeed;
          Offload = v22->Offload;
          if ( Offload && Offload->SupportsOffload )
            v128.DefaultOffloadConfiguration = &Offload->MiniportCurrentConfig;
          else
            v128.DefaultOffloadConfiguration = 0LL;
        }
        SriovCurrentCapabilities = 0LL;
        HDSplitCurrentConfig = v128.HDSplitCurrentConfig;
        NicSwitchHwCapabilities = 0LL;
        ReceiveFilterHwCapabilities = 0LL;
        if ( v22->HDSplitCurrentConfig )
          HDSplitCurrentConfig = v22->HDSplitCurrentConfig;
        ReceiveFilterCurrentCapabilities = 0LL;
        v128.HDSplitCurrentConfig = HDSplitCurrentConfig;
        SriovHwCapabilities = 0LL;
        NicSwitchCurrentCapabilities = 0LL;
        if ( v50 )
        {
          if ( *(_WORD *)(v50 + 962) )
            SriovHwCapabilities = (_NDIS_SRIOV_CAPABILITIES *)(v50 + 960);
          if ( *(_WORD *)(v50 + 974) )
            SriovCurrentCapabilities = (_NDIS_SRIOV_CAPABILITIES *)(v50 + 972);
          if ( *(_WORD *)(v50 + 986) )
            NicSwitchHwCapabilities = (_NDIS_NIC_SWITCH_CAPABILITIES *)(v50 + 984);
          if ( *(_WORD *)(v50 + 1118) )
            NicSwitchCurrentCapabilities = (_NDIS_NIC_SWITCH_CAPABILITIES *)(v50 + 1116);
          if ( *(_WORD *)(v50 + 1250) )
            ReceiveFilterHwCapabilities = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)(v50 + 1248);
          if ( *(_WORD *)(v50 + 1334) )
            ReceiveFilterCurrentCapabilities = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)(v50 + 1332);
        }
        else
        {
          SriovHwCapabilities = v22->SriovHwCapabilities;
          SriovCurrentCapabilities = v22->SriovCurrentCapabilities;
          NicSwitchHwCapabilities = v22->NicSwitchHwCapabilities;
          NicSwitchCurrentCapabilities = v22->NicSwitchCurrentCapabilities;
          ReceiveFilterHwCapabilities = v22->ReceiveFilterHwCapabilities;
          ReceiveFilterCurrentCapabilities = v22->ReceiveFilterCurrentCapabilities;
        }
        if ( SriovHwCapabilities )
        {
          *(_QWORD *)(v26 + 960) = *(_QWORD *)&SriovHwCapabilities->Header.Type;
          *(_DWORD *)(v26 + 968) = SriovHwCapabilities->SriovCapabilities;
        }
        if ( SriovCurrentCapabilities )
        {
          *(_QWORD *)(v26 + 972) = *(_QWORD *)&SriovCurrentCapabilities->Header.Type;
          *(_DWORD *)(v26 + 980) = SriovCurrentCapabilities->SriovCapabilities;
        }
        if ( NicSwitchHwCapabilities )
        {
          *(_OWORD *)(v26 + 984) = *(_OWORD *)&NicSwitchHwCapabilities->Header.Type;
          *(_OWORD *)(v26 + 1000) = *(_OWORD *)&NicSwitchHwCapabilities->NumMacAddressesPerPort;
          *(_OWORD *)(v26 + 1016) = *(_OWORD *)&NicSwitchHwCapabilities->NicSwitchCapabilities;
          *(_OWORD *)(v26 + 1032) = *(_OWORD *)&NicSwitchHwCapabilities->MaxNumVFs;
          *(_OWORD *)(v26 + 1048) = *(_OWORD *)&NicSwitchHwCapabilities->NdisReserved7;
          *(_OWORD *)(v26 + 1064) = *(_OWORD *)&NicSwitchHwCapabilities->NdisReserved10;
          *(_OWORD *)(v26 + 1080) = *(_OWORD *)&NicSwitchHwCapabilities->NdisReserved13;
          *(_OWORD *)(v26 + 1096) = *(_OWORD *)&NicSwitchHwCapabilities->NdisReserved17;
          *(_DWORD *)(v26 + 1112) = NicSwitchHwCapabilities->MaxNumQueuePairsForDefaultVPort;
        }
        if ( NicSwitchCurrentCapabilities )
        {
          *(_OWORD *)(v26 + 1116) = *(_OWORD *)&NicSwitchCurrentCapabilities->Header.Type;
          *(_OWORD *)(v26 + 1132) = *(_OWORD *)&NicSwitchCurrentCapabilities->NumMacAddressesPerPort;
          *(_OWORD *)(v26 + 1148) = *(_OWORD *)&NicSwitchCurrentCapabilities->NicSwitchCapabilities;
          *(_OWORD *)(v26 + 1164) = *(_OWORD *)&NicSwitchCurrentCapabilities->MaxNumVFs;
          *(_OWORD *)(v26 + 1180) = *(_OWORD *)&NicSwitchCurrentCapabilities->NdisReserved7;
          *(_OWORD *)(v26 + 1196) = *(_OWORD *)&NicSwitchCurrentCapabilities->NdisReserved10;
          *(_OWORD *)(v26 + 1212) = *(_OWORD *)&NicSwitchCurrentCapabilities->NdisReserved13;
          *(_OWORD *)(v26 + 1228) = *(_OWORD *)&NicSwitchCurrentCapabilities->NdisReserved17;
          *(_DWORD *)(v26 + 1244) = NicSwitchCurrentCapabilities->MaxNumQueuePairsForDefaultVPort;
        }
        if ( ReceiveFilterHwCapabilities )
        {
          *(_OWORD *)(v26 + 1248) = *(_OWORD *)&ReceiveFilterHwCapabilities->Header.Type;
          *(_OWORD *)(v26 + 1264) = *(_OWORD *)&ReceiveFilterHwCapabilities->NumQueues;
          *(_OWORD *)(v26 + 1280) = *(_OWORD *)&ReceiveFilterHwCapabilities->SupportedMacHeaderFields;
          *(_OWORD *)(v26 + 1296) = *(_OWORD *)&ReceiveFilterHwCapabilities->MinLookaheadSplitSize;
          *(_OWORD *)(v26 + 1312) = *(_OWORD *)&ReceiveFilterHwCapabilities->SupportedIPv6HeaderFields;
          *(_DWORD *)(v26 + 1328) = ReceiveFilterHwCapabilities->NdisReserved;
        }
        if ( ReceiveFilterCurrentCapabilities )
        {
          *(_OWORD *)(v26 + 1332) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->Header.Type;
          *(_OWORD *)(v26 + 1348) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->NumQueues;
          *(_OWORD *)(v26 + 1364) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->SupportedMacHeaderFields;
          *(_OWORD *)(v26 + 1380) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->MinLookaheadSplitSize;
          *(_OWORD *)(v26 + 1396) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->SupportedIPv6HeaderFields;
          *(_DWORD *)(v26 + 1412) = ReceiveFilterCurrentCapabilities->NdisReserved;
          v128.ReceiveFilterCapabilities = ReceiveFilterCurrentCapabilities;
        }
        NicSwitchCapabilities = v128.NicSwitchCapabilities;
        if ( NicSwitchCurrentCapabilities )
          NicSwitchCapabilities = NicSwitchCurrentCapabilities;
        v128.NicSwitchCapabilities = NicSwitchCapabilities;
        if ( v49 >= 4u )
        {
          if ( SriovCurrentCapabilities )
          {
            v128.SriovCapabilities = SriovCurrentCapabilities;
            if ( (unsigned int)ndisIovGetNicSwitchList(
                                 v22,
                                 NicSwitchCurrentCapabilities,
                                 SriovCurrentCapabilities,
                                 &v128.NicSwitchArray) )
            {
              FilterAdapterRegistry = -1073741823;
              goto LABEL_68;
            }
          }
          v128.BaseMiniportIfConnectorPresent = v22->IfBlock->ifConnectorPresent;
        }
        IfBlock = v22->IfBlock;
        v128.MiniportPhysicalDeviceObject = v22->PhysicalDeviceObject;
        v128.MacAddressLength = IfBlock->ifPhysAddress.Length;
        memmove(v128.CurrentMacAddress, IfBlock->ifPhysAddress.Address, v128.MacAddressLength);
        MediaConnectState = v128.MediaConnectState;
        *(_DWORD *)(v26 + 348) = v128.MediaDuplexState;
        *(_QWORD *)(v26 + 352) = v128.XmitLinkSpeed;
        *(_QWORD *)(v26 + 360) = v128.RcvLinkSpeed;
        *(_DWORD *)(v26 + 344) = MediaConnectState;
        if ( MediaConnectState == MediaConnectStateConnected )
        {
          v64 = (void (__stdcall *)(PVOID))ndisFilterCancelSendNetBufferLists;
          v65 = ndisFilterIndicateReceiveNetBufferLists;
          v66 = ndisFilterSendNetBufferLists;
        }
        else
        {
          ndisFilterXStateSetFlag((struct _NDIS_FILTER_BLOCK *)v26, 1);
          v64 = NdisQueryOffloadState;
          v65 = ndisFakeFilterReceiveHandler;
          v66 = ndisFakeFilterSendHandler;
        }
        *(_QWORD *)(v26 + 624) = v66;
        *(_QWORD *)(v26 + 632) = v65;
        *(_QWORD *)(v26 + 640) = v64;
        if ( (v22->MacOptions & 0x80000001) == 0x80000001 )
          MediaType = v22->MediaType;
        else
          MediaType = v128.MiniportMediaType;
        *(_DWORD *)(v26 + 336) = MediaType;
        *(_DWORD *)(v26 + 340) = v128.MiniportPhysicalMediaType;
        FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v26);
        if ( !FilterAdapterRegistry )
        {
          if ( (byte_140125103 & 1) != 0 )
            McTemplateK0juqjzzz_EtwWriteTransfer(
              *(_QWORD *)(v26 + 32) + 4008LL,
              *(_QWORD *)(v26 + 40),
              (const GUID *)(v26 + 664),
              v26 + 664,
              *(_BYTE *)(v26 + 64),
              6,
              *(_QWORD *)(v26 + 32) + 4008LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 3856LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v26 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v26 + 48) + 8LL));
          if ( Microsoft_Windows_Networking_CorrelationEnabled )
          {
            p_InterfaceGuid = &v22->InterfaceGuid;
            v69 = (const GUID *)(v26 + 664);
            Data1 = 0;
            EventDescriptor = (EVENT_DESCRIPTOR)ActivityTransfer;
            if ( Microsoft_Windows_Networking_CorrelationTraceActivityPayload )
            {
              *(_QWORD *)&v131.Size = 16LL;
              v131.Ptr = (unsigned __int64)&Microsoft_Windows_Networking_ProviderId;
              p_Data1 = &Data1;
              v133 = 4LL;
              EtwWriteTransfer(
                Microsoft_Windows_Networking_CorrelationHandle,
                &EventDescriptor,
                v69,
                p_InterfaceGuid,
                2u,
                &v131);
            }
            else
            {
              EtwWriteTransfer(
                Microsoft_Windows_Networking_CorrelationHandle,
                &EventDescriptor,
                v69,
                p_InterfaceGuid,
                0,
                0LL);
            }
          }
          v128.IfIndex = *(_DWORD *)(v26 + 680);
          v33 = 1;
          v128.NetLuid.Value = *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1312LL);
          FilterAdapterRegistry = ndisFInvokeAttach((struct _NDIS_FILTER_BLOCK *)v26, &v128);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            *(_QWORD *)v104 = &v24->DefaultFilterCharacteristics.FriendlyName;
            WPP_RECORDER_SF_qqZddZD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v24->DefaultFilterCharacteristics.MajorNdisVersion,
              (__int64)&v24->DefaultFilterCharacteristics.FriendlyName,
              v70,
              UserDataCounta);
          }
          if ( !FilterAdapterRegistry )
          {
            v73 = *(_DWORD *)(v26 + 336);
            MiniportMediaType = v128.MiniportMediaType;
            if ( v73 != v128.MiniportMediaType && (v22->MacOptions & 0x80000001) != 0x80000001 )
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                *(_DWORD *)v105 = v128.MiniportMediaType;
                WPP_RECORDER_SF_qqLd(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0xDu,
                  0x1Au,
                  (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
                  (char)v22,
                  v26,
                  v73,
                  *(_QWORD *)v105);
                MiniportMediaType = v128.MiniportMediaType;
              }
              if ( Microsoft_Windows_NDISEnableBits < 0 )
                McTemplateK0jqxjqxdd_EtwWriteTransfer(
                  *(_QWORD *)(v26 + 688),
                  v26 + 664,
                  &v22->InterfaceGuid,
                  (__int64)&v22->InterfaceGuid,
                  v22->IfIndex,
                  v22->NetLuid.Value,
                  v26 + 664,
                  *(_DWORD *)(v26 + 680),
                  *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1312LL),
                  *(_DWORD *)(v26 + 336),
                  MiniportMediaType);
              v108 = 1;
            }
            v75 = *(_QWORD *)(v26 + 120);
            if ( v75 )
            {
              v76 = *(_QWORD *)(v26 + 112);
              if ( v76 )
                IfIndex = *(_DWORD *)(v76 + 680);
              else
                IfIndex = v22->IfIndex;
              NdisIfDeleteIfStackEntry(*(_DWORD *)(v75 + 680), IfIndex);
            }
            v78 = *(_QWORD *)(v26 + 112);
            if ( v78 )
              v79 = *(_DWORD *)(v78 + 680);
            else
              v79 = *(_DWORD *)(*(_QWORD *)(v26 + 32) + 4056LL);
            NdisIfAddIfStackEntry(*(_DWORD *)(v26 + 680), v79);
            v80 = *(_QWORD *)(v26 + 120);
            if ( v80 )
              NdisIfAddIfStackEntry(*(_DWORD *)(v80 + 680), *(_DWORD *)(v26 + 680));
            v81 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
            ndisIfUpdateFilterIfStack(*(struct _NDIS_MINIPORT_BLOCK **)(v26 + 32));
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v81);
            v82 = *(_QWORD *)(v26 + 112);
            if ( v82 )
            {
              v83 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v82 + 144));
              *(_QWORD *)(v82 + 152) = KeGetCurrentThread();
              v84 = v83;
              *(_DWORD *)(v26 + 344) = *(_DWORD *)(v82 + 380);
              *(_DWORD *)(v26 + 348) = *(_DWORD *)(v82 + 384);
              *(_QWORD *)(v26 + 352) = *(_QWORD *)(v82 + 392);
              *(_QWORD *)(v26 + 360) = *(_QWORD *)(v82 + 400);
              *(_DWORD *)(v26 + 368) = *(_DWORD *)(v82 + 408);
              *(_DWORD *)(v26 + 372) = *(_DWORD *)(v82 + 412);
              ndisOpenRef((PKSPIN_LOCK)(v26 + 312));
              *(_QWORD *)(v82 + 152) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v82 + 144), v84);
            }
            else
            {
              v85 = KeAcquireSpinLockRaiseToDpc(&v22->Lock);
              v22->MiniportThread = KeGetCurrentThread();
              *(_DWORD *)(v26 + 344) = v22->MiniportMediaConnectState;
              *(_DWORD *)(v26 + 348) = v22->MiniportMediaDuplexState;
              *(_QWORD *)(v26 + 352) = v22->MiniportXmitLinkSpeed;
              *(_QWORD *)(v26 + 360) = v22->MiniportRcvLinkSpeed;
              *(_DWORD *)(v26 + 368) = v22->MiniportPauseFunctions;
              *(_DWORD *)(v26 + 372) = v22->MiniportAutoNegotiationFlags;
              ndisOpenRef((PKSPIN_LOCK)(v26 + 312));
              v22->MiniportThread = 0LL;
              KeReleaseSpinLock(&v22->Lock, v85);
            }
            *(_DWORD *)(*(_QWORD *)(v26 + 688) + 1220LL) = *(_DWORD *)(v26 + 344);
            *(_DWORD *)(*(_QWORD *)(v26 + 688) + 1224LL) = *(_DWORD *)(v26 + 348);
            *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1208LL) = *(_QWORD *)(v26 + 360);
            *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1200LL) = *(_QWORD *)(v26 + 352);
            ndisIndicateInitialStateToFilter((struct _NDIS_FILTER_BLOCK *)v26);
            v86 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 144));
            *(_QWORD *)(v26 + 152) = KeGetCurrentThread();
            FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v26);
            FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 4);
            if ( v108 )
            {
              FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 0x8000);
              MiniportPhysicalMediaType = v128.MiniportPhysicalMediaType;
              v88 = v128.MiniportMediaType;
              ++v22->MediaChangeFilters;
              *(_DWORD *)(v26 + 340) = MiniportPhysicalMediaType;
              v89 = *(_QWORD *)(v26 + 688);
              *(_DWORD *)(v26 + 336) = v88;
              *(_DWORD *)(v89 + 564) = v88;
              *(_DWORD *)(*(_QWORD *)(v26 + 688) + 568LL) = *(_DWORD *)(v26 + 340);
              *(_QWORD *)(v26 + 152) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v86);
              v90 = *(_DWORD *)(v26 + 336);
              v91 = *(_DWORD *)(v26 + 340);
              v22->MediaType = v90;
              v22->PhysicalMediumType = v91;
              if ( v90 == NdisMedium802_3
                && EthAddConversionFilter(
                     v22->TopFilterRestartAttributes.MaxMulticastListSize,
                     v22->IfBlock->ifPhysAddress.Address,
                     v22->EthDB) )
              {
                v22->EthDB->Miniport = v22;
                v22->HasConversionFilter = 1;
              }
            }
            else
            {
              *(_QWORD *)(v26 + 152) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v86);
            }
            v72 = (byte_140125103 & 1) == 0;
            *(_BYTE *)(v26 + 64) = 2;
            if ( !v72 )
              McTemplateK0juqjzzz_EtwWriteTransfer(
                *(_QWORD *)(v26 + 32) + 4008LL,
                *(_QWORD *)(v26 + 40),
                (const GUID *)(v26 + 664),
                v26 + 664,
                2,
                8,
                *(_QWORD *)(v26 + 32) + 4008LL,
                *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 3856LL) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v26 + 40) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v26 + 48) + 8LL));
            ndisPktMonFilterRegister((struct _NDIS_FILTER_BLOCK *)v26);
            ndisReferenceMiniport(v22, 0x28u);
            if ( v22->MajorNdisVersion < 6u && !v22->Miniport5HasNdis6Component )
              v22->Miniport5HasNdis6Component = 1;
            ndisSetupWmiNode(
              v22,
              *(const struct _UNICODE_STRING **)(v26 + 48),
              v22->BindPaths->Paths[0].Length + v24->DefaultFilterCharacteristics.UniqueName.Length + 4,
              (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
              (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
            v92 = WnodeEventItem;
            if ( WnodeEventItem )
            {
              v93 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
              memmove(
                v93,
                v24->DefaultFilterCharacteristics.UniqueName.Buffer,
                v24->DefaultFilterCharacteristics.UniqueName.Length);
              memmove(
                &v93[v24->DefaultFilterCharacteristics.UniqueName.Length + 2],
                v22->BindPaths->Paths[0].Buffer,
                v22->BindPaths->Paths[0].Length);
              v96 = IoWMIWriteEvent(v92);
              if ( v96 < 0 )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v94) = 2;
                  WPP_RECORDER_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v94,
                    1,
                    27,
                    (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids);
                }
                if ( (byte_140125101 & 1) != 0 )
                  McTemplateK0qqq_EtwWriteTransfer(
                    v95,
                    &FilterArrivalIndicationFailed,
                    (const GUID *)(v26 + 664),
                    v96,
                    1,
                    0);
                ExFreePoolWithTag(v92, 0);
              }
            }
            Ndis::BindEngine::BeginPolicyUpdates(&v22->BindEngine);
            v23 = a4;
            if ( Ndis::BindState::SetPause(&a4->BindState, DatapathRunning, PauseReason_InitialPause) )
            {
              memset(v129, 0, sizeof(v129));
              if ( (unsigned __int8)byte_140126C63 >= 4u )
              {
                ndisGetBindLinkNameForTracing(a4, v129);
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v97,
                    0x1Cu,
                    0x1Cu,
                    (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
                    v129[0].Buffer,
                    *(_QWORD *)&v129[0].Length);
              }
            }
            Ndis::BindEngine::EndPolicyUpdates(&v22->BindEngine);
            if ( v22->MajorNdisVersion < 6u && !v22->Miniport5HasNdis6Component )
              v22->Miniport5HasNdis6Component = 1;
            goto LABEL_10;
          }
          v23 = a4;
          a4->BindState.AllowBindDespiteMandatory = v128.Flags & 1;
          v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 144));
          *(_QWORD *)(v26 + 152) = KeGetCurrentThread();
          FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v26);
          if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)v26, 256) )
            FILTER_CLEAR_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 256);
          FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 8);
          *(_QWORD *)(v26 + 152) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v71);
          v72 = (byte_140125103 & 1) == 0;
          *(_BYTE *)(v26 + 64) = 0;
          if ( !v72 )
            McTemplateK0juqjzzz_EtwWriteTransfer(
              *(_QWORD *)(v26 + 32) + 4008LL,
              *(_QWORD *)(v26 + 40),
              (const GUID *)(v26 + 664),
              v26 + 664,
              0,
              7,
              *(_QWORD *)(v26 + 32) + 4008LL,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 3856LL) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v26 + 40) + 8LL),
              *(const wchar_t **)(*(_QWORD *)(v26 + 48) + 8LL));
LABEL_70:
          if ( *(_QWORD *)(v26 + 752) )
          {
            Ndis::BindEngine::BeginPolicyUpdates(&v22->BindEngine);
            Ndis::BindState::RemoveBindContext(&v23->BindState, (void *)v26);
            Ndis::BindEngine::EndPolicyUpdates(&v22->BindEngine);
            *(_QWORD *)(v26 + 752) = 0LL;
          }
          v98 = v22;
          if ( !v109 )
            v98 = 0LL;
          ndisFilterAttachCleanUp((_NDIS_FILTER_BLOCK *)v26, v98, v33);
          goto LABEL_198;
        }
        goto LABEL_68;
      }
    }
    else if ( ndisDatapathVerifierMode != 2 )
    {
      goto LABEL_46;
    }
    FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 512);
    goto LABEL_46;
  }
  v24 = v125;
  FilterAdapterRegistry = -1073741823;
LABEL_9:
  v26 = *(_QWORD *)v124;
LABEL_10:
  if ( ndisVerifierNdisDispatch
    && v26
    && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v26 + 16) + 16LL))
    && !*(_QWORD *)(v26 + 776)
    && (*((int (__fastcall **)(_DRIVER_OBJECT *, __int64, void **))ndisVerifierNdisDispatch + 1))(
         v24->DriverObject,
         v26,
         &v24->FilterDriverContext) < 0
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v27,
      13,
      29,
      (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
      v26);
  }
LABEL_198:
  ndisHandleFilterHandlersChange(v22);
  if ( v128.NicSwitchArray )
  {
    ExFreePoolWithTag(v128.NicSwitchArray, 0);
    v128.NicSwitchArray = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v23->BindState.AllowBindDespiteMandatory
    && (v23->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v22);
  }
  ndisDereferenceMiniport(v22, 0x27u);
  ndisDereferenceFilterDriver(v24, 0, 0);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v104 = FilterAdapterRegistry;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Eu,
      (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
      (char)v24,
      (char)v22,
      *(_QWORD *)v104);
  }
  return FilterAdapterRegistry;
}
