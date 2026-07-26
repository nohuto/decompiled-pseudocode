/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015FD60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140017B10 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14002A980 (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisIfAddIfStackEntry @ 0x14002ADF0 (NdisIfAddIfStackEntry.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14002B250 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x140033970 (-ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140033D30 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140034770 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x140037940 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x14004E700 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004EAC0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x14004EE60 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F3F0 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1400523E0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x140055180 (-ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14005C760 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqZddZD @ 0x14005E000 (WPP_RECORDER_SF_qqZddZD.c)
 *     WPP_RECORDER_SF_qqZ @ 0x140065A10 (WPP_RECORDER_SF_qqZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140067700 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x14006A450 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x14006B450 (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x14006D290 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x140072380 (-ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14007A690 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     McTemplateK0jqxjqxdd_EtwWriteTransfer @ 0x14008AF30 (McTemplateK0jqxjqxdd_EtwWriteTransfer.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008BA00 (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x14008C158 (-EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04 (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140092FAC (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ndisRegisterFilterTriageData @ 0x140098178 (ndisRegisterFilterTriageData.c)
 *     NdisIfDeleteIfStackEntry @ 0x1400C8690 (NdisIfDeleteIfStackEntry.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1400DEC4C (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_N.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140141E6C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143D04 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1401532C0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140153320 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14015EC60 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x140160140 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1401603A0 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisPktMonFilterRegister @ 0x140164210 (ndisPktMonFilterRegister.c)
 *     ?ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z @ 0x140164B20 (-ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140164C00 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1401659F0 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140165A30 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140166940 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140167330 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x140167EF0 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
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
  char v30; // r12
  __int64 v31; // rdx
  size_t v32; // r8
  ULONG v33; // r9d
  struct Rtl::KString *v34; // rax
  void *v35; // rcx
  unsigned __int16 v36; // bx
  _WORD *v37; // rax
  __int64 Watchdog; // rax
  struct NDISWATCHDOG__ *v39; // rcx
  __int64 v40; // rbx
  const struct _NDIS_FILTER_BLOCK *v41; // rcx
  int v42; // edx
  struct _NDIS_FILTER_BLOCK *v43; // rcx
  KIRQL v44; // r8
  struct _NDIS_FILTER_BLOCK *v45; // r13
  __int64 v46; // rbx
  KIRQL v47; // al
  struct _NDIS_MINIPORT_BLOCK *BaseMiniport; // r12
  KIRQL v49; // al
  struct _NDIS_MINIPORT_BLOCK *v50; // rdx
  __int64 v51; // rax
  unsigned __int8 v52; // al
  UCHAR v53; // r11
  __int64 v54; // rdx
  __int64 v55; // rcx
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
  void (__stdcall *v68)(PVOID); // r8
  void *v69; // r9
  void *v70; // r10
  _NDIS_MEDIUM MediaType; // eax
  const GUID *p_InterfaceGuid; // r9
  const GUID *v73; // r8
  __int64 v74; // r9
  const struct _NDIS_FILTER_BLOCK *v75; // rcx
  int v76; // edx
  struct _NDIS_FILTER_BLOCK *v77; // rcx
  KIRQL v78; // r8
  bool v79; // zf
  int v80; // ecx
  char MiniportMediaType; // r10
  __int64 v82; // rcx
  __int64 v83; // rax
  NET_IFINDEX IfIndex; // edx
  __int64 v85; // rax
  NET_IFINDEX v86; // edx
  __int64 v87; // rcx
  KIRQL v88; // bl
  __int64 v89; // r13
  KIRQL v90; // al
  KIRQL v91; // bl
  KIRQL v92; // bl
  struct _NDIS_FILTER_BLOCK *v93; // rcx
  struct _NDIS_FILTER_BLOCK *v94; // rcx
  KIRQL v95; // r8
  _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediaType; // eax
  _NDIS_MEDIUM v97; // ecx
  __int64 v98; // rax
  KIRQL v99; // r8
  _NDIS_MEDIUM v100; // ecx
  _NDIS_PHYSICAL_MEDIUM v101; // eax
  PVOID v102; // r12
  char *v103; // rbx
  int v104; // edx
  __int64 v105; // rcx
  NTSTATUS v106; // ebx
  int v107; // edx
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-130h]
  int UserDataCounta; // [rsp+20h] [rbp-130h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-128h]
  char v111[8]; // [rsp+30h] [rbp-120h]
  char v112[8]; // [rsp+30h] [rbp-120h]
  char v113[8]; // [rsp+38h] [rbp-118h]
  char v114[8]; // [rsp+38h] [rbp-118h]
  char v115[8]; // [rsp+40h] [rbp-110h]
  int v116; // [rsp+58h] [rbp-F8h]
  int v117; // [rsp+88h] [rbp-C8h]
  char v118; // [rsp+D0h] [rbp-80h]
  char v119; // [rsp+D1h] [rbp-7Fh]
  unsigned int Data1; // [rsp+E0h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v122; // [rsp+E8h] [rbp-68h]
  int v123; // [rsp+F0h] [rbp-60h]
  int v124; // [rsp+F4h] [rbp-5Ch]
  int v125; // [rsp+F8h] [rbp-58h]
  int v126; // [rsp+FCh] [rbp-54h]
  int v127; // [rsp+100h] [rbp-50h]
  int v128; // [rsp+104h] [rbp-4Ch]
  int v129; // [rsp+108h] [rbp-48h]
  int v130; // [rsp+10Ch] [rbp-44h]
  int v131; // [rsp+110h] [rbp-40h]
  ULONG v132; // [rsp+114h] [rbp-3Ch]
  int v133; // [rsp+118h] [rbp-38h] BYREF
  char v134[8]; // [rsp+120h] [rbp-30h]
  struct _NDIS_FILTER_DRIVER_BLOCK *v135; // [rsp+128h] [rbp-28h]
  struct _NDIS_FILTER_BLOCK *v136; // [rsp+130h] [rbp-20h] BYREF
  PVOID WnodeEventItem; // [rsp+138h] [rbp-18h] BYREF
  struct _NDIS_FILTER_ATTACH_PARAMETERS v138; // [rsp+140h] [rbp-10h] BYREF
  struct _UNICODE_STRING v139[10]; // [rsp+220h] [rbp+D0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+2C0h] [rbp+170h] BYREF
  _EVENT_DATA_DESCRIPTOR v141; // [rsp+2D0h] [rbp+180h] BYREF
  unsigned int *p_Data1; // [rsp+2E0h] [rbp+190h]
  __int64 v143; // [rsp+2E8h] [rbp+198h]
  wchar_t pszSrc[88]; // [rsp+2F0h] [rbp+1A0h] BYREF

  v123 = a3;
  v135 = a2;
  v122 = a1;
  *(_QWORD *)v134 = 0LL;
  v136 = 0LL;
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  v119 = 0;
  memset(&v138, 0, sizeof(v138));
  v133 = 0;
  v118 = 0;
  WnodeEventItem = 0LL;
  if ( !ndisReferenceFilterDriver(a2, 0) )
    return 3221291010LL;
  if ( !(unsigned __int8)ndisReferenceMiniport(a1, 0x27u) )
  {
    ndisDereferenceFilterDriver(a2, 0, 0);
    return 3221291010LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x18u,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
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
  v124 = v12;
  v125 = v13;
  v126 = v122->InterfaceGuid.Data4[4];
  v127 = v122->InterfaceGuid.Data4[3];
  v128 = v122->InterfaceGuid.Data4[2];
  v129 = v122->InterfaceGuid.Data4[1];
  v130 = v122->InterfaceGuid.Data4[0];
  v131 = v122->InterfaceGuid.Data3;
  v132 = v122->InterfaceGuid.Data2;
  Data1 = v122->InterfaceGuid.Data1;
  v117 = v19;
  v116 = v11;
  *(_DWORD *)v113 = v129;
  *(_DWORD *)v111 = v130;
  LODWORD(UserData) = v131;
  UserDataCount[0] = v132;
  v22 = v122;
  v23 = a4;
  if ( (int)RtlStringCbPrintfW(
              pszSrc,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              Data1,
              *(_QWORD *)UserDataCount,
              UserData,
              *(_QWORD *)v111,
              *(_QWORD *)v113,
              v128,
              v127,
              v126,
              v116,
              v10,
              v9,
              (_DWORD)p,
              Data2,
              Data3,
              v117,
              v18,
              v17,
              v16,
              v15,
              v14,
              v13,
              v12,
              v123) >= 0 )
  {
    ndisFindAdjacentFilters(v122, a4, (struct _NDIS_FILTER_BLOCK **)&EventDescriptor, &v136);
    v24 = v135;
    v28 = v135->DefaultFilterCharacteristics.MajorNdisVersion > 6u
       || v135->DefaultFilterCharacteristics.MajorNdisVersion == 6
       && v135->DefaultFilterCharacteristics.MinorNdisVersion >= 0x28u;
    FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v135->DefaultFilterCharacteristics.ServiceName, v122, v28);
    if ( FilterAdapterRegistry )
      goto LABEL_9;
    if ( v122->MajorNdisVersion < 6u && (v122->LinkStateIndicationFlags & 1) == 0 )
      ndisMDoMiniportOp(v122, 1, 0x10114u, &v133, 4u, 1u, 1u);
    if ( !ndisReferenceFilterDriver(v24, 3u) )
    {
      FilterAdapterRegistry = -1073676282;
      goto LABEL_9;
    }
    Pool2 = ExAllocatePool2(64LL, 1424LL, 1650869326LL);
    v26 = Pool2;
    if ( !Pool2 )
    {
      FilterAdapterRegistry = -1073741670;
      ndisDereferenceFilterDriver(v24, 0, 3u);
      goto LABEL_10;
    }
    *(_QWORD *)(Pool2 + 184) = -1LL;
    v30 = 0;
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
    *(_QWORD *)(Pool2 + 1416) = 0LL;
    *(_DWORD *)Pool2 = 93323525;
    *(_QWORD *)(Pool2 + 16) = v24;
    if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
    {
      ndisInitializeRef((struct _REFERENCE_EX *)(v26 + 72), 3u);
      ndisInitializeZeroBasedRef((struct _REFERENCE_EX *)(v26 + 312));
      ndisCloseRef((PKSPIN_LOCK)(v26 + 312));
    }
    v34 = Rtl::KString::Initialize(pszSrc, v31, v32, v33);
    v35 = *(void **)(v26 + 40);
    *(_QWORD *)(v26 + 40) = v34;
    if ( v35 )
      ExFreePoolWithTag(v35, 0x7274534Bu);
    if ( !*(_QWORD *)(v26 + 40) )
    {
      FilterAdapterRegistry = -1073741670;
      goto LABEL_74;
    }
    v36 = v24->DefaultFilterCharacteristics.FriendlyName.Length + 14 + v22->pAdapterInstanceName->Length;
    v37 = (_WORD *)ExAllocatePool2(66LL, v36 + 16LL, 1953711182LL);
    *(_QWORD *)(v26 + 48) = v37;
    if ( !v37 )
    {
      FilterAdapterRegistry = -1073741670;
      goto LABEL_74;
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
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 144));
    *(_QWORD *)(v26 + 152) = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v26);
    if ( FILTER_TEST_FLAG(v41, 256) )
      FILTER_CLEAR_FLAG(v43, v42);
    FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 8);
    *(_QWORD *)(v26 + 152) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v44);
    *(_BYTE *)(v26 + 64) = 0;
    if ( !(unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
    {
      ndisInitializeRef((struct _REFERENCE_EX *)(v26 + 72), 3u);
      ndisInitializeZeroBasedRef((struct _REFERENCE_EX *)(v26 + 312));
      ndisCloseRef((PKSPIN_LOCK)(v26 + 312));
    }
    if ( ndisDatapathVerifierMode == 1 )
    {
      if ( !MmIsDriverVerifyingByAddress(*(PVOID *)(*(_QWORD *)(v26 + 16) + 176LL))
        || !ndisDriverVerifierNdisFlagEnabled() )
      {
LABEL_50:
        if ( v22->MajorNdisVersion >= 6u )
        {
          if ( ndisNblContextVerifierMode == 1 )
          {
            if ( !MmIsDriverVerifyingByAddress(*(PVOID *)(*(_QWORD *)(v26 + 16) + 176LL))
              || !ndisDriverVerifierNdisFlagEnabled() )
            {
              goto LABEL_57;
            }
          }
          else if ( ndisNblContextVerifierMode != 2 )
          {
            goto LABEL_57;
          }
          *(_OWORD *)(v26 + 928) = 0LL;
          *(_OWORD *)(v26 + 944) = 0LL;
          FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 1024);
        }
LABEL_57:
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
          goto LABEL_74;
        v45 = v136;
        v46 = *(_QWORD *)&EventDescriptor.Id;
        *(_QWORD *)(v26 + 208) = ndisStackExpansionFallbackWorker;
        *(_QWORD *)(v26 + 216) = v26;
        *(_QWORD *)(v26 + 192) = 0LL;
        *(_QWORD *)(v26 + 112) = v45;
        *(_QWORD *)(v26 + 120) = v46;
        if ( !v45 && !v46 && v22->HighestFilter )
        {
          FilterAdapterRegistry = -1073741823;
LABEL_73:
          v23 = a4;
          goto LABEL_74;
        }
        v47 = KeAcquireSpinLockRaiseToDpc(&v22->Lock);
        if ( v46 )
          *(_QWORD *)(v46 + 112) = v26;
        else
          v22->HighestFilter = (_NDIS_FILTER_BLOCK *)v26;
        if ( v45 )
          v45->HigherFilter = (_NDIS_FILTER_BLOCK *)v26;
        else
          v22->LowestFilter = (_NDIS_FILTER_BLOCK *)v26;
        *(_QWORD *)(v26 + 32) = v22;
        v22->MiniportThread = 0LL;
        KeReleaseSpinLock(&v22->Lock, v47);
        v119 = 1;
        BaseMiniport = v22;
        if ( v22->BaseMiniport )
          BaseMiniport = v22->BaseMiniport;
        v49 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
        *(_QWORD *)(v26 + 104) = ndisGlobalFilterList;
        ndisGlobalFilterList = (struct _NDIS_FILTER_BLOCK *)v26;
        KeReleaseSpinLock(&ndisGlobalFilterListLock, v49);
        if ( !(unsigned __int8)ndisQueueFilterOnDriver((struct _NDIS_FILTER_BLOCK *)v26, v24) )
        {
          FilterAdapterRegistry = -1073676286;
LABEL_72:
          v30 = 0;
          goto LABEL_73;
        }
        if ( (v24->Bind._p->_t.FilterBindFlags & 2) != 0 )
        {
          FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                    &v24->DefaultFilterCharacteristics.ServiceName,
                                    (struct _NDIS_FILTER_BLOCK *)v26,
                                    v22);
          if ( FilterAdapterRegistry )
            goto LABEL_72;
        }
        *(_QWORD *)(v26 + 752) = a4;
        *(_BYTE *)(v26 + 64) = 1;
        Ndis::BindEngine::BeginPolicyUpdates(&v22->BindEngine);
        Ndis::BindState::AddBindContext(&a4->BindState, (void *)v26);
        Ndis::BindEngine::EndPolicyUpdates(&v22->BindEngine);
        memset(&v138, 0, sizeof(v138));
        v51 = *(_QWORD *)(v26 + 16);
        if ( *(_BYTE *)(v51 + 100) > 6u )
          goto LABEL_88;
        v52 = *(_BYTE *)(v51 + 101);
        if ( !v52 )
        {
          v53 = 1;
          v138.Header.Size = 164;
          goto LABEL_89;
        }
        if ( v52 < 0x14u )
        {
          v53 = 2;
          v138.Header.Size = 176;
          goto LABEL_89;
        }
        if ( v52 >= 0x1Eu )
        {
LABEL_88:
          v138.Header.Size = 224;
          v53 = 4;
        }
        else
        {
          v53 = 3;
          v138.Header.Size = 200;
        }
LABEL_89:
        v54 = *(_QWORD *)(v26 + 112);
        v138.Header.Revision = v53;
        v138.Header.Type = -103;
        v138.BaseMiniportIfIndex = BaseMiniport->IfIndex;
        v138.BaseMiniportNetLuid.Value = BaseMiniport->NetLuid.Value;
        v138.BaseMiniportName = &BaseMiniport->MiniportName;
        v138.BaseMiniportInstanceName = BaseMiniport->pAdapterInstanceName;
        if ( v54 )
        {
          v138.LowerIfIndex = *(_DWORD *)(v54 + 680);
          v138.LowerIfNetLuid.Value = *(_QWORD *)(*(_QWORD *)(v54 + 688) + 1312LL);
        }
        else
        {
          v55 = *(_QWORD *)(v26 + 32);
          v138.LowerIfIndex = *(_DWORD *)(v55 + 4056);
          v138.LowerIfNetLuid.Value = *(_QWORD *)(v55 + 4024);
        }
        v138.FilterModuleGuidName = *(_UNICODE_STRING **)(v26 + 40);
        v138.MiniportMediaSpecificAttributes = v22->MediaSpecificAttributes;
        if ( (v22->MacOptions & 0x80000001) == 0x80000001 )
        {
          MiniportPhysicalMediumType = v22->MiniportPhysicalMediumType;
          v138.MiniportMediaType = NdisMediumWan;
        }
        else if ( v45 )
        {
          v138.MiniportMediaType = v45->MediaType;
          MiniportPhysicalMediumType = v45->PhysicalMediaType;
        }
        else
        {
          v138.MiniportMediaType = v22->MiniportMediaType;
          MiniportPhysicalMediumType = v22->MiniportPhysicalMediumType;
        }
        v138.MiniportPhysicalMediaType = MiniportPhysicalMediumType;
        if ( v54 )
        {
          v138.MediaConnectState = *(_DWORD *)(v54 + 380);
          v138.MediaDuplexState = *(_DWORD *)(v54 + 384);
          v138.XmitLinkSpeed = *(_QWORD *)(v54 + 392);
          v138.RcvLinkSpeed = *(_QWORD *)(v54 + 400);
          v138.DefaultOffloadConfiguration = *(_NDIS_OFFLOAD **)(v54 + 656);
        }
        else
        {
          v138.MediaConnectState = v22->MiniportMediaConnectState;
          v138.MediaDuplexState = v22->MiniportMediaDuplexState;
          v138.XmitLinkSpeed = v22->MiniportXmitLinkSpeed;
          v138.RcvLinkSpeed = v22->MiniportRcvLinkSpeed;
          Offload = v22->Offload;
          if ( Offload && Offload->SupportsOffload )
            v138.DefaultOffloadConfiguration = &Offload->MiniportCurrentConfig;
          else
            v138.DefaultOffloadConfiguration = 0LL;
        }
        SriovCurrentCapabilities = 0LL;
        HDSplitCurrentConfig = v138.HDSplitCurrentConfig;
        NicSwitchHwCapabilities = 0LL;
        ReceiveFilterHwCapabilities = 0LL;
        if ( v22->HDSplitCurrentConfig )
          HDSplitCurrentConfig = v22->HDSplitCurrentConfig;
        ReceiveFilterCurrentCapabilities = 0LL;
        v138.HDSplitCurrentConfig = HDSplitCurrentConfig;
        SriovHwCapabilities = 0LL;
        NicSwitchCurrentCapabilities = 0LL;
        if ( v54 )
        {
          if ( *(_WORD *)(v54 + 962) )
            SriovHwCapabilities = (_NDIS_SRIOV_CAPABILITIES *)(v54 + 960);
          if ( *(_WORD *)(v54 + 974) )
            SriovCurrentCapabilities = (_NDIS_SRIOV_CAPABILITIES *)(v54 + 972);
          if ( *(_WORD *)(v54 + 986) )
            NicSwitchHwCapabilities = (_NDIS_NIC_SWITCH_CAPABILITIES *)(v54 + 984);
          if ( *(_WORD *)(v54 + 1118) )
            NicSwitchCurrentCapabilities = (_NDIS_NIC_SWITCH_CAPABILITIES *)(v54 + 1116);
          if ( *(_WORD *)(v54 + 1250) )
            ReceiveFilterHwCapabilities = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)(v54 + 1248);
          if ( *(_WORD *)(v54 + 1334) )
            ReceiveFilterCurrentCapabilities = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)(v54 + 1332);
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
          v138.ReceiveFilterCapabilities = ReceiveFilterCurrentCapabilities;
        }
        NicSwitchCapabilities = v138.NicSwitchCapabilities;
        if ( NicSwitchCurrentCapabilities )
          NicSwitchCapabilities = NicSwitchCurrentCapabilities;
        v138.NicSwitchCapabilities = NicSwitchCapabilities;
        if ( v53 >= 4u )
        {
          if ( SriovCurrentCapabilities )
          {
            v138.SriovCapabilities = SriovCurrentCapabilities;
            if ( (unsigned int)ndisIovGetNicSwitchList(
                                 v22,
                                 NicSwitchCurrentCapabilities,
                                 SriovCurrentCapabilities,
                                 &v138.NicSwitchArray) )
            {
              FilterAdapterRegistry = -1073741823;
              goto LABEL_72;
            }
          }
          v138.BaseMiniportIfConnectorPresent = v22->IfBlock->ifConnectorPresent;
        }
        IfBlock = v22->IfBlock;
        v138.MiniportPhysicalDeviceObject = v22->PhysicalDeviceObject;
        v138.MacAddressLength = IfBlock->ifPhysAddress.Length;
        memmove(v138.CurrentMacAddress, IfBlock->ifPhysAddress.Address, v138.MacAddressLength);
        MediaConnectState = v138.MediaConnectState;
        *(_DWORD *)(v26 + 348) = v138.MediaDuplexState;
        *(_QWORD *)(v26 + 352) = v138.XmitLinkSpeed;
        *(_QWORD *)(v26 + 360) = v138.RcvLinkSpeed;
        *(_DWORD *)(v26 + 344) = MediaConnectState;
        if ( MediaConnectState == MediaConnectStateConnected )
        {
          v68 = (void (__stdcall *)(PVOID))ndisFilterCancelSendNetBufferLists;
          v69 = ndisFilterIndicateReceiveNetBufferLists;
          v70 = ndisFilterSendNetBufferLists;
        }
        else
        {
          ndisFilterXStateSetFlag((struct _NDIS_FILTER_BLOCK *)v26, 1);
          v68 = NdisQueryOffloadState;
          v69 = ndisFakeFilterReceiveHandler;
          v70 = ndisFakeFilterSendHandler;
        }
        *(_QWORD *)(v26 + 624) = v70;
        *(_QWORD *)(v26 + 632) = v69;
        *(_QWORD *)(v26 + 640) = v68;
        if ( (v22->MacOptions & 0x80000001) == 0x80000001 )
          MediaType = v22->MediaType;
        else
          MediaType = v138.MiniportMediaType;
        *(_DWORD *)(v26 + 336) = MediaType;
        *(_DWORD *)(v26 + 340) = v138.MiniportPhysicalMediaType;
        FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v26);
        if ( !FilterAdapterRegistry )
        {
          if ( !(unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline()
            || (FilterAdapterRegistry = ndisRegisterFilterTriageData((_LIST_ENTRY *)v26)) == 0 )
          {
            if ( (byte_14011B103 & 1) != 0 )
              McTemplateK0juqjzzz_EtwWriteTransfer(
                *(_QWORD *)(v26 + 32) + 4008LL,
                *(_QWORD *)(v26 + 40),
                v26 + 664,
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
              v73 = (const GUID *)(v26 + 664);
              Data1 = 0;
              EventDescriptor = (EVENT_DESCRIPTOR)ActivityTransfer;
              if ( Microsoft_Windows_Networking_CorrelationTraceActivityPayload )
              {
                *(_QWORD *)&v141.Size = 16LL;
                v141.Ptr = (unsigned __int64)&Microsoft_Windows_Networking_ProviderId;
                p_Data1 = &Data1;
                v143 = 4LL;
                EtwWriteTransfer(
                  Microsoft_Windows_Networking_CorrelationHandle,
                  &EventDescriptor,
                  v73,
                  p_InterfaceGuid,
                  2u,
                  &v141);
              }
              else
              {
                EtwWriteTransfer(
                  Microsoft_Windows_Networking_CorrelationHandle,
                  &EventDescriptor,
                  v73,
                  p_InterfaceGuid,
                  0,
                  0LL);
              }
            }
            v138.IfIndex = *(_DWORD *)(v26 + 680);
            v30 = 1;
            v138.NetLuid.Value = *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1312LL);
            FilterAdapterRegistry = ndisFInvokeAttach((struct _NDIS_FILTER_BLOCK *)v26, &v138);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              *(_QWORD *)v114 = &v24->DefaultFilterCharacteristics.FriendlyName;
              WPP_RECORDER_SF_qqZddZD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v24->DefaultFilterCharacteristics.MajorNdisVersion,
                (__int64)&v24->DefaultFilterCharacteristics.FriendlyName,
                v74,
                UserDataCounta);
            }
            if ( !FilterAdapterRegistry )
            {
              v80 = *(_DWORD *)(v26 + 336);
              MiniportMediaType = v138.MiniportMediaType;
              if ( v80 != v138.MiniportMediaType && (v22->MacOptions & 0x80000001) != 0x80000001 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  *(_DWORD *)v115 = v138.MiniportMediaType;
                  WPP_RECORDER_SF_qqLd(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0xDu,
                    0x1Bu,
                    (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
                    (char)v22,
                    v26,
                    v80,
                    *(_QWORD *)v115);
                  MiniportMediaType = v138.MiniportMediaType;
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
                v118 = 1;
              }
              v82 = *(_QWORD *)(v26 + 120);
              if ( v82 )
              {
                v83 = *(_QWORD *)(v26 + 112);
                if ( v83 )
                  IfIndex = *(_DWORD *)(v83 + 680);
                else
                  IfIndex = v22->IfIndex;
                NdisIfDeleteIfStackEntry(*(_DWORD *)(v82 + 680), IfIndex);
              }
              v85 = *(_QWORD *)(v26 + 112);
              if ( v85 )
                v86 = *(_DWORD *)(v85 + 680);
              else
                v86 = *(_DWORD *)(*(_QWORD *)(v26 + 32) + 4056LL);
              NdisIfAddIfStackEntry(*(_DWORD *)(v26 + 680), v86);
              v87 = *(_QWORD *)(v26 + 120);
              if ( v87 )
                NdisIfAddIfStackEntry(*(_DWORD *)(v87 + 680), *(_DWORD *)(v26 + 680));
              v88 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
              ndisIfUpdateFilterIfStack(*(struct _NDIS_MINIPORT_BLOCK **)(v26 + 32));
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v88);
              v89 = *(_QWORD *)(v26 + 112);
              if ( v89 )
              {
                v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v89 + 144));
                *(_QWORD *)(v89 + 152) = KeGetCurrentThread();
                v91 = v90;
                *(_DWORD *)(v26 + 344) = *(_DWORD *)(v89 + 380);
                *(_DWORD *)(v26 + 348) = *(_DWORD *)(v89 + 384);
                *(_QWORD *)(v26 + 352) = *(_QWORD *)(v89 + 392);
                *(_QWORD *)(v26 + 360) = *(_QWORD *)(v89 + 400);
                *(_DWORD *)(v26 + 368) = *(_DWORD *)(v89 + 408);
                *(_DWORD *)(v26 + 372) = *(_DWORD *)(v89 + 412);
                ndisOpenRef((PKSPIN_LOCK)(v26 + 312));
                *(_QWORD *)(v89 + 152) = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)(v89 + 144), v91);
              }
              else
              {
                v92 = KeAcquireSpinLockRaiseToDpc(&v22->Lock);
                v22->MiniportThread = KeGetCurrentThread();
                *(_DWORD *)(v26 + 344) = v22->MiniportMediaConnectState;
                *(_DWORD *)(v26 + 348) = v22->MiniportMediaDuplexState;
                *(_QWORD *)(v26 + 352) = v22->MiniportXmitLinkSpeed;
                *(_QWORD *)(v26 + 360) = v22->MiniportRcvLinkSpeed;
                *(_DWORD *)(v26 + 368) = v22->MiniportPauseFunctions;
                *(_DWORD *)(v26 + 372) = v22->MiniportAutoNegotiationFlags;
                ndisOpenRef((PKSPIN_LOCK)(v26 + 312));
                v22->MiniportThread = 0LL;
                KeReleaseSpinLock(&v22->Lock, v92);
              }
              *(_DWORD *)(*(_QWORD *)(v26 + 688) + 1220LL) = *(_DWORD *)(v26 + 344);
              *(_DWORD *)(*(_QWORD *)(v26 + 688) + 1224LL) = *(_DWORD *)(v26 + 348);
              *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1208LL) = *(_QWORD *)(v26 + 360);
              *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1200LL) = *(_QWORD *)(v26 + 352);
              ndisIndicateInitialStateToFilter((struct _NDIS_FILTER_BLOCK *)v26);
              KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 144));
              *(_QWORD *)(v26 + 152) = KeGetCurrentThread();
              FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v26);
              FILTER_SET_FLAG(v93, 4);
              if ( v118 )
              {
                FILTER_SET_FLAG(v94, 0x8000);
                MiniportPhysicalMediaType = v138.MiniportPhysicalMediaType;
                v97 = v138.MiniportMediaType;
                ++v22->MediaChangeFilters;
                *(_DWORD *)(v26 + 340) = MiniportPhysicalMediaType;
                v98 = *(_QWORD *)(v26 + 688);
                *(_DWORD *)(v26 + 336) = v97;
                *(_DWORD *)(v98 + 564) = v97;
                *(_DWORD *)(*(_QWORD *)(v26 + 688) + 568LL) = *(_DWORD *)(v26 + 340);
                *(_QWORD *)(v26 + 152) = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v99);
                v100 = *(_DWORD *)(v26 + 336);
                v101 = *(_DWORD *)(v26 + 340);
                v22->MediaType = v100;
                v22->PhysicalMediumType = v101;
                if ( v100 == NdisMedium802_3
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
                KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v95);
              }
              v79 = (byte_14011B103 & 1) == 0;
              *(_BYTE *)(v26 + 64) = 2;
              if ( !v79 )
                McTemplateK0juqjzzz_EtwWriteTransfer(
                  *(_QWORD *)(v26 + 32) + 4008LL,
                  *(_QWORD *)(v26 + 40),
                  v26 + 664,
                  v26 + 664,
                  2,
                  8,
                  *(_QWORD *)(v26 + 32) + 4008LL,
                  *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 3856LL) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v26 + 40) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v26 + 48) + 8LL));
              ndisPktMonFilterRegister(v26);
              ndisReferenceMiniport(v22, 0x28u);
              if ( v22->MajorNdisVersion < 6u && !v22->Miniport5HasNdis6Component )
                v22->Miniport5HasNdis6Component = 1;
              ndisSetupWmiNode(
                v22,
                *(const struct _UNICODE_STRING **)(v26 + 48),
                v22->BindPaths->Paths[0].Length + v24->DefaultFilterCharacteristics.UniqueName.Length + 4,
                (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
                (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
              v102 = WnodeEventItem;
              if ( WnodeEventItem )
              {
                v103 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                memmove(
                  v103,
                  v24->DefaultFilterCharacteristics.UniqueName.Buffer,
                  v24->DefaultFilterCharacteristics.UniqueName.Length);
                memmove(
                  &v103[v24->DefaultFilterCharacteristics.UniqueName.Length + 2],
                  v22->BindPaths->Paths[0].Buffer,
                  v22->BindPaths->Paths[0].Length);
                v106 = IoWMIWriteEvent(v102);
                if ( v106 < 0 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v104) = 2;
                    WPP_RECORDER_SF_(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v104,
                      1,
                      28,
                      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids);
                  }
                  if ( (byte_14011B101 & 1) != 0 )
                    McTemplateK0qqq_EtwWriteTransfer(
                      v105,
                      &FilterArrivalIndicationFailed,
                      (const GUID *)(v26 + 664),
                      v106,
                      1,
                      0);
                  ExFreePoolWithTag(v102, 0);
                }
              }
              Ndis::BindEngine::BeginPolicyUpdates(&v22->BindEngine);
              v23 = a4;
              if ( Ndis::BindState::SetPause(&a4->BindState, DatapathRunning, PauseReason_InitialPause) )
              {
                memset(v139, 0, sizeof(v139));
                if ( (unsigned __int8)byte_14011CBA3 >= 4u )
                {
                  ndisGetBindLinkNameForTracing(a4, v139);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_Zq(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v107,
                      0x1Cu,
                      0x1Du,
                      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
                      v139[0].Buffer,
                      *(_QWORD *)&v139[0].Length);
                }
              }
              Ndis::BindEngine::EndPolicyUpdates(&v22->BindEngine);
              if ( v22->MajorNdisVersion < 6u && !v22->Miniport5HasNdis6Component )
                v22->Miniport5HasNdis6Component = 1;
              goto LABEL_10;
            }
            v23 = a4;
            a4->BindState.AllowBindDespiteMandatory = v138.Flags & 1;
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 144));
            *(_QWORD *)(v26 + 152) = KeGetCurrentThread();
            FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v26);
            if ( FILTER_TEST_FLAG(v75, 256) )
              FILTER_CLEAR_FLAG(v77, v76);
            FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 8);
            *(_QWORD *)(v26 + 152) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v78);
            v79 = (byte_14011B103 & 1) == 0;
            *(_BYTE *)(v26 + 64) = 0;
            if ( !v79 )
              McTemplateK0juqjzzz_EtwWriteTransfer(
                *(_QWORD *)(v26 + 32) + 4008LL,
                *(_QWORD *)(v26 + 40),
                v26 + 664,
                v26 + 664,
                0,
                7,
                *(_QWORD *)(v26 + 32) + 4008LL,
                *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 3856LL) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v26 + 40) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v26 + 48) + 8LL));
LABEL_74:
            if ( *(_QWORD *)(v26 + 752) )
            {
              Ndis::BindEngine::BeginPolicyUpdates(&v22->BindEngine);
              Ndis::BindState::RemoveBindContext(&v23->BindState, (void *)v26);
              Ndis::BindEngine::EndPolicyUpdates(&v22->BindEngine);
              *(_QWORD *)(v26 + 752) = 0LL;
            }
            v50 = v22;
            if ( !v119 )
              v50 = 0LL;
            ndisFilterAttachCleanUp((_NDIS_FILTER_BLOCK *)v26, v50, v30);
            goto LABEL_206;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v112 = FilterAdapterRegistry;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x19u,
              (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
              v26,
              *(_QWORD *)v112);
          }
        }
        goto LABEL_72;
      }
    }
    else if ( ndisDatapathVerifierMode != 2 )
    {
      goto LABEL_50;
    }
    FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 512);
    goto LABEL_50;
  }
  v24 = v135;
  FilterAdapterRegistry = -1073741823;
LABEL_9:
  v26 = *(_QWORD *)v134;
LABEL_10:
  if ( ndisVerifierNdisDispatch
    && v26
    && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v26 + 16) + 16LL))
    && !*(_QWORD *)(v26 + 776)
    && (*((int (__fastcall **)(_DRIVER_OBJECT *, __int64, void **))ndisVerifierNdisDispatch + 1))(
         v24->DriverObject,
         v26,
         &v24->FilterDriverContext) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v27,
      13,
      30,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      v26);
  }
LABEL_206:
  ndisHandleFilterHandlersChange(v22);
  if ( v138.NicSwitchArray )
  {
    ExFreePoolWithTag(v138.NicSwitchArray, 0);
    v138.NicSwitchArray = 0LL;
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v114 = FilterAdapterRegistry;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Fu,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)v24,
      (char)v22,
      *(_QWORD *)v114);
  }
  return FilterAdapterRegistry;
}
