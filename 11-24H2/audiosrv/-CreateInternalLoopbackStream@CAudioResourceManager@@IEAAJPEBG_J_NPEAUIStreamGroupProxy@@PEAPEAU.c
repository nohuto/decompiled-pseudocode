/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG_N@Z @ 0x1800B7EBC (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1800013A8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180002B54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTempl.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x180016880 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x180019FA8 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18001A0EC (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002D3E0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x180033658 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180046DBC (McGenEventWrite_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x18004B024 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_18004B024.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180051DB4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180055BE4 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18005F3D0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_18005F3D0.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18005FE14 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065C1C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180065F08 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180065F08.c)
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180066F4C (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x180067C30 (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009C858 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18009D8FC (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _lambda_5da15f794b40a19da40e88241a7121fa_::operator() @ 0x1800B7098 (_lambda_5da15f794b40a19da40e88241a7121fa_--operator().c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BD114 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        const WCHAR *a3,
        char a4,
        struct IStreamGroupProxy *a5,
        struct IBridgeStreamInstanceProxy **a6)
{
  int EndpointCharacteristicsDescriptor; // eax
  int v10; // ebx
  __int64 v11; // rdx
  char v12; // r15
  unsigned int v13; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v14; // r14d
  struct _GUID v15; // xmm6
  struct _GUID v16; // xmm7
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbx
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  struct AudioSrvTelemetryProvider *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  struct AudioSrvTelemetryProvider *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  struct tWAVEFORMATEX *v31; // rbx
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int wFormatTag; // eax
  struct AudioSrvTelemetryProvider *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  struct AudioSrvTelemetryProvider *v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  struct tWAVEFORMATEX *v43; // rbx
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // eax
  struct AudioSrvTelemetryProvider *v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  struct AudioSrvTelemetryProvider *v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  struct tWAVEFORMATEX *v55; // rbx
  _DWORD *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // eax
  struct AudioSrvTelemetryProvider *v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  struct AudioSrvTelemetryProvider *v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  int SharedModeEnginePeriodicity; // eax
  double v68; // xmm1_8
  int v69; // eax
  __int64 v70; // rax
  int v71; // eax
  CEndpointStoreCache *v72; // rcx
  __int64 v73; // r8
  int EndpointStore; // eax
  int CustomResourceManagerService; // eax
  struct _RTL_CRITICAL_SECTION **v76; // rax
  struct CEndpointStore *v77; // rdi
  __int64 (__fastcall *v78)(struct IDeviceGraphManager *, CEndpointCharacteristics **, _QWORD, __int64, _DWORD, __int64, const WCHAR **); // rbx
  int v79; // eax
  unsigned __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  _DWORD *v83; // r8
  __int64 v84; // r9
  const WCHAR *v85; // rbx
  __int64 (__fastcall *v86)(const WCHAR *, __int64 **); // rsi
  int v87; // eax
  __int64 *v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rdx
  unsigned __int64 v91; // r9
  int SaDeviceForSharedStream; // eax
  __int64 v93; // rcx
  __int64 v94; // r8
  int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rax
  int v99; // ebx
  _DWORD *v100; // rbx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  int v105; // [rsp+28h] [rbp-150h]
  struct tWAVEFORMATEX *v106; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v107; // [rsp+100h] [rbp-78h] BYREF
  struct tWAVEFORMATEX *v108; // [rsp+108h] [rbp-70h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+110h] [rbp-68h] BYREF
  __int64 v110; // [rsp+118h] [rbp-60h] BYREF
  int v111; // [rsp+120h] [rbp-58h] BYREF
  __int64 v112; // [rsp+128h] [rbp-50h] BYREF
  const WCHAR *v113; // [rsp+130h] [rbp-48h] BYREF
  __int64 *v114; // [rsp+138h] [rbp-40h] BYREF
  struct CEndpointStore *v115; // [rsp+140h] [rbp-38h] BYREF
  void *v116; // [rsp+148h] [rbp-30h] BYREF
  __int64 v117; // [rsp+150h] [rbp-28h] BYREF
  int v118; // [rsp+158h] [rbp-20h] BYREF
  int v119; // [rsp+15Ch] [rbp-1Ch] BYREF
  int v120; // [rsp+160h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v121; // [rsp+168h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v122; // [rsp+170h] [rbp-8h] BYREF
  int v123; // [rsp+178h] [rbp+0h] BYREF
  int v124; // [rsp+17Ch] [rbp+4h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+180h] [rbp+8h] BYREF
  SaDeviceParams *v126; // [rsp+188h] [rbp+10h] BYREF
  DWORD v127; // [rsp+190h] [rbp+18h] BYREF
  DWORD v128; // [rsp+194h] [rbp+1Ch] BYREF
  DWORD v129; // [rsp+198h] [rbp+20h] BYREF
  DWORD v130; // [rsp+19Ch] [rbp+24h] BYREF
  DWORD nSamplesPerSec; // [rsp+1A0h] [rbp+28h] BYREF
  int v132; // [rsp+1A4h] [rbp+2Ch] BYREF
  CEndpointCharacteristics *v133[2]; // [rsp+1A8h] [rbp+30h] BYREF
  __int64 v134; // [rsp+1B8h] [rbp+40h]
  const WCHAR *v135; // [rsp+1C0h] [rbp+48h] BYREF
  __int128 v136; // [rsp+1C8h] [rbp+50h] BYREF
  __int64 v137; // [rsp+1D8h] [rbp+60h]
  GUID *v138; // [rsp+1E0h] [rbp+68h] BYREF
  GUID *v139; // [rsp+1E8h] [rbp+70h] BYREF
  GUID *v140; // [rsp+1F0h] [rbp+78h] BYREF
  GUID *v141; // [rsp+1F8h] [rbp+80h] BYREF
  int v142; // [rsp+200h] [rbp+88h] BYREF
  struct IStreamGroupProxy *v143; // [rsp+208h] [rbp+90h] BYREF
  const WCHAR *v144; // [rsp+210h] [rbp+98h] BYREF
  const WCHAR *v145; // [rsp+218h] [rbp+A0h] BYREF
  const WCHAR *v146; // [rsp+220h] [rbp+A8h] BYREF
  const WCHAR *v147; // [rsp+228h] [rbp+B0h] BYREF
  void *v148; // [rsp+230h] [rbp+B8h] BYREF
  const WCHAR *v149; // [rsp+238h] [rbp+C0h] BYREF
  const WCHAR *v150; // [rsp+240h] [rbp+C8h] BYREF
  SaDeviceParams **v151; // [rsp+248h] [rbp+D0h] BYREF
  struct SaDeviceParams *v152; // [rsp+250h] [rbp+D8h] BYREF
  char v153; // [rsp+258h] [rbp+E0h]
  SaDeviceParams *v154; // [rsp+260h] [rbp+E8h] BYREF
  struct _RTL_CRITICAL_SECTION *v155; // [rsp+268h] [rbp+F0h] BYREF
  struct IBridgeStreamInstanceProxy **v156; // [rsp+270h] [rbp+F8h]
  GUID v157; // [rsp+278h] [rbp+100h] BYREF
  __int64 *v158; // [rsp+288h] [rbp+110h] BYREF
  struct tWAVEFORMATEX *v159; // [rsp+290h] [rbp+118h] BYREF
  char v160; // [rsp+298h] [rbp+120h]
  struct tWAVEFORMATEX **p_Src; // [rsp+2A0h] [rbp+128h] BYREF
  struct tWAVEFORMATEX *v162; // [rsp+2A8h] [rbp+130h] BYREF
  char v163; // [rsp+2B0h] [rbp+138h]
  struct tWAVEFORMATEX **v164; // [rsp+2B8h] [rbp+140h] BYREF
  struct tWAVEFORMATEX *v165; // [rsp+2C0h] [rbp+148h] BYREF
  char v166; // [rsp+2C8h] [rbp+150h]
  struct tWAVEFORMATEX **v167; // [rsp+2D0h] [rbp+158h] BYREF
  struct tWAVEFORMATEX *v168; // [rsp+2D8h] [rbp+160h] BYREF
  char v169; // [rsp+2E0h] [rbp+168h]
  GUID v170; // [rsp+2E8h] [rbp+170h] BYREF
  GUID v171; // [rsp+2F8h] [rbp+180h] BYREF
  GUID v172; // [rsp+308h] [rbp+190h] BYREF
  GUID v173; // [rsp+318h] [rbp+1A0h] BYREF
  _QWORD *v174[8]; // [rsp+328h] [rbp+1B0h] BYREF
  struct _GUID v175; // [rsp+368h] [rbp+1F0h] BYREF
  struct _GUID v176; // [rsp+378h] [rbp+200h] BYREF
  struct _GUID v177; // [rsp+388h] [rbp+210h] BYREF
  __int64 v178[2]; // [rsp+398h] [rbp+220h] BYREF
  __int64 v179[2]; // [rsp+3A8h] [rbp+230h] BYREF
  __int64 v180[2]; // [rsp+3B8h] [rbp+240h] BYREF
  __int64 v181[2]; // [rsp+3C8h] [rbp+250h] BYREF
  struct _GUID v182; // [rsp+3D8h] [rbp+260h] BYREF
  struct _GUID v183; // [rsp+3E8h] [rbp+270h] BYREF
  GUID v184; // [rsp+3F8h] [rbp+280h] BYREF
  _DWORD v185[6]; // [rsp+408h] [rbp+290h] BYREF
  const WCHAR *v186; // [rsp+420h] [rbp+2A8h]
  struct _GUID v187; // [rsp+428h] [rbp+2B0h]
  int v188[2]; // [rsp+438h] [rbp+2C0h]
  const unsigned __int16 *v189; // [rsp+440h] [rbp+2C8h]
  __int128 v190; // [rsp+448h] [rbp+2D0h]
  GUID v191; // [rsp+458h] [rbp+2E0h] BYREF
  GUID v192; // [rsp+468h] [rbp+2F0h] BYREF
  GUID v193; // [rsp+478h] [rbp+300h] BYREF
  GUID v194; // [rsp+488h] [rbp+310h] BYREF
  __int64 v195; // [rsp+498h] [rbp+320h] BYREF
  int v196; // [rsp+4A0h] [rbp+328h]
  char v197; // [rsp+4A4h] [rbp+32Ch]
  __int16 v198; // [rsp+4A5h] [rbp+32Dh]
  char v199; // [rsp+4A7h] [rbp+32Fh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v200; // [rsp+4A8h] [rbp+330h]
  struct _GUID v201; // [rsp+4ACh] [rbp+334h]
  int v202; // [rsp+4BCh] [rbp+344h]
  int v203[4]; // [rsp+4C0h] [rbp+348h] BYREF
  int v204[4]; // [rsp+4D0h] [rbp+358h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+540h] [rbp+3C8h]

  v135 = a3;
  v143 = a5;
  v156 = a6;
  *(_OWORD *)v133 = 0LL;
  v134 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v133);
  v10 = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v11 = 3216LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
    goto LABEL_116;
  }
  v12 = *((_BYTE *)v133[0] + 264);
  if ( !a4 || (v13 = 3, !v12) )
    v13 = 2;
  v14 = eHostProcessConnector;
  if ( (unsigned int)EffectPack::HardwareLoopbackEnabled(v133[1]) )
  {
    if ( !a4 || (v14 = eConnectorCount, !v12) )
      v14 = eLoopbackConnector;
  }
  v157 = GUID_00000000_0000_0000_0000_000000000000;
  v170 = GUID_00000000_0000_0000_0000_000000000000;
  v171 = GUID_00000000_0000_0000_0000_000000000000;
  v173 = GUID_00000000_0000_0000_0000_000000000000;
  v172 = GUID_00000000_0000_0000_0000_000000000000;
  EndpointCharacteristicsDescriptor = DeriveAudioProcessingModeConfiguration(
                                        0,
                                        0,
                                        0,
                                        v133,
                                        v13,
                                        0,
                                        v14,
                                        0LL,
                                        0,
                                        0,
                                        0LL,
                                        &v157,
                                        &v170,
                                        &v171,
                                        &v173,
                                        &v172);
  v10 = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v11 = 3257LL;
    goto LABEL_12;
  }
  v107 = 0LL;
  Src = 0LL;
  v108 = 0LL;
  v106 = 0LL;
  v167 = &v106;
  v168 = 0LL;
  v169 = 1;
  v164 = &v108;
  v165 = 0LL;
  v166 = 1;
  p_Src = &Src;
  v162 = 0LL;
  v163 = 1;
  v158 = &v107;
  v159 = 0LL;
  v160 = 1;
  v15 = v157;
  v175 = v157;
  v16 = v170;
  v176 = v170;
  v177 = v171;
  v10 = DeriveDeviceGraphFormatsForStream(
          v133,
          0,
          v14,
          AUDCLNT_SHAREMODE_SHARED,
          0,
          (IAudioMediaType *)&v177,
          &v176,
          &v175,
          0LL,
          &v159,
          &v162,
          &v165,
          &v168);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v158);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v164);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v167);
  if ( v10 < 0 )
  {
    v17 = (unsigned int)v10;
    v18 = 3273LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v17);
LABEL_16:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v106,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v108,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&Src,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v107,
      0LL);
    goto LABEL_116;
  }
  v19 = v107;
  if ( v107 )
  {
    v24 = *(unsigned __int16 *)v107;
    if ( (_WORD)v24 == 0xFFFE )
    {
      v28 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v28 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v28 + 1), 512LL) )
      {
        v124 = *(_DWORD *)(v19 + 20);
        v144 = (const WCHAR *)(v19 + 24);
        v123 = *(_DWORD *)(v107 + 8);
        LODWORD(v138) = *(_DWORD *)(v107 + 4);
        LOWORD(v111) = *(_WORD *)(v107 + 2);
        *(_QWORD *)&v194.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v29,
          byte_1801A9931,
          v29,
          v30,
          (const WCHAR **)&v194,
          (__int64)&v111,
          (__int64)&v138,
          (__int64)&v123,
          (__int64 *)&v144,
          (__int64)&v124);
      }
    }
    else
    {
      v194 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v194.Data1 = v24;
      v25 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v25 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v25 + 1), 512LL) )
      {
        v138 = &v194;
        v123 = *(_DWORD *)(v107 + 8);
        v124 = *(_DWORD *)(v107 + 4);
        LOWORD(v111) = *(_WORD *)(v107 + 2);
        v144 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v26,
          byte_1801A99D5,
          v26,
          v27,
          &v144,
          (__int64)&v111,
          (__int64)&v124,
          (__int64)&v123,
          (__int64 *)&v138);
      }
    }
  }
  else
  {
    v20 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v20 > 4u && tlgKeywordOn((__int64)v20, 512LL) )
    {
      v111 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v21,
        byte_1801A9A6C,
        v22,
        v23,
        (__int64)&v111);
    }
  }
  v31 = Src;
  if ( Src )
  {
    wFormatTag = Src->wFormatTag;
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      v40 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v40 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v40 + 1), 512LL) )
      {
        nSamplesPerSec = *(_DWORD *)&v31[1].nChannels;
        v145 = (const WCHAR *)&v31[1].nSamplesPerSec + 1;
        nAvgBytesPerSec = Src->nAvgBytesPerSec;
        LODWORD(v139) = Src->nSamplesPerSec;
        LOWORD(v118) = Src->nChannels;
        *(_QWORD *)&v192.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v41,
          byte_1801A978F,
          v41,
          v42,
          (const WCHAR **)&v192,
          (__int64)&v118,
          (__int64)&v139,
          (__int64)&nAvgBytesPerSec,
          (__int64 *)&v145,
          (__int64)&nSamplesPerSec);
      }
    }
    else
    {
      v192 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v192.Data1 = wFormatTag;
      v37 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v37 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v37 + 1), 512LL) )
      {
        v139 = &v192;
        nAvgBytesPerSec = Src->nAvgBytesPerSec;
        nSamplesPerSec = Src->nSamplesPerSec;
        LOWORD(v118) = Src->nChannels;
        v145 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v38,
          byte_1801A9836,
          v38,
          v39,
          &v145,
          (__int64)&v118,
          (__int64)&nSamplesPerSec,
          (__int64)&nAvgBytesPerSec,
          (__int64 *)&v139);
      }
    }
  }
  else
  {
    v32 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v32 > 4u && tlgKeywordOn((__int64)v32, 512LL) )
    {
      v118 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v33,
        byte_1801A98D0,
        v34,
        v35,
        (__int64)&v118);
    }
  }
  v43 = v108;
  if ( v108 )
  {
    v48 = v108->wFormatTag;
    if ( (_WORD)v48 == 0xFFFE )
    {
      v52 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v52 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v52 + 1), 512LL) )
      {
        v128 = *(_DWORD *)&v43[1].nChannels;
        v146 = (const WCHAR *)&v43[1].nSamplesPerSec + 1;
        v127 = v108->nAvgBytesPerSec;
        LODWORD(v140) = v108->nSamplesPerSec;
        LOWORD(v119) = v108->nChannels;
        *(_QWORD *)&v191.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v53,
          byte_1801A95F0,
          v53,
          v54,
          (const WCHAR **)&v191,
          (__int64)&v119,
          (__int64)&v140,
          (__int64)&v127,
          (__int64 *)&v146,
          (__int64)&v128);
      }
    }
    else
    {
      v191 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v191.Data1 = v48;
      v49 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v49 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v49 + 1), 512LL) )
      {
        v140 = &v191;
        v127 = v108->nAvgBytesPerSec;
        v128 = v108->nSamplesPerSec;
        LOWORD(v119) = v108->nChannels;
        v146 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v50,
          byte_1801A9696,
          v50,
          v51,
          &v146,
          (__int64)&v119,
          (__int64)&v128,
          (__int64)&v127,
          (__int64 *)&v140);
      }
    }
  }
  else
  {
    v44 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v44 > 4u && tlgKeywordOn((__int64)v44, 512LL) )
    {
      v119 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v45,
        byte_1801A972F,
        v46,
        v47,
        (__int64)&v119);
    }
  }
  v55 = v106;
  if ( v106 )
  {
    v60 = v106->wFormatTag;
    if ( (_WORD)v60 == 0xFFFE )
    {
      v64 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v64 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v64 + 1), 512LL) )
      {
        v130 = *(_DWORD *)&v55[1].nChannels;
        v147 = (const WCHAR *)&v55[1].nSamplesPerSec + 1;
        v129 = v106->nAvgBytesPerSec;
        LODWORD(v141) = v106->nSamplesPerSec;
        LOWORD(v120) = v106->nChannels;
        *(_QWORD *)&v193.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v65,
          byte_1801A9454,
          v65,
          v66,
          (const WCHAR **)&v193,
          (__int64)&v120,
          (__int64)&v141,
          (__int64)&v129,
          (__int64 *)&v147,
          (__int64)&v130);
      }
    }
    else
    {
      v193 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v193.Data1 = v60;
      v61 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v61 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v61 + 1), 512LL) )
      {
        v141 = &v193;
        v129 = v106->nAvgBytesPerSec;
        v130 = v106->nSamplesPerSec;
        LOWORD(v120) = v106->nChannels;
        v147 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v62,
          byte_1801A94F9,
          v62,
          v63,
          &v147,
          (__int64)&v120,
          (__int64)&v130,
          (__int64)&v129,
          (__int64 *)&v141);
      }
    }
  }
  else
  {
    v56 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v56 > 4u && tlgKeywordOn((__int64)v56, 512LL) )
    {
      v120 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v57,
        byte_1801A9591,
        v58,
        v59,
        (__int64)&v120);
    }
  }
  v132 = 0;
  v184 = v15;
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  (_QWORD *)v133[1],
                                  (unsigned int)v14,
                                  &v106->wFormatTag,
                                  &v184,
                                  0,
                                  &v132,
                                  0LL,
                                  0LL,
                                  0LL);
  v10 = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v17 = (unsigned int)SharedModeEnginePeriodicity;
    v18 = 3283LL;
    goto LABEL_15;
  }
  v68 = (double)v132 * 10000000.0 / (double)(int)v106->nSamplesPerSec + 0.5;
  v110 = 0LL;
  *(GUID *)v178 = v172;
  *(struct _GUID *)v179 = v16;
  *(struct _GUID *)v180 = v15;
  v69 = InitializeStreamAndModeDescriptors(
          (AudioModeEffectsWatcherFactory *)v133,
          v14,
          (__int64)v180,
          (__int64)v179,
          (__int64)v178,
          0,
          0LL,
          v107,
          0LL,
          (unsigned int)(int)v68,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0,
          0,
          0,
          0LL,
          0LL,
          0,
          0LL,
          -1,
          0LL,
          (__int64)&v110);
  v10 = v69;
  if ( v69 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCDC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v69);
LABEL_65:
    std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)&v110);
    goto LABEL_16;
  }
  v185[5] = 0;
  v190 = 0LL;
  *(_QWORD *)v188 = (unsigned int)(int)v68;
  v185[0] = v13;
  v187 = v16;
  v185[2] = v14;
  v189 = a2;
  v185[1] = 1;
  v185[4] = GetCurrentProcessId();
  v186 = v135;
  v70 = v110;
  if ( v110 )
  {
    *(_DWORD *)(*(_QWORD *)(v110 + 8) + 8LL) = *(unsigned __int16 *)(v107 + 16) + 18;
    *(_QWORD *)(*(_QWORD *)(v110 + 8) + 16LL) = v107;
    v70 = v110;
  }
  v136 = 0LL;
  v137 = 0LL;
  v185[3] = v14 == eConnectorCount;
  v112 = 0LL;
  *(GUID *)v181 = v173;
  v71 = DeriveStreamGroupParametersForStream(
          v133,
          v14,
          v13,
          *(__int64 *)v188,
          v105,
          (struct _GUID *)v181,
          0,
          0,
          Src,
          v70,
          0LL,
          (StreamGroupParams **)&v112);
  v10 = v71;
  if ( v71 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v71);
LABEL_70:
    std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((StreamGroupParams **)&v112);
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v136);
    goto LABEL_65;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (__int64)v72,
      (__int64)&AudioResourceManager_StreamSettings_Derived,
      v73,
      1LL,
      (__int64)v203);
  v115 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v72, a2, &v115);
  v10 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCFA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_75:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v115);
    goto LABEL_70;
  }
  v117 = 0LL;
  v116 = 0LL;
  CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                   v133[0],
                                   &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
                                   &v116);
  v10 = CustomResourceManagerService;
  if ( CustomResourceManagerService < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD00,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)CustomResourceManagerService);
LABEL_78:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v116);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v117);
    goto LABEL_75;
  }
  v121 = 0LL;
  if ( v116 )
  {
    v76 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(void *, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v116 + 104LL))(
                                             v116,
                                             &v155);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::operator=(
      &v121,
      v76);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v155);
  }
  v77 = v115;
  (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v115 + 13) + 128LL))(
    *((_QWORD *)v115 + 13),
    &v122);
  v113 = 0LL;
  v78 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, CEndpointCharacteristics **, _QWORD, __int64, _DWORD, __int64, const WCHAR **))(*(_QWORD *)g_DeviceGraphManager + 48LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v113);
  v79 = v78(g_DeviceGraphManager, v133, *((_QWORD *)v77 + 13), v112, 0, v110, &v113);
  v10 = v79;
  if ( v79 < 0 )
  {
    v80 = (unsigned int)v79;
    v81 = 3343LL;
LABEL_83:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v81,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v80);
LABEL_84:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v113);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v122);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v121);
    goto LABEL_78;
  }
  v174[0] = &v113;
  v174[1] = v185;
  v174[2] = &v110;
  v174[3] = &v112;
  v174[4] = &v117;
  v174[5] = &v143;
  v174[6] = &v135;
  v10 = lambda_5da15f794b40a19da40e88241a7121fa_::operator()(v174);
  v83 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v83 > 4u )
  {
    v148 = v143;
    v149 = v135;
    v150 = v113;
    v142 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (int)v83,
      (int)&unk_1801A93F6,
      (__int64)v83,
      v84,
      (__int64)&v142,
      (__int64)&v150,
      (__int64)&v149,
      (__int64)&v148);
  }
  if ( v10 < 0 )
  {
    v80 = (unsigned int)v10;
    v81 = 3375LL;
    goto LABEL_83;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v82,
      (__int64)&AudioResourceManager_Stream_Created,
      (__int64)v83,
      1LL,
      (__int64)v204);
  v114 = 0LL;
  v85 = v113;
  v86 = *(__int64 (__fastcall **)(const WCHAR *, __int64 **))(*(_QWORD *)v113 + 224LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v114);
  v87 = v86(v85, &v114);
  v10 = v87;
  if ( v87 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD35,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v87);
LABEL_93:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v114);
    goto LABEL_84;
  }
  v88 = v114;
  if ( !v114 )
  {
    v126 = 0LL;
    v151 = &v126;
    v152 = 0LL;
    v153 = 1;
    v89 = *(_QWORD *)(v112 + 24);
    v182 = v16;
    v183 = v15;
    v10 = DeriveSaDeviceParametersForStream(
            (CEndpointCharacteristics ***)v133,
            AUDCLNT_SHAREMODE_SHARED,
            v14,
            &v183,
            &v182,
            v106,
            v108,
            v89,
            &v152);
    wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v151);
    if ( v10 < 0 )
    {
      v90 = 3389LL;
LABEL_97:
      v91 = (unsigned int)v10;
LABEL_98:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v90,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v91);
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v126);
      goto LABEL_93;
    }
    if ( CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v133[0]) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v77 + 12) + 276LL), 0, 0) )
      {
        v10 = -2005139364;
        v90 = 3398LL;
        goto LABEL_97;
      }
      v15 = v157;
      v77 = v115;
    }
    v198 = 0;
    v199 = 0;
    v202 = 0;
    v197 = 1;
    v196 = 0;
    v195 = 0LL;
    v201 = v15;
    v200 = v14;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v114);
    SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                (__int64)this,
                                (__int64)v133,
                                (__int64)v116,
                                (__int64)v126,
                                0x20002u,
                                0,
                                (__int64)&v195,
                                (__int64)&v136,
                                0,
                                *((CAudioSessionManager **)v77 + 12),
                                0,
                                0,
                                (__int64)&v114);
    v10 = SaDeviceForSharedStream;
    if ( SaDeviceForSharedStream < 0 )
    {
      v91 = (unsigned int)SaDeviceForSharedStream;
      v90 = 3412LL;
      goto LABEL_98;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v93,
        (__int64)&AudioResourceManager_SaDevice_Created,
        v94,
        1LL,
        (__int64)v204);
    v95 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, const WCHAR *, __int64 *, __int64, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
            g_DeviceGraphManager,
            v113,
            v114,
            1LL,
            0LL);
    v10 = v95;
    if ( v95 < 0 )
    {
      v91 = (unsigned int)v95;
      v90 = 3424LL;
      goto LABEL_98;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v96,
        (__int64)&AudioResourceManager_SaDevice_Connected,
        v97,
        1LL,
        (__int64)v203);
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v126);
    v88 = v114;
  }
  v154 = 0LL;
  v98 = *v88;
  v151 = &v154;
  v152 = 0LL;
  v153 = 1;
  v99 = (*(__int64 (__fastcall **)(__int64 *, struct SaDeviceParams **))(v98 + 120))(v88, &v152);
  wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v151);
  if ( v99 >= 0 )
  {
    v100 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v100 > 4u )
    {
      v150 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v143 + 152LL))(v143);
      LOBYTE(v111) = v12;
      v149 = a2;
      v148 = (void *)v135;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
        (int)v100,
        (int)&unk_1801A9382,
        v101,
        v102,
        (__int64)&v148,
        &v149,
        (__int64)&v111,
        &v150);
    }
  }
  std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v154);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v114);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v113);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v122);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v121);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v116);
  v103 = v117;
  v117 = 0LL;
  *v156 = (struct IBridgeStreamInstanceProxy *)v103;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v117);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v115);
  std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((StreamGroupParams **)&v112);
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v136);
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)&v110);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v106,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v108,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&Src,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v107,
    0LL);
  v10 = 0;
LABEL_116:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v133);
  return (unsigned int)v10;
}
