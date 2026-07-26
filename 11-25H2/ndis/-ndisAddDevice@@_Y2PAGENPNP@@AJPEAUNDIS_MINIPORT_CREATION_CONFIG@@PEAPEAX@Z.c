/*
 * XREFs of ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14008AE90 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140168A20 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?resize@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x140001610 (-resize@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ??$MakePoolPtrNP@VNdisWdfIdle@@@@YA?AV?$unique_ptr@VNdisWdfIdle@@U?$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@K@Z @ 0x14000166C (--$MakePoolPtrNP@VNdisWdfIdle@@@@YA-AV-$unique_ptr@VNdisWdfIdle@@U-$KFreePoolNP@VNdisWdfIdle@@@@.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004DCD0 (-ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140050220 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x140068060 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDI.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006C8E0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?reset@?$unique_ptr@VNdisWdfIdle@@U?$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@QEAAXPEAVNdisWdfIdle@@@Z @ 0x14006CD70 (-reset@-$unique_ptr@VNdisWdfIdle@@U-$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@QEAAXPEAVNdisWdfIdle@@@.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006DCE0 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14006DEA0 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x14006FFB0 (NdisConvertNdisStatusToNtStatus.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x140070000 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x14007C0C0 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14007F010 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1400802C0 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x140082F40 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140088110 (McTemplateK0z_EtwWriteTransfer.c)
 *     ?ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z @ 0x140088A70 (-ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z.c)
 *     ?ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008ADC0 (-ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??4?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14008DE80 (--4-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV0.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x14008E660 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x140090500 (-ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x140095EB0 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400976F0 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x140099960 (--$-0$00X@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14009CBC8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A6028 (-ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B7A38 (-Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141130 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAFC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14016BBB0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x14016C8F0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016D010 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14016DE30 (-AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016F660 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401706C0 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401721D0 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x140172460 (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x140172C30 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140172C90 (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x140173400 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140176000 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisAddDevice(struct _GUID *a1, void **a2)
{
  char *DeviceExtension; // rbx
  __int64 v3; // r12
  void **v4; // r13
  int appended; // edi
  _DEVICE_OBJECT *v7; // rax
  const struct _GUID *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r14
  int v11; // r15d
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r13
  unsigned int v14; // ecx
  ULONG v15; // r12d
  __int16 v16; // ax
  struct _NDIS_MINIPORT_BLOCK *Pool2; // rax
  __int64 EventLog; // rax
  _GUID v19; // xmm0
  __int64 v20; // rax
  unsigned __int8 (*v21)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r9
  unsigned int v22; // eax
  LOGICAL IsDriverVerifying; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  const struct _DEVPROPKEY *v26; // rdx
  int DevicePropertyData; // edi
  _UNICODE_STRING *v28; // r8
  int v29; // edx
  __int64 v30; // rcx
  int v31; // edx
  struct _DRIVER_OBJECT *v32; // rcx
  int v33; // edx
  int v34; // eax
  _UNICODE_STRING *p_DeviceName; // rdx
  _UNICODE_STRING *v36; // r12
  int v37; // edx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // edx
  bool v41; // zf
  __int64 v42; // rcx
  char v43; // r14
  KIRQL v44; // al
  __int64 v45; // rdx
  struct _DRIVER_OBJECT *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  int v51; // eax
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // rax
  KIRQL v53; // r8
  struct _NDIS_IF_BLOCK *v54; // r13
  int v55; // eax
  int updated; // eax
  PDEVICE_OBJECT v57; // rdx
  _DWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r13
  _DEVICE_OBJECT *v61; // rax
  __int64 v62; // rcx
  _DEVICE_OBJECT *v63; // rax
  NdisWdfIdle *v64; // r12
  int v65; // edx
  int v66; // edx
  __int64 v67; // rcx
  _NDIS_MEDIUM MediaType; // eax
  __int64 v69; // rax
  __int128 v70; // xmm0
  __int128 *v71; // rax
  __int128 v72; // xmm1
  __int64 v73; // rax
  NTSTATUS v74; // eax
  _UNICODE_STRING *v75; // rcx
  NTSTATUS v76; // eax
  signed __int32 v77[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG DeviceCharacteristics[2]; // [rsp+20h] [rbp-E0h]
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-D0h]
  char v81; // [rsp+40h] [rbp-C0h]
  void **v82; // [rsp+48h] [rbp-B8h]
  __int64 v83; // [rsp+50h] [rbp-B0h]
  char v84; // [rsp+58h] [rbp-A8h]
  char v85; // [rsp+59h] [rbp-A7h]
  char v86; // [rsp+5Ah] [rbp-A6h]
  char v87; // [rsp+5Bh] [rbp-A5h]
  char v88; // [rsp+5Ch] [rbp-A4h]
  char v89; // [rsp+5Dh] [rbp-A3h]
  PDEVICE_OBJECT SourceDevice; // [rsp+60h] [rbp-A0h] BYREF
  struct _DRIVER_OBJECT *DriverObject; // [rsp+68h] [rbp-98h] BYREF
  NdisWdfIdle *v92; // [rsp+70h] [rbp-90h] BYREF
  PDEVICE_OBJECT v93; // [rsp+78h] [rbp-88h]
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+90h] [rbp-70h]
  struct _NDIS_MINIPORT_BLOCK *v96; // [rsp+98h] [rbp-68h] BYREF
  struct BUS_INTERFACE_REFERENCE *v97; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING String; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING DeviceName; // [rsp+B8h] [rbp-48h] BYREF
  struct _CONFIG_KNOB_NAMESPACE v100; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v101[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v102; // [rsp+F0h] [rbp-10h]
  _QWORD Src[3]; // [rsp+100h] [rbp+0h] BYREF
  int v104; // [rsp+118h] [rbp+18h]
  __int128 v105; // [rsp+120h] [rbp+20h]
  const wchar_t *v106; // [rsp+130h] [rbp+30h]
  char *v107; // [rsp+138h] [rbp+38h]
  __int64 v108; // [rsp+140h] [rbp+40h]
  int v109; // [rsp+148h] [rbp+48h]
  __int128 v110; // [rsp+150h] [rbp+50h]
  const wchar_t *v111; // [rsp+160h] [rbp+60h]
  char *v112; // [rsp+168h] [rbp+68h]
  __int64 v113; // [rsp+170h] [rbp+70h]
  int v114; // [rsp+178h] [rbp+78h]
  __int128 v115; // [rsp+180h] [rbp+80h]
  const wchar_t *v116; // [rsp+190h] [rbp+90h]
  char *v117; // [rsp+198h] [rbp+98h]
  __int64 v118; // [rsp+1A0h] [rbp+A0h]
  int v119; // [rsp+1A8h] [rbp+A8h]
  __int64 v120; // [rsp+1B0h] [rbp+B0h]
  __int64 v121; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v122; // [rsp+1C0h] [rbp+C0h]
  char *v123; // [rsp+1C8h] [rbp+C8h]
  __int64 v124; // [rsp+1D0h] [rbp+D0h]
  int v125; // [rsp+1D8h] [rbp+D8h]
  __int64 v126; // [rsp+1E0h] [rbp+E0h]
  __int64 v127; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v128; // [rsp+1F0h] [rbp+F0h]
  char *v129; // [rsp+1F8h] [rbp+F8h]
  __int64 v130; // [rsp+200h] [rbp+100h]
  int v131; // [rsp+208h] [rbp+108h]
  __int64 v132; // [rsp+210h] [rbp+110h]
  __int64 v133; // [rsp+218h] [rbp+118h]
  const wchar_t *v134; // [rsp+220h] [rbp+120h]
  char *v135; // [rsp+228h] [rbp+128h]
  __int64 v136; // [rsp+230h] [rbp+130h]
  int v137; // [rsp+238h] [rbp+138h]
  __int128 v138; // [rsp+240h] [rbp+140h]
  const wchar_t *v139; // [rsp+250h] [rbp+150h]
  char *v140; // [rsp+258h] [rbp+158h]
  __int64 v141; // [rsp+260h] [rbp+160h]
  int v142; // [rsp+268h] [rbp+168h]
  __int128 v143; // [rsp+270h] [rbp+170h]
  const wchar_t *v144; // [rsp+280h] [rbp+180h]
  char *v145; // [rsp+288h] [rbp+188h]
  __int64 v146; // [rsp+290h] [rbp+190h]
  int v147; // [rsp+298h] [rbp+198h]
  __int128 v148; // [rsp+2A0h] [rbp+1A0h]
  const wchar_t *v149; // [rsp+2B0h] [rbp+1B0h]
  char *v150; // [rsp+2B8h] [rbp+1B8h]
  __int64 v151; // [rsp+2C0h] [rbp+1C0h]
  int v152; // [rsp+2C8h] [rbp+1C8h]
  __int128 v153; // [rsp+2D0h] [rbp+1D0h]
  const wchar_t *v154; // [rsp+2E0h] [rbp+1E0h]
  char *v155; // [rsp+2E8h] [rbp+1E8h]
  __int64 v156; // [rsp+2F0h] [rbp+1F0h]
  int v157; // [rsp+2F8h] [rbp+1F8h]
  __int128 v158; // [rsp+300h] [rbp+200h]
  const wchar_t *v159; // [rsp+310h] [rbp+210h]
  char *v160; // [rsp+318h] [rbp+218h]
  __int64 v161; // [rsp+320h] [rbp+220h]
  int v162; // [rsp+328h] [rbp+228h]
  __int128 v163; // [rsp+330h] [rbp+230h]
  const wchar_t *v164; // [rsp+340h] [rbp+240h]
  char *v165; // [rsp+348h] [rbp+248h]
  __int64 v166; // [rsp+350h] [rbp+250h]
  int v167; // [rsp+358h] [rbp+258h]
  __int128 v168; // [rsp+360h] [rbp+260h]
  const wchar_t *v169; // [rsp+370h] [rbp+270h]
  char *v170; // [rsp+378h] [rbp+278h]
  __int64 v171; // [rsp+380h] [rbp+280h]
  int v172; // [rsp+388h] [rbp+288h]
  __int128 v173; // [rsp+390h] [rbp+290h]
  char v174[160]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int128 v175; // [rsp+440h] [rbp+340h] BYREF
  __int128 v176; // [rsp+450h] [rbp+350h]
  __int128 v177; // [rsp+460h] [rbp+360h]
  __int128 v178; // [rsp+470h] [rbp+370h]
  __int128 v179; // [rsp+480h] [rbp+380h]
  char *v180; // [rsp+490h] [rbp+390h]
  char v181; // [rsp+4A0h] [rbp+3A0h] BYREF
  char v182; // [rsp+4C8h] [rbp+3C8h] BYREF
  char v183; // [rsp+510h] [rbp+410h] BYREF

  v82 = a2;
  v93 = 0LL;
  DeviceExtension = 0LL;
  SourceDevice = 0LL;
  v3 = 0LL;
  v83 = 0LL;
  v4 = a2;
  v84 = 0;
  v85 = 0;
  appended = -1073741823;
  v88 = 0;
  v86 = 0;
  v87 = 0;
  v89 = 0;
  v7 = *(_DEVICE_OBJECT **)&a1[2].Data1;
  TargetDevice = v7;
  v8 = &WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      13,
      68,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)v7);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v10 = *(_QWORD *)&a1[6].Data1;
  if ( a1[5].Data4[1] != *(_BYTE *)(v10 + 26) >> 7 )
    __int2c();
  v11 = 1;
  if ( !v10 )
  {
    appended = -1073741670;
    v43 = 0;
    goto LABEL_56;
  }
  DriverObject = *(struct _DRIVER_OBJECT **)(v10 + 40);
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i; i = i->NextDriver )
  {
    if ( i == (struct _NDIS_M_DRIVER_BLOCK *)v10 )
      break;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
  v11 = 2;
  if ( i != (struct _NDIS_M_DRIVER_BLOCK *)v10 )
    goto LABEL_71;
  v11 = 3;
  if ( *(_BYTE *)(v10 + 24) >= 6u && !a1[2].Data4[0] )
  {
    appended = -1073741491;
    goto LABEL_71;
  }
  v11 = 4;
  v14 = (**(unsigned __int16 **)a1[3].Data4 + 6115) & 0xFFFFFFF8;
  *(_QWORD *)&String.Length = 2621440LL;
  *(_QWORD *)&DestinationString.Length = 3932160LL;
  v15 = v14 + 8 * ndisMaxNumberOfProcessors;
  String.Buffer = (wchar_t *)&v181;
  DestinationString.Buffer = (wchar_t *)&v182;
  RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
  appended = RtlIntegerToUnicodeString(_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex), 0xAu, &String);
  if ( appended )
    goto LABEL_111;
  appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
  if ( appended )
    goto LABEL_111;
  v16 = *(_WORD *)(v10 + 26);
  if ( (v16 & 0x80u) == 0 )
  {
    if ( (v16 & 0x40) != 0 )
    {
      v59 = *(_QWORD *)&a1[5].Data1;
      v96 = 0LL;
      v60 = *(_QWORD *)(v10 + 360);
      appended = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _NDIS_MINIPORT_BLOCK **))(v60 + 104))(
                   v59,
                   v15,
                   &v96);
      if ( !appended )
      {
        v61 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(_QWORD))(v60 + 64))(*(_QWORD *)&a1[5].Data1);
        v62 = *(_QWORD *)&a1[5].Data1;
        SourceDevice = v61;
        v63 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(__int64))(v60 + 72))(v62);
        DeviceExtension = (char *)v96;
        v93 = v63;
        ndisMInitializeMiniportBlock((struct _NDIS_M_DRIVER_BLOCK *)v10, v96, v15);
        MakePoolPtrNP<NdisWdfIdle>((__int64)&v92);
        v64 = v92;
        if ( v92 )
        {
          appended = NdisWdfIdle::Initialize(v92, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
          if ( !appended )
          {
            v92 = 0LL;
            wistd::unique_ptr<NdisWdfIdle,KFreePoolNP<NdisWdfIdle>>::reset((NdisWdfIdle **)DeviceExtension + 761, v64);
            *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)&a1[5].Data1;
            wistd::unique_ptr<NdisWdfIdle,KFreePoolNP<NdisWdfIdle>>::reset(&v92, 0LL);
            goto LABEL_14;
          }
        }
        else
        {
          appended = -1073741670;
        }
        wistd::unique_ptr<NdisWdfIdle,KFreePoolNP<NdisWdfIdle>>::reset(&v92, 0LL);
LABEL_70:
        v3 = v83;
LABEL_71:
        v4 = v82;
        v43 = 0;
        goto LABEL_56;
      }
    }
    else
    {
      v11 = 5;
      appended = IoCreateDevice(DriverObject, v15, &DestinationString, 0x17u, 0x100u, 0, &SourceDevice);
      if ( appended >= 0 )
      {
        v11 = 6;
        v57 = TargetDevice;
        v88 = 1;
        SourceDevice->Flags |= 0x10u;
        v57->Flags &= ~0x80u;
        SourceDevice->Flags |= 0x2000u;
        v93 = IoAttachDeviceToDeviceStack(SourceDevice, v57);
        if ( v93 )
        {
          DeviceExtension = (char *)SourceDevice->DeviceExtension;
          ndisMInitializeMiniportBlock(
            (struct _NDIS_M_DRIVER_BLOCK *)v10,
            (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
            v15);
          goto LABEL_14;
        }
        appended = -1073741823;
      }
    }
LABEL_111:
    v3 = 0LL;
    goto LABEL_71;
  }
  Pool2 = (struct _NDIS_MINIPORT_BLOCK *)ExAllocatePool2((unsigned int)(appended + 66), (int)v15, 2003584078);
  DeviceExtension = (char *)Pool2;
  if ( !Pool2 )
  {
    appended = -1073741670;
    v3 = 0LL;
    goto LABEL_71;
  }
  ndisMInitializeMiniportBlock((struct _NDIS_M_DRIVER_BLOCK *)v10, Pool2, v15);
  *((_DWORD *)DeviceExtension + 30) |= 0x100u;
LABEL_14:
  if ( (*(_BYTE *)(v10 + 26) & 0x40) != 0 )
    *((_DWORD *)DeviceExtension + 30) |= 0x80u;
  *(struct _GUID *)(DeviceExtension + 4008) = *a1;
  EventLog = ndisAllocateEventLog(2u, 1);
  v19 = *(_GUID *)(DeviceExtension + 4008);
  *((_QWORD *)DeviceExtension + 559) = EventLog;
  v100.NamespaceType = ConfigKnobNamespaceNetworkInterfaceProfile;
  v100.ObjectId = v19;
  if ( DeviceExtension != (char *)-5920LL )
    KnobNamespace::KnobNamespace(
      (KnobNamespace *)(DeviceExtension + 5920),
      (struct _DRIVER_OBJECT *)ndisDriverObject,
      &v100);
  Src[2] = 1LL;
  v104 = 32;
  *(_OWORD *)(DeviceExtension + 6008) = 0LL;
  v3 = 0LL;
  v109 = 32;
  *(_OWORD *)(DeviceExtension + 6024) = 0LL;
  v108 = 0LL;
  *(_OWORD *)(DeviceExtension + 6040) = 0LL;
  *((_QWORD *)DeviceExtension + 757) = 0LL;
  *((_DWORD *)DeviceExtension + 1516) = 0;
  Src[0] = L"Flags";
  Src[1] = DeviceExtension + 6012;
  v106 = L"MaxTimeAtDispatch";
  v107 = DeviceExtension + 6016;
  v111 = L"DispatchTimeWarning";
  v112 = DeviceExtension + 6020;
  v116 = L"DispatchTimeWarningInterval";
  v117 = DeviceExtension + 6024;
  v122 = L"DpcWatchdogTimerThreshold";
  v123 = DeviceExtension + 6028;
  v128 = L"WorkerThreadPriority";
  v129 = DeviceExtension + 6032;
  v134 = L"MaxPacketsSendAtPassive";
  v135 = DeviceExtension + 6036;
  v139 = L"MaxPacketsSendCompleteAtPassive";
  v140 = DeviceExtension + 6044;
  v144 = L"MaxPacketsReceiveAtPassive";
  v145 = DeviceExtension + 6052;
  v149 = L"MaxPacketsReceiveCompleteAtPassive";
  v150 = DeviceExtension + 6060;
  *((_QWORD *)DeviceExtension + 751) = 60LL;
  v105 = 0LL;
  v113 = 0LL;
  v110 = 0LL;
  v114 = 32;
  v115 = 0LL;
  v118 = 900000LL;
  v119 = 32;
  v120 = 60000LL;
  v121 = 1440000LL;
  v124 = 80LL;
  v125 = 32;
  v126 = 1LL;
  v127 = 80LL;
  v130 = 10LL;
  v131 = 32;
  v132 = 1LL;
  v133 = 15LL;
  v136 = 64LL;
  v137 = 32;
  v138 = 0LL;
  v141 = 64LL;
  v142 = 32;
  v143 = 0LL;
  v146 = 64LL;
  v147 = 32;
  v148 = 0LL;
  v151 = 64LL;
  v152 = 32;
  v156 = 64LL;
  v154 = L"MaxPacketsSendAtDispatch";
  v157 = 32;
  v155 = DeviceExtension + 6040;
  v159 = L"MaxPacketsSendCompleteAtDispatch";
  v160 = DeviceExtension + 6048;
  v164 = L"MaxPacketsReceiveAtDispatch";
  v165 = DeviceExtension + 6056;
  v169 = L"MaxPacketsReceiveCompleteAtDispatch";
  v170 = DeviceExtension + 6064;
  v153 = 0LL;
  v161 = 64LL;
  v158 = 0LL;
  v162 = 32;
  v163 = 0LL;
  v166 = 64LL;
  v167 = 32;
  v168 = 0LL;
  v171 = 64LL;
  v172 = 32;
  v173 = 0LL;
  if ( !Rtl::KArray<KnobDescriptor,1>::resize((__int64)(DeviceExtension + 5992)) )
  {
    v4 = v82;
    appended = -1073741670;
    v43 = 0;
    goto LABEL_56;
  }
  v20 = *((unsigned int *)DeviceExtension + 1499);
  if ( !(_DWORD)v20
    || (memmove(*((void **)DeviceExtension + 750), Src, 48 * v20), (v22 = *((_DWORD *)DeviceExtension + 1499)) == 0) )
  {
    __fastfail(5u);
  }
  KnobNamespace::AddKnobCollection(
    (KnobNamespace *)(DeviceExtension + 5920),
    *((const struct KnobDescriptor **)DeviceExtension + 750),
    v22,
    v21,
    0LL);
  if ( (*((_DWORD *)DeviceExtension + 30) & 0x100) != 0 )
    IsDriverVerifying = (*(unsigned __int16 *)(v10 + 26) >> 1) & 1;
  else
    IsDriverVerifying = MmIsDriverVerifying(DriverObject);
  if ( ndisVerifierNdisDispatch )
  {
    if ( IsDriverVerifying )
    {
      v11 = 1;
      appended = (*((__int64 (__fastcall **)(PDEVICE_OBJECT, char *, char *, char *))ndisVerifierNdisDispatch + 1))(
                   SourceDevice,
                   DeviceExtension,
                   DeviceExtension + 24,
                   DeviceExtension + 4968);
      if ( appended < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v65) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v65,
            13,
            69,
            (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
            (char)DeviceExtension);
        }
        goto LABEL_71;
      }
    }
  }
  ndisSetDeviceNames(
    *(PCUNICODE_STRING *)a1[3].Data4,
    (PUNICODE_STRING)DeviceExtension + 238,
    (struct _UNICODE_STRING *)DeviceExtension + 237,
    (wchar_t *)DeviceExtension + 3052);
  v24 = ExAllocatePool2(66LL, DestinationString.Length + 2LL, 1851868238);
  *((_QWORD *)DeviceExtension + 526) = v24;
  if ( !v24 )
  {
    v3 = v83;
    appended = -1073741670;
    v4 = v82;
    v11 = 1;
    v43 = 0;
    goto LABEL_56;
  }
  *((_WORD *)DeviceExtension + 2101) = DestinationString.Length + 2;
  RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4200), &DestinationString);
  if ( (*((_DWORD *)DeviceExtension + 30) & 0x100) == 0 )
  {
    *((_QWORD *)DeviceExtension + 479) = TargetDevice;
    *((_QWORD *)DeviceExtension + 478) = SourceDevice;
    *((_QWORD *)DeviceExtension + 480) = v93;
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&DriverObject);
    v25 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>(
            (__int64)v101,
            (__int64)&DriverObject);
    DevicePropertyData = ndisMiniportQueryDevicePropertyData(
                           (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                           v26,
                           (wchar_t **)(v25 + 8));
    if ( v102 )
      wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v101[0], v101[1]);
    if ( !DevicePropertyData )
    {
      *((_QWORD *)DeviceExtension + 672) = DriverObject;
      DriverObject = 0LL;
    }
    v28 = 0LL;
    v11 = 8;
    if ( DeviceExtension[120] < 0 )
      v28 = (_UNICODE_STRING *)(DeviceExtension + 3792);
    appended = IoRegisterDeviceInterface(
                 *((PDEVICE_OBJECT *)DeviceExtension + 479),
                 &GUID_DEVINTERFACE_NET,
                 v28,
                 (PUNICODE_STRING)(DeviceExtension + 4152));
    if ( appended < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v29,
          13,
          70,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          (char)DeviceExtension);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(
          v30,
          &AddDeviceFailed,
          (const GUID *)&NDIS_PROVIDER_ID,
          appended,
          1,
          (char)DeviceExtension);
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&DriverObject, 0LL);
      goto LABEL_70;
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
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v31) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v31,
          13,
          71,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          (char)DeviceExtension);
      }
      v47 = DriverObject;
      DriverObject = 0LL;
      if ( v47 )
        ExFreePoolWithTag(v47, 0);
      goto LABEL_70;
    }
    v32 = DriverObject;
    v85 = 1;
    DriverObject = 0LL;
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
  }
  if ( (*((_DWORD *)DeviceExtension + 30) & 0x180) != 0 )
  {
    *(_QWORD *)&DeviceName.Length = 8912896LL;
    DeviceName.Buffer = (wchar_t *)&v183;
    appended = RtlUnicodeStringPrintf(&DeviceName, L"\\Device\\lwm\\NetworkInterface\\%wZ", DeviceExtension + 3792);
    if ( appended )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v33,
          13,
          72,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          (char)DeviceExtension);
      }
      goto LABEL_70;
    }
    v11 = 7;
    v34 = *((_DWORD *)DeviceExtension + 30);
    if ( (v34 & 0x80u) == 0 || (p_DeviceName = (_UNICODE_STRING *)(DeviceExtension + 4152), (v34 & 0x100) != 0) )
      p_DeviceName = &DeviceName;
    v36 = (_UNICODE_STRING *)(DeviceExtension + 4200);
    appended = IoCreateSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200), p_DeviceName);
    if ( appended )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v37,
          13,
          73,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          (char)DeviceExtension);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
        goto LABEL_70;
      *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
      DeviceCharacteristics[0] = 65538;
LABEL_159:
      McTemplateK0qqq_EtwWriteTransfer(
        v38,
        &AddDeviceFailed,
        (const GUID *)&NDIS_PROVIDER_ID,
        appended,
        DeviceCharacteristics[0],
        Exclusive[0]);
      goto LABEL_70;
    }
    v86 = 1;
  }
  else
  {
    v36 = (_UNICODE_STRING *)(DeviceExtension + 4200);
  }
  v39 = *((_DWORD *)DeviceExtension + 30);
  if ( (v39 & 0x80u) != 0 && (v39 & 0x100) == 0 )
    v36 = (_UNICODE_STRING *)(DeviceExtension + 4152);
  v11 = 7;
  appended = IoCreateSymbolicLink(*(PUNICODE_STRING *)a1[3].Data4, v36);
  if ( appended )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v40,
        13,
        74,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        (char)DeviceExtension);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
      goto LABEL_70;
    *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
    DeviceCharacteristics[0] = 65539;
    goto LABEL_159;
  }
  v41 = (*((_DWORD *)DeviceExtension + 30) & 0x100) == 0;
  v81 = 1;
  if ( v41 )
  {
    *((_QWORD *)DeviceExtension + 620) = 0LL;
    v42 = *(_QWORD *)&a1[3].Data1;
    if ( v42 && *(_WORD *)v42 )
      ndisQueryDeviceFlags(*(const wchar_t **)(v42 + 8), (unsigned __int64 *)DeviceExtension + 620);
    if ( a1[4].Data4[0] )
      *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
    if ( a1[4].Data4[1] )
      *((_DWORD *)DeviceExtension + 31) |= 2u;
    if ( a1[4].Data4[2] )
      *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
    if ( a1[4].Data4[0] )
    {
      v11 = 4;
      v97 = 0LL;
      appended = ndisQueryReferenceBusInterface(TargetDevice, (PVOID *)&v97);
      if ( appended < 0 )
      {
LABEL_54:
        v3 = v83;
LABEL_55:
        v4 = v82;
        v43 = v81;
        goto LABEL_56;
      }
      *((_QWORD *)DeviceExtension + 498) = v97;
    }
    v11 = 4;
    appended = ndisCreateSecurityDescriptor(
                 *((struct _DEVICE_OBJECT **)DeviceExtension + 478),
                 (void **)DeviceExtension + 473,
                 5u);
    if ( appended < 0 )
      goto LABEL_54;
  }
  v11 = 4;
  appended = ndisCreateAdapterInstanceName(
               (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
               (struct _UNICODE_STRING **)DeviceExtension + 482,
               (struct _UNICODE_STRING **)DeviceExtension + 551);
  if ( appended < 0 )
    goto LABEL_54;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v48,
      0xDu,
      0x4Bu,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)DeviceExtension,
      *((unsigned __int16 **)DeviceExtension + 482));
  if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
    McTemplateK0z_EtwWriteTransfer(v49, &AddDevice, v9, *(const wchar_t **)(*((_QWORD *)DeviceExtension + 482) + 8LL));
  *((_DWORD *)DeviceExtension + 1015) = 1;
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(
    (void **)DeviceExtension + 522,
    (void **)a1[3].Data4);
  v50 = ndisInitializeConfiguration((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, *(PCWSTR *)a1[1].Data4);
  if ( v50 )
    goto LABEL_128;
  Ndis::BindEngine::Initialize(
    (Ndis::BindEngine *)(DeviceExtension + 5120),
    (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  v51 = *((_DWORD *)DeviceExtension + 30);
  if ( (v51 & 0x80u) != 0 && (v51 & 0x100) == 0 )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5120));
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5048), DatapathPaused, PauseReason_Wdf) )
    {
      memset(v174, 0, sizeof(v174));
      if ( (unsigned __int8)byte_140126C63 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          (struct NDIS_PNPTRACE_LOCALS *)v174);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v66,
            0x1Cu,
            0x4Cu,
            (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
            *(unsigned __int16 **)&v174[8],
            *(_QWORD *)v174);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5120));
  }
  v89 = 1;
  appended = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( appended < 0 )
    goto LABEL_54;
  ndisMFindNumaDistances((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( !*(_QWORD *)(v10 + 776) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x4Du,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        v10,
        DeviceExtension);
    goto LABEL_85;
  }
  v11 = 10;
  v50 = ndisMInvokeAddDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( v50 )
  {
LABEL_128:
    appended = NdisConvertNdisStatusToNtStatus(v50);
    goto LABEL_54;
  }
  v84 = 1;
LABEL_85:
  if ( (*(_BYTE *)(v10 + 26) & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
  {
    v58 = (_DWORD *)*((_QWORD *)DeviceExtension + 471);
    if ( !v58 )
    {
      appended = -1073741823;
      v11 = 3;
      goto LABEL_54;
    }
    if ( *v58 > 1u )
    {
      appended = -1073741637;
      v11 = 3;
      goto LABEL_54;
    }
  }
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
  v54 = InterfaceByInterfaceGuid;
  if ( !InterfaceByInterfaceGuid )
  {
    appended = -1073741072;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v53);
    v11 = 4;
    v3 = 0LL;
    goto LABEL_55;
  }
  if ( InterfaceByInterfaceGuid->NetLuid.Value != *(_QWORD *)&a1[1].Data1 )
  {
    appended = -1073741072;
    v3 = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v53);
    v11 = 4;
    goto LABEL_55;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v53);
  v11 = 4;
  if ( appended )
  {
LABEL_137:
    v3 = (__int64)v54;
    goto LABEL_55;
  }
  ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, a1[4].Data4[3]);
  ndisIfUpdateInterfaceHiddenFlag(v54, a1[4].Data4[3]);
  v55 = *((_DWORD *)DeviceExtension + 30);
  if ( (v55 & 0x80u) != 0 && (v55 & 0x100) == 0 )
  {
    if ( !a1[5].Data4[0] )
      *((_DWORD *)DeviceExtension + 142) |= 8u;
    if ( !v54->IsWDFMiniportInterface )
    {
      appended = -1073741811;
      goto LABEL_137;
    }
    v67 = *(_QWORD *)&a1[5].Data1;
    v180 = 0LL;
    MediaType = v54->MediaType;
    v176 = 0LL;
    DWORD2(v176) = MediaType;
    *(_QWORD *)&v176 = v54->NetLuid.Value;
    v69 = *((_QWORD *)DeviceExtension + 470);
    v178 = 0LL;
    v179 = 0LL;
    v175 = *(_OWORD *)(DeviceExtension + 4008);
    v177 = *((_OWORD *)DeviceExtension + 237);
    v70 = *(_OWORD *)(v69 + 872);
    v71 = (__int128 *)*((_QWORD *)DeviceExtension + 482);
    v179 = v70;
    v72 = *v71;
    v180 = DeviceExtension + 6008;
    v73 = *(_QWORD *)(v10 + 360);
    v178 = v72;
    (*(void (__fastcall **)(__int64, __int128 *))(v73 + 112))(v67, &v175);
  }
  updated = ndisIfUpdateInterfaceOnAddDevice(v54, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( updated || (v87 = 1, (updated = ndisAllocateDefaultQueue((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension)) != 0) )
  {
    appended = NdisConvertNdisStatusToNtStatus(updated);
    v3 = (__int64)v54;
    goto LABEL_55;
  }
  v43 = 0;
  v84 = 0;
  v41 = (*((_DWORD *)DeviceExtension + 30) & 0x100) == 0;
  v85 = 0;
  v86 = 0;
  v88 = 0;
  v87 = 0;
  if ( v41 )
  {
    _InterlockedOr(v77, 0);
    SourceDevice->Flags &= ~0x80u;
  }
  v3 = (__int64)v54;
  v4 = v82;
LABEL_56:
  if ( dword_1401247E8 )
    NdisTraceLoggingDeviceAdded(
      v3,
      v11,
      (__int64)a1,
      appended,
      *((const wchar_t **)DeviceExtension + 672),
      (*((_DWORD *)DeviceExtension + 30) & 0x80) != 0);
  if ( appended < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v89 )
      {
        Ndis::BindRegistry::Reload(
          (Ndis::BindRegistry *)DeviceExtension,
          0LL,
          (enum Ndis::ReadBindingsOptions::Flags)v9);
        ndisNotifyBindFailureOnUnboundProtocols((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      }
      if ( v84 )
        ndisMInvokeRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      if ( v85 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 4152));
        *((_QWORD *)DeviceExtension + 520) = 0LL;
      }
      if ( v86 )
      {
        v74 = IoDeleteSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200));
        if ( v74 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(DeviceObject) = v74;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x4Eu,
              (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
              (char)DeviceExtension,
              DeviceObject);
          }
        }
      }
      if ( v43 )
      {
        v75 = *(_UNICODE_STRING **)a1[3].Data4;
        if ( !v75 )
          v75 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 522);
        v76 = IoDeleteSymbolicLink(v75);
        if ( v76 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(DeviceObject) = v76;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xDu,
            0x4Fu,
            (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
            (char)DeviceExtension,
            DeviceObject);
        }
      }
      if ( v87 )
        ndisIfRemoveIfBlockMiniportAssociation(
          *((struct _NDIS_IF_BLOCK **)DeviceExtension + 505),
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          NET_IF_ADMIN_STATUS_DOWN);
      ndisMDeleteMiniportBlockOnRemove((_NDIS_MINIPORT_BLOCK *)DeviceExtension);
      LOBYTE(DeviceExtension) = 0;
    }
    if ( v88 )
    {
      if ( v93 )
        IoDetachDevice(v93);
      IoDeleteDevice(SourceDevice);
      SourceDevice = 0LL;
    }
  }
  else
  {
    *((_DWORD *)DeviceExtension + 1042) = *(_DWORD *)&a1[2].Data4[4];
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::operator=(
      (void **)DeviceExtension + 523,
      (void **)&a1[4]);
    v44 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 481) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v44);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v45,
        9u,
        0x50u,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        (char)DeviceExtension,
        *((unsigned __int16 **)DeviceExtension + 482));
    ndisLogMiniportEvent((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, NdisMEvent_DeviceAdded);
    if ( v4 )
      *v4 = DeviceExtension;
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(DeviceObject) = appended;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x51u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)DeviceExtension,
      DeviceObject);
  }
  return (unsigned int)appended;
}
