/*
 * XREFs of ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14006E990 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015BAD0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$MakePoolPtrNP@VNdisWdfIdle@@@@YA?AV?$unique_ptr@VNdisWdfIdle@@U?$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@K@Z @ 0x140001740 (--$MakePoolPtrNP@VNdisWdfIdle@@@@YA-AV-$unique_ptr@VNdisWdfIdle@@U-$KFreePoolNP@VNdisWdfIdle@@@@.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006F10 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140043850 (-ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140044180 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x14004B600 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDI.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1400545B0 (NdisConvertNdisStatusToNtStatus.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x140054600 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x140060190 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x140064770 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x140067560 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14006BFB0 (McTemplateK0z_EtwWriteTransfer.c)
 *     ?ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z @ 0x14006C940 (-ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z.c)
 *     ?ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006E8C0 (-ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??1NdisWdfIdle@@QEAA@XZ @ 0x140071BF0 (--1NdisWdfIdle@@QEAA@XZ.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140072650 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x140072DF0 (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x1400747E0 (-ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007DCB0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14007E540 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1400885F0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x14008AC90 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008BF40 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisRegisterMiniportTriageData @ 0x140092A7C (ndisRegisterMiniportTriageData.c)
 *     Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline @ 0x140092E5C (Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140092FAC (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009D248 (-ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceAddFailure@@YAXW4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400AE45C (-NdisTraceLoggingDeviceAddFailure@@YAXW4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREA.c)
 *     ?NdisTraceLoggingDeviceAddSuccess@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@E@Z @ 0x1400AE530 (-NdisTraceLoggingDeviceAddSuccess@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@E@Z.c)
 *     ?Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400AFAA8 (-Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401360E0 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E34 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14015EC60 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140160850 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x140162790 (-AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140165A30 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x140165BD0 (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1401663A0 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140166400 (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x140166B00 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140169140 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401698A0 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016A2A0 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016D4A0 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 */

__int64 __fastcall ndisAddDevice(struct _GUID *a1, void **a2)
{
  char *DeviceExtension; // rdi
  __int64 v3; // rbx
  bool v4; // r12
  int appended; // esi
  _DEVICE_OBJECT *v7; // rax
  const struct _GUID *v8; // rdx
  __int64 v9; // r13
  int v10; // r15d
  struct _DRIVER_OBJECT *v11; // r12
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // rbx
  char v14; // al
  enum Ndis::ReadBindingsOptions::Flags v15; // r8d
  unsigned int v16; // ecx
  ULONG v17; // ebx
  __int16 v18; // ax
  struct _NDIS_MINIPORT_BLOCK *Pool2; // rax
  __int64 v20; // r12
  __int64 v21; // rcx
  _DEVICE_OBJECT *v22; // rax
  __int64 v23; // rcx
  _DEVICE_OBJECT *v24; // rax
  NdisWdfIdle *v25; // rbx
  NdisWdfIdle *v26; // rsi
  PDEVICE_OBJECT v27; // rdx
  __int64 EventLog; // rax
  _GUID v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int8 (*v32)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r9
  unsigned int v33; // eax
  LOGICAL IsDriverVerifying; // eax
  int v35; // edx
  int v36; // r9d
  char *v37; // rsi
  __int64 v38; // rax
  _UNICODE_STRING *v39; // rbx
  __int64 v40; // rax
  const struct _DEVPROPKEY *v41; // rdx
  int DevicePropertyData; // esi
  char No; // al
  _UNICODE_STRING *v44; // r8
  int v45; // edx
  __int64 v46; // rcx
  PVOID v47; // rcx
  int v48; // edx
  PVOID v49; // rcx
  __int16 v50; // ax
  _UNICODE_STRING *p_DeviceName; // rdx
  int v52; // edx
  __int64 v53; // rcx
  int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  void *v60; // rcx
  int v61; // eax
  int v62; // edx
  _DWORD *v63; // rax
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // rax
  KIRQL v65; // r8
  KIRQL v66; // dl
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rax
  __int128 v70; // xmm0
  __int128 *v71; // rax
  __int128 v72; // xmm1
  __int64 v73; // rax
  int updated; // eax
  NTSTATUS v75; // eax
  _UNICODE_STRING *v76; // rcx
  NTSTATUS v77; // eax
  __int64 v78; // rax
  void *v79; // rcx
  KIRQL v80; // al
  __int64 v81; // rdx
  signed __int32 v83[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG DeviceCharacteristics[2]; // [rsp+20h] [rbp-E0h]
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-D0h]
  bool v87; // [rsp+40h] [rbp-C0h]
  char v88; // [rsp+41h] [rbp-BFh]
  __int64 v89; // [rsp+48h] [rbp-B8h]
  char v90; // [rsp+50h] [rbp-B0h]
  char v91; // [rsp+51h] [rbp-AFh]
  char v92; // [rsp+52h] [rbp-AEh]
  char v93; // [rsp+53h] [rbp-ADh]
  char v94; // [rsp+54h] [rbp-ACh]
  char v95; // [rsp+55h] [rbp-ABh]
  PDEVICE_OBJECT SourceDevice; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v97; // [rsp+60h] [rbp-A0h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+68h] [rbp-98h]
  PDEVICE_OBJECT v99; // [rsp+70h] [rbp-90h]
  struct _DRIVER_OBJECT *DriverObject; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v102; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING String; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING DeviceName; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  void **v106; // [rsp+C0h] [rbp-40h]
  struct _CONFIG_KNOB_NAMESPACE v107; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v108; // [rsp+E0h] [rbp-20h] BYREF
  char v109; // [rsp+F0h] [rbp-10h]
  _QWORD Src[3]; // [rsp+100h] [rbp+0h] BYREF
  int v111; // [rsp+118h] [rbp+18h]
  __int128 v112; // [rsp+120h] [rbp+20h]
  const wchar_t *v113; // [rsp+130h] [rbp+30h]
  char *v114; // [rsp+138h] [rbp+38h]
  __int64 v115; // [rsp+140h] [rbp+40h]
  int v116; // [rsp+148h] [rbp+48h]
  __int128 v117; // [rsp+150h] [rbp+50h]
  const wchar_t *v118; // [rsp+160h] [rbp+60h]
  char *v119; // [rsp+168h] [rbp+68h]
  __int64 v120; // [rsp+170h] [rbp+70h]
  int v121; // [rsp+178h] [rbp+78h]
  __int128 v122; // [rsp+180h] [rbp+80h]
  const wchar_t *v123; // [rsp+190h] [rbp+90h]
  char *v124; // [rsp+198h] [rbp+98h]
  __int64 v125; // [rsp+1A0h] [rbp+A0h]
  int v126; // [rsp+1A8h] [rbp+A8h]
  __int64 v127; // [rsp+1B0h] [rbp+B0h]
  __int64 v128; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v129; // [rsp+1C0h] [rbp+C0h]
  char *v130; // [rsp+1C8h] [rbp+C8h]
  __int64 v131; // [rsp+1D0h] [rbp+D0h]
  int v132; // [rsp+1D8h] [rbp+D8h]
  __int64 v133; // [rsp+1E0h] [rbp+E0h]
  __int64 v134; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v135; // [rsp+1F0h] [rbp+F0h]
  char *v136; // [rsp+1F8h] [rbp+F8h]
  __int64 v137; // [rsp+200h] [rbp+100h]
  int v138; // [rsp+208h] [rbp+108h]
  __int64 v139; // [rsp+210h] [rbp+110h]
  __int64 v140; // [rsp+218h] [rbp+118h]
  const wchar_t *v141; // [rsp+220h] [rbp+120h]
  char *v142; // [rsp+228h] [rbp+128h]
  __int64 v143; // [rsp+230h] [rbp+130h]
  int v144; // [rsp+238h] [rbp+138h]
  __int128 v145; // [rsp+240h] [rbp+140h]
  const wchar_t *v146; // [rsp+250h] [rbp+150h]
  char *v147; // [rsp+258h] [rbp+158h]
  __int64 v148; // [rsp+260h] [rbp+160h]
  int v149; // [rsp+268h] [rbp+168h]
  __int128 v150; // [rsp+270h] [rbp+170h]
  const wchar_t *v151; // [rsp+280h] [rbp+180h]
  char *v152; // [rsp+288h] [rbp+188h]
  __int64 v153; // [rsp+290h] [rbp+190h]
  int v154; // [rsp+298h] [rbp+198h]
  __int128 v155; // [rsp+2A0h] [rbp+1A0h]
  const wchar_t *v156; // [rsp+2B0h] [rbp+1B0h]
  char *v157; // [rsp+2B8h] [rbp+1B8h]
  __int64 v158; // [rsp+2C0h] [rbp+1C0h]
  int v159; // [rsp+2C8h] [rbp+1C8h]
  __int128 v160; // [rsp+2D0h] [rbp+1D0h]
  const wchar_t *v161; // [rsp+2E0h] [rbp+1E0h]
  char *v162; // [rsp+2E8h] [rbp+1E8h]
  __int64 v163; // [rsp+2F0h] [rbp+1F0h]
  int v164; // [rsp+2F8h] [rbp+1F8h]
  __int128 v165; // [rsp+300h] [rbp+200h]
  const wchar_t *v166; // [rsp+310h] [rbp+210h]
  char *v167; // [rsp+318h] [rbp+218h]
  __int64 v168; // [rsp+320h] [rbp+220h]
  int v169; // [rsp+328h] [rbp+228h]
  __int128 v170; // [rsp+330h] [rbp+230h]
  const wchar_t *v171; // [rsp+340h] [rbp+240h]
  char *v172; // [rsp+348h] [rbp+248h]
  __int64 v173; // [rsp+350h] [rbp+250h]
  int v174; // [rsp+358h] [rbp+258h]
  __int128 v175; // [rsp+360h] [rbp+260h]
  const wchar_t *v176; // [rsp+370h] [rbp+270h]
  char *v177; // [rsp+378h] [rbp+278h]
  __int64 v178; // [rsp+380h] [rbp+280h]
  int v179; // [rsp+388h] [rbp+288h]
  __int128 v180; // [rsp+390h] [rbp+290h]
  char v181[160]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int128 v182; // [rsp+440h] [rbp+340h] BYREF
  __int128 v183; // [rsp+450h] [rbp+350h]
  __int128 v184; // [rsp+460h] [rbp+360h]
  __int128 v185; // [rsp+470h] [rbp+370h]
  __int128 v186; // [rsp+480h] [rbp+380h]
  char *v187; // [rsp+490h] [rbp+390h]
  char v188; // [rsp+4A0h] [rbp+3A0h] BYREF
  char v189; // [rsp+4C8h] [rbp+3C8h] BYREF
  char v190; // [rsp+510h] [rbp+410h] BYREF

  v106 = a2;
  v99 = 0LL;
  DeviceExtension = 0LL;
  SourceDevice = 0LL;
  v3 = 0LL;
  v89 = 0LL;
  v4 = 0;
  v88 = 0;
  v90 = 0;
  appended = -1073741823;
  v94 = 0;
  v92 = 0;
  v91 = 0;
  v93 = 0;
  v95 = 0;
  v7 = *(_DEVICE_OBJECT **)&a1[2].Data1;
  TargetDevice = v7;
  v87 = 0;
  v8 = &WPP_61ca6882386639ff5ded6eed385a297b_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      13,
      68,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)v7);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v9 = *(_QWORD *)&a1[6].Data1;
  if ( a1[5].Data4[1] != *(_BYTE *)(v9 + 26) >> 7 )
    NT_ASSERT("Parameters->IsLightWeight == ((Parameters->MiniBlock->Flags & 0x0080) != 0)");
  v10 = 1;
  if ( v9 )
  {
    if ( (unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() )
      v87 = (*(_BYTE *)(v9 + 26) & 0x40) != 0;
    v11 = *(struct _DRIVER_OBJECT **)(*(_QWORD *)&a1[6].Data1 + 40LL);
    DriverObject = v11;
    v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    for ( i = ndisMiniDriverList; i; i = i->NextDriver )
    {
      if ( i == (struct _NDIS_M_DRIVER_BLOCK *)v9 )
        break;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
    v10 = 2;
    if ( i != (struct _NDIS_M_DRIVER_BLOCK *)v9 )
      goto LABEL_16;
    v10 = 3;
    if ( *(_BYTE *)(v9 + 24) >= 6u && !a1[2].Data4[0] )
    {
      appended = -1073741491;
LABEL_16:
      v3 = 0LL;
LABEL_17:
      LOBYTE(v9) = 0;
LABEL_18:
      v4 = v87;
      goto LABEL_19;
    }
    v10 = 4;
    v16 = (**(unsigned __int16 **)a1[3].Data4 + 6139) & 0xFFFFFFF8;
    *(_QWORD *)&String.Length = 2621440LL;
    *(_QWORD *)&DestinationString.Length = 3932160LL;
    v17 = v16 + 8 * ndisMaxNumberOfProcessors;
    String.Buffer = (wchar_t *)&v188;
    DestinationString.Buffer = (wchar_t *)&v189;
    RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
    appended = RtlIntegerToUnicodeString(_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex), 0xAu, &String);
    if ( appended )
      goto LABEL_16;
    appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
    if ( appended )
      goto LABEL_16;
    v18 = *(_WORD *)(v9 + 26);
    if ( (v18 & 0x80u) == 0 )
    {
      if ( (v18 & 0x40) != 0 )
      {
        v20 = *(_QWORD *)(v9 + 360);
        v21 = *(_QWORD *)&a1[5].Data1;
        v102 = 0LL;
        appended = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _NDIS_MINIPORT_BLOCK **))(v20 + 104))(
                     v21,
                     v17,
                     &v102);
        if ( appended )
          goto LABEL_16;
        v22 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(_QWORD))(v20 + 64))(*(_QWORD *)&a1[5].Data1);
        v23 = *(_QWORD *)&a1[5].Data1;
        SourceDevice = v22;
        v24 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(__int64))(v20 + 72))(v23);
        DeviceExtension = (char *)v102;
        v99 = v24;
        ndisMInitializeMiniportBlock((struct _NDIS_M_DRIVER_BLOCK *)v9, v102, v17);
        MakePoolPtrNP<NdisWdfIdle>((__int64)&P);
        v25 = (NdisWdfIdle *)P;
        if ( P )
        {
          appended = NdisWdfIdle::Initialize((char *)P, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( !appended )
          {
            v26 = (NdisWdfIdle *)*((_QWORD *)DeviceExtension + 761);
            *((_QWORD *)DeviceExtension + 761) = v25;
            if ( v26 )
            {
              NdisWdfIdle::~NdisWdfIdle(v26);
              ExFreePoolWithTag(v26, 0);
            }
            *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)&a1[5].Data1;
            goto LABEL_54;
          }
        }
        else
        {
          appended = -1073741670;
        }
        if ( v25 )
        {
          NdisWdfIdle::~NdisWdfIdle(v25);
          ExFreePoolWithTag(v25, 0);
          v3 = v89;
          goto LABEL_17;
        }
        goto LABEL_38;
      }
      v10 = 5;
      appended = IoCreateDevice(v11, v17, &DestinationString, 0x17u, 0x100u, 0, &SourceDevice);
      if ( appended < 0 )
        goto LABEL_16;
      v10 = 6;
      v27 = TargetDevice;
      v94 = 1;
      SourceDevice->Flags |= 0x10u;
      v27->Flags &= ~0x80u;
      SourceDevice->Flags |= 0x2000u;
      v99 = IoAttachDeviceToDeviceStack(SourceDevice, v27);
      if ( !v99 )
      {
        appended = -1073741823;
        goto LABEL_16;
      }
      DeviceExtension = (char *)SourceDevice->DeviceExtension;
      ndisMInitializeMiniportBlock(
        (struct _NDIS_M_DRIVER_BLOCK *)v9,
        (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
        v17);
    }
    else
    {
      Pool2 = (struct _NDIS_MINIPORT_BLOCK *)ExAllocatePool2((unsigned int)(appended + 66), (int)v17, 2003584078LL);
      DeviceExtension = (char *)Pool2;
      if ( !Pool2 )
      {
        appended = -1073741670;
LABEL_38:
        v3 = v89;
        goto LABEL_17;
      }
      ndisMInitializeMiniportBlock((struct _NDIS_M_DRIVER_BLOCK *)v9, Pool2, v17);
      _InterlockedOr((volatile signed __int32 *)DeviceExtension + 30, 0x100u);
    }
LABEL_54:
    if ( (*(_BYTE *)(v9 + 26) & 0x40) != 0 )
      _InterlockedOr((volatile signed __int32 *)DeviceExtension + 30, 0x80u);
    *(struct _GUID *)(DeviceExtension + 4008) = *a1;
    EventLog = ndisAllocateEventLog(2, 1);
    v29 = *(_GUID *)(DeviceExtension + 4008);
    *((_QWORD *)DeviceExtension + 559) = EventLog;
    v107.NamespaceType = ConfigKnobNamespaceNetworkInterfaceProfile;
    v107.ObjectId = v29;
    if ( DeviceExtension != (char *)-5920LL )
      KnobNamespace::KnobNamespace(
        (KnobNamespace *)(DeviceExtension + 5920),
        (struct _DRIVER_OBJECT *)ndisDriverObject,
        &v107);
    Src[2] = 1LL;
    v111 = 32;
    *(_OWORD *)(DeviceExtension + 6008) = 0LL;
    v116 = 32;
    *(_OWORD *)(DeviceExtension + 6024) = 0LL;
    v121 = 32;
    *(_OWORD *)(DeviceExtension + 6040) = 0LL;
    *((_QWORD *)DeviceExtension + 757) = 0LL;
    *((_DWORD *)DeviceExtension + 1516) = 0;
    *((_QWORD *)DeviceExtension + 751) = 60LL;
    Src[0] = L"Flags";
    Src[1] = DeviceExtension + 6012;
    v113 = L"MaxTimeAtDispatch";
    v114 = DeviceExtension + 6016;
    v118 = L"DispatchTimeWarning";
    v119 = DeviceExtension + 6020;
    v123 = L"DispatchTimeWarningInterval";
    v124 = DeviceExtension + 6024;
    v129 = L"DpcWatchdogTimerThreshold";
    v130 = DeviceExtension + 6028;
    v135 = L"WorkerThreadPriority";
    v136 = DeviceExtension + 6032;
    v141 = L"MaxPacketsSendAtPassive";
    v142 = DeviceExtension + 6036;
    v146 = L"MaxPacketsSendCompleteAtPassive";
    v147 = DeviceExtension + 6044;
    v151 = L"MaxPacketsReceiveAtPassive";
    v152 = DeviceExtension + 6052;
    v156 = L"MaxPacketsReceiveCompleteAtPassive";
    v157 = DeviceExtension + 6060;
    v112 = 0LL;
    v115 = 0LL;
    v117 = 0LL;
    v120 = 0LL;
    v122 = 0LL;
    v125 = 900000LL;
    v126 = 32;
    v127 = 60000LL;
    v128 = 1440000LL;
    v131 = 80LL;
    v132 = 32;
    v133 = 1LL;
    v134 = 80LL;
    v137 = 10LL;
    v138 = 32;
    v139 = 1LL;
    v140 = 15LL;
    v143 = 64LL;
    v144 = 32;
    v145 = 0LL;
    v148 = 64LL;
    v149 = 32;
    v150 = 0LL;
    v153 = 64LL;
    v154 = 32;
    v155 = 0LL;
    v158 = 64LL;
    v159 = 32;
    v161 = L"MaxPacketsSendAtDispatch";
    v163 = 64LL;
    v162 = DeviceExtension + 6040;
    v164 = 32;
    v166 = L"MaxPacketsSendCompleteAtDispatch";
    v167 = DeviceExtension + 6048;
    v171 = L"MaxPacketsReceiveAtDispatch";
    v172 = DeviceExtension + 6056;
    v176 = L"MaxPacketsReceiveCompleteAtDispatch";
    v177 = DeviceExtension + 6064;
    v160 = 0LL;
    v168 = 64LL;
    v165 = 0LL;
    v169 = 32;
    v170 = 0LL;
    v173 = 64LL;
    v174 = 32;
    v175 = 0LL;
    v178 = 64LL;
    v179 = 32;
    v180 = 0LL;
    if ( !Rtl::KArray<KnobDescriptor,1>::reserve((unsigned int *)DeviceExtension + 1498, 0xEuLL) )
    {
      appended = -1073741670;
LABEL_60:
      v3 = 0LL;
      goto LABEL_17;
    }
    v30 = *((unsigned int *)DeviceExtension + 1499);
    if ( (unsigned int)v30 < 0xE )
      memset((void *)(*((_QWORD *)DeviceExtension + 750) + 48 * v30), 0, -48 * v30 + 672);
    *((_DWORD *)DeviceExtension + 1499) = 14;
    v31 = *((unsigned int *)DeviceExtension + 1499);
    if ( !(_DWORD)v31
      || (memmove(*((void **)DeviceExtension + 750), Src, 48 * v31), (v33 = *((_DWORD *)DeviceExtension + 1499)) == 0) )
    {
      __fastfail(5u);
    }
    KnobNamespace::AddKnobCollection(
      (KnobNamespace *)(DeviceExtension + 5920),
      *((const struct KnobDescriptor **)DeviceExtension + 750),
      v33,
      v32,
      0LL);
    if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) != 0 )
      IsDriverVerifying = (*(unsigned __int16 *)(v9 + 26) >> 1) & 1;
    else
      IsDriverVerifying = MmIsDriverVerifying(DriverObject);
    if ( ndisVerifierNdisDispatch )
    {
      if ( IsDriverVerifying )
      {
        v10 = 1;
        appended = (*((__int64 (__fastcall **)(PDEVICE_OBJECT, char *, char *, char *))ndisVerifierNdisDispatch + 1))(
                     SourceDevice,
                     DeviceExtension,
                     DeviceExtension + 24,
                     DeviceExtension + 4968);
        if ( appended < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_60;
          v36 = 69;
LABEL_73:
          LOBYTE(v35) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v35,
            13,
            v36,
            (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
            (char)DeviceExtension);
          v3 = 0LL;
          goto LABEL_17;
        }
      }
    }
    v37 = DeviceExtension + 3792;
    ndisSetDeviceNames(
      *(PCUNICODE_STRING *)a1[3].Data4,
      (PUNICODE_STRING)DeviceExtension + 238,
      (struct _UNICODE_STRING *)DeviceExtension + 237,
      (wchar_t *)DeviceExtension + 3064);
    v38 = ExAllocatePool2(66LL, DestinationString.Length + 2LL, 1851868238LL);
    *((_QWORD *)DeviceExtension + 526) = v38;
    if ( !v38 )
    {
      appended = -1073741670;
      v10 = 1;
      v3 = 0LL;
      goto LABEL_17;
    }
    v39 = (_UNICODE_STRING *)(DeviceExtension + 4200);
    *((_WORD *)DeviceExtension + 2101) = DestinationString.Length + 2;
    RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4200), &DestinationString);
    if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
    {
      *((_QWORD *)DeviceExtension + 479) = TargetDevice;
      *((_QWORD *)DeviceExtension + 478) = SourceDevice;
      *((_QWORD *)DeviceExtension + 480) = v99;
      v97 = 0LL;
      v40 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v108, (__int64)&v97);
      DevicePropertyData = ndisMiniportQueryDevicePropertyData(
                             (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                             v41,
                             (wchar_t **)(v40 + 8));
      if ( v109 )
        wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>();
      if ( !DevicePropertyData )
      {
        *((_QWORD *)DeviceExtension + 672) = v97;
        v97 = 0LL;
      }
      No = mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30);
      v44 = 0LL;
      if ( No < 0 )
        v44 = (_UNICODE_STRING *)(DeviceExtension + 3792);
      v10 = 8;
      appended = IoRegisterDeviceInterface(
                   *((PDEVICE_OBJECT *)DeviceExtension + 479),
                   &GUID_DEVINTERFACE_NET,
                   v44,
                   (PUNICODE_STRING)(DeviceExtension + 4152));
      if ( appended < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v45) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v45,
            13,
            70,
            (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
            (char)DeviceExtension);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(
            v46,
            &AddDeviceFailed,
            (const GUID *)&NDIS_PROVIDER_ID,
            appended,
            1,
            (char)DeviceExtension);
LABEL_88:
        v47 = v97;
        v97 = 0LL;
        if ( v47 )
          ExFreePoolWithTag(v47, 0);
        v3 = 0LL;
        goto LABEL_17;
      }
      appended = IoSetDeviceInterfacePropertyData(
                   DeviceExtension + 4152,
                   &DEVPKEY_NetworkInterface_Guid,
                   0LL,
                   1LL,
                   13,
                   16,
                   DeviceExtension + 4008);
      if ( appended )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v48) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v48,
            13,
            71,
            (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
            (char)DeviceExtension);
        }
        goto LABEL_88;
      }
      v49 = v97;
      v90 = 1;
      v97 = 0LL;
      if ( v49 )
        ExFreePoolWithTag(v49, 0);
      v37 = DeviceExtension + 3792;
    }
    if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) != 0LL
      || (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) != 0 )
    {
      *(_QWORD *)&DeviceName.Length = 8912896LL;
      DeviceName.Buffer = (wchar_t *)&v190;
      appended = RtlUnicodeStringPrintf(&DeviceName, L"\\Device\\lwm\\NetworkInterface\\%wZ", v37);
      if ( appended )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_60;
        v36 = 72;
        goto LABEL_73;
      }
      v10 = 7;
      if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) == 0LL
        || (v50 = mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30),
            p_DeviceName = (_UNICODE_STRING *)(DeviceExtension + 4152),
            (v50 & 0x100) != 0) )
      {
        p_DeviceName = &DeviceName;
      }
      appended = IoCreateSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200), p_DeviceName);
      if ( appended )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v52) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v52,
            13,
            73,
            (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
            (char)DeviceExtension);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
          goto LABEL_60;
        *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
        DeviceCharacteristics[0] = 65538;
LABEL_110:
        McTemplateK0qqq_EtwWriteTransfer(
          v53,
          &AddDeviceFailed,
          (const GUID *)&NDIS_PROVIDER_ID,
          appended,
          DeviceCharacteristics[0],
          Exclusive[0]);
        v3 = 0LL;
        goto LABEL_17;
      }
      v91 = 1;
    }
    if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) != 0LL
      && (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
    {
      v39 = (_UNICODE_STRING *)(DeviceExtension + 4152);
    }
    v10 = 7;
    appended = IoCreateSymbolicLink(*(PUNICODE_STRING *)a1[3].Data4, v39);
    if ( appended )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v54) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v54,
          13,
          74,
          (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
          (char)DeviceExtension);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
        goto LABEL_60;
      *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
      DeviceCharacteristics[0] = 65539;
      goto LABEL_110;
    }
    v92 = 1;
    if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
    {
      *((_QWORD *)DeviceExtension + 620) = 0LL;
      v55 = *(_QWORD *)&a1[3].Data1;
      if ( v55 && *(_WORD *)v55 )
        ndisQueryDeviceFlags(*(const wchar_t **)(v55 + 8), (unsigned __int64 *)DeviceExtension + 620);
      if ( a1[4].Data4[0] )
        *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
      if ( a1[4].Data4[1] )
        *((_DWORD *)DeviceExtension + 31) |= 2u;
      if ( a1[4].Data4[2] )
        *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
      if ( a1[4].Data4[0] )
      {
        v10 = 4;
        DriverObject = 0LL;
        appended = ndisQueryReferenceBusInterface(TargetDevice, (PVOID *)&DriverObject);
        if ( appended < 0 )
          goto LABEL_60;
        *((_QWORD *)DeviceExtension + 498) = DriverObject;
      }
      v10 = 4;
      appended = ndisCreateSecurityDescriptor(
                   *((struct _DEVICE_OBJECT **)DeviceExtension + 478),
                   (void **)DeviceExtension + 473,
                   5u);
      if ( appended < 0 )
        goto LABEL_60;
    }
    v10 = 4;
    appended = ndisCreateAdapterInstanceName(
                 (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                 (struct _UNICODE_STRING **)DeviceExtension + 482,
                 (struct _UNICODE_STRING **)DeviceExtension + 551);
    if ( appended < 0 )
      goto LABEL_60;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v56,
        0xDu,
        0x4Bu,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        (char)DeviceExtension,
        *((unsigned __int16 **)DeviceExtension + 482));
    if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        v57,
        &AddDevice,
        v58,
        *(const wchar_t **)(*((_QWORD *)DeviceExtension + 482) + 8LL));
    *((_DWORD *)DeviceExtension + 1015) = 1;
    v59 = *(_QWORD *)a1[3].Data4;
    *(_QWORD *)a1[3].Data4 = 0LL;
    v60 = (void *)*((_QWORD *)DeviceExtension + 522);
    *((_QWORD *)DeviceExtension + 522) = v59;
    if ( v60 )
      ExFreePoolWithTag(v60, 0x7274534Bu);
    v61 = ndisInitializeConfiguration((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, *(PCWSTR *)a1[1].Data4);
    if ( v61 )
    {
LABEL_142:
      appended = NdisConvertNdisStatusToNtStatus(v61);
      v3 = 0LL;
      goto LABEL_17;
    }
    Ndis::BindEngine::Initialize(
      (Ndis::BindEngine *)(DeviceExtension + 5120),
      (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) != 0LL
      && (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5120));
      if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5048), DatapathPaused, PauseReason_Wdf) )
      {
        memset(v181, 0, sizeof(v181));
        if ( (unsigned __int8)byte_14011CBA3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
            (struct NDIS_PNPTRACE_LOCALS *)v181);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v62,
              0x1Cu,
              0x4Cu,
              (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
              *(unsigned __int16 **)&v181[8],
              *(_QWORD *)v181);
        }
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5120));
    }
    v95 = 1;
    appended = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    if ( appended < 0 )
      goto LABEL_60;
    ndisMFindNumaDistances((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    if ( *(_QWORD *)(v9 + 776) )
    {
      v10 = 10;
      v61 = ndisMInvokeAddDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      if ( v61 )
        goto LABEL_142;
      v88 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        77,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        v9,
        (char)DeviceExtension);
    }
    if ( (*(_BYTE *)(v9 + 26) & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
    {
      v63 = (_DWORD *)*((_QWORD *)DeviceExtension + 471);
      if ( !v63 )
      {
        appended = -1073741823;
        v10 = 3;
        v3 = 0LL;
LABEL_160:
        LOBYTE(v9) = v88;
        goto LABEL_18;
      }
      if ( *v63 > 1u )
      {
        LOBYTE(v9) = v88;
        appended = -1073741637;
        v10 = 3;
        v3 = 0LL;
        goto LABEL_18;
      }
    }
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
    v3 = (__int64)InterfaceByInterfaceGuid;
    if ( InterfaceByInterfaceGuid )
    {
      v66 = v65;
      if ( InterfaceByInterfaceGuid->NetLuid.Value == *(_QWORD *)&a1[1].Data1 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v65);
        v10 = 4;
        if ( !appended )
        {
          ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, a1[4].Data4[3]);
          ndisIfUpdateInterfaceHiddenFlag((struct _NDIS_IF_BLOCK *)v3, a1[4].Data4[3]);
          if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) != 0LL
            && (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
          {
            if ( !a1[5].Data4[0] )
              *((_DWORD *)DeviceExtension + 142) |= 8u;
            if ( !*(_BYTE *)(v3 + 1482) )
            {
              LOBYTE(v9) = v88;
              appended = -1073741811;
              goto LABEL_18;
            }
            v67 = *(_QWORD *)&a1[5].Data1;
            v187 = 0LL;
            v68 = *(_DWORD *)(v3 + 564);
            v183 = 0LL;
            DWORD2(v183) = v68;
            *(_QWORD *)&v183 = *(_QWORD *)(v3 + 1312);
            v69 = *((_QWORD *)DeviceExtension + 470);
            v185 = 0LL;
            v186 = 0LL;
            v182 = *(_OWORD *)(DeviceExtension + 4008);
            v184 = *((_OWORD *)DeviceExtension + 237);
            v70 = *(_OWORD *)(v69 + 872);
            v71 = (__int128 *)*((_QWORD *)DeviceExtension + 482);
            v186 = v70;
            v72 = *v71;
            v187 = DeviceExtension + 6008;
            v73 = *(_QWORD *)(v9 + 360);
            v185 = v72;
            (*(void (__fastcall **)(__int64, __int128 *))(v73 + 112))(v67, &v182);
          }
          updated = ndisIfUpdateInterfaceOnAddDevice(
                      (struct _NDIS_IF_BLOCK *)v3,
                      (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( updated
            || (v93 = 1, (updated = ndisAllocateDefaultQueue((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension)) != 0) )
          {
            LOBYTE(v9) = v88;
            appended = NdisConvertNdisStatusToNtStatus(updated);
            goto LABEL_18;
          }
          if ( !(unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline()
            || (appended = ndisRegisterMiniportTriageData((__int64)DeviceExtension)) == 0 )
          {
            v90 = 0;
            LOBYTE(v9) = 0;
            v91 = 0;
            v92 = 0;
            v94 = 0;
            v93 = 0;
            if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
            {
              _InterlockedOr(v83, 0);
              SourceDevice->Flags &= ~0x80u;
            }
            goto LABEL_18;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(DeviceObject) = appended;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x4Eu,
              (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
              (char)DeviceExtension,
              DeviceObject);
            LOBYTE(v9) = v88;
            goto LABEL_18;
          }
        }
        goto LABEL_160;
      }
      v3 = 0LL;
    }
    else
    {
      v66 = v65;
    }
    appended = -1073741072;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v66);
    LOBYTE(v9) = v88;
    v10 = 4;
    goto LABEL_18;
  }
  appended = -1073741670;
LABEL_19:
  if ( !(unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() && dword_14011A7E8 )
  {
    v14 = mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30);
    NdisTraceLoggingDeviceAdded(v3, v10, (__int64)a1, appended, *((const wchar_t **)DeviceExtension + 672), v14 < 0);
  }
  if ( appended >= 0 )
  {
    if ( (unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() && dword_14011A7E8 )
      NdisTraceLoggingDeviceAddSuccess((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, (struct _NDIS_IF_BLOCK *)v3);
    *((_DWORD *)DeviceExtension + 1042) = *(_DWORD *)&a1[2].Data4[4];
    v78 = *(_QWORD *)&a1[4].Data1;
    *(_QWORD *)&a1[4].Data1 = 0LL;
    v79 = (void *)*((_QWORD *)DeviceExtension + 523);
    *((_QWORD *)DeviceExtension + 523) = v78;
    if ( v79 )
      ExFreePoolWithTag(v79, 0x7274534Bu);
    v80 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 481) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v80);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v81,
        9u,
        0x51u,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        (char)DeviceExtension,
        *((unsigned __int16 **)DeviceExtension + 482));
    ndisLogMiniportEvent((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, NdisMEvent_DeviceAdded);
    if ( v106 )
      *v106 = DeviceExtension;
  }
  else
  {
    if ( (unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() && dword_14011A7E8 )
      NdisTraceLoggingDeviceAddFailure(v10, (__int64)a1, (unsigned int)appended, v4, (__int64)DeviceExtension);
    if ( DeviceExtension )
    {
      if ( v95 )
      {
        Ndis::BindRegistry::Reload((Ndis::BindRegistry *)DeviceExtension, 0LL, v15);
        ndisNotifyBindFailureOnUnboundProtocols((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      }
      if ( (_BYTE)v9 )
        ndisMInvokeRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      if ( v90 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 4152));
        *((_QWORD *)DeviceExtension + 520) = 0LL;
      }
      if ( v91 )
      {
        v75 = IoDeleteSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200));
        if ( v75 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(DeviceObject) = v75;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x4Fu,
              (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
              (char)DeviceExtension,
              DeviceObject);
          }
        }
      }
      if ( v92 )
      {
        v76 = *(_UNICODE_STRING **)a1[3].Data4;
        if ( !v76 )
          v76 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 522);
        v77 = IoDeleteSymbolicLink(v76);
        if ( v77 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(DeviceObject) = v77;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xDu,
            0x50u,
            (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
            (char)DeviceExtension,
            DeviceObject);
        }
      }
      if ( v93 )
        ndisIfRemoveIfBlockMiniportAssociation(
          *((struct _NDIS_IF_BLOCK **)DeviceExtension + 505),
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          NET_IF_ADMIN_STATUS_DOWN);
      ndisMDeleteMiniportBlockOnRemove((_NDIS_MINIPORT_BLOCK *)DeviceExtension);
      LOBYTE(DeviceExtension) = 0;
    }
    if ( v94 )
    {
      if ( v99 )
        IoDetachDevice(v99);
      IoDeleteDevice(SourceDevice);
      SourceDevice = 0LL;
    }
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(DeviceObject) = appended;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x52u,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)DeviceExtension,
      DeviceObject);
  }
  return (unsigned int)appended;
}
