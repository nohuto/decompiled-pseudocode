/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18002738C (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800276F4 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x180030A00 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180031680 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032190 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033F1C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003B888 (Create_SpatialAudioDevicePropertyReader.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180041978 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18005190C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x180058EAC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_180058EAC.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800601F4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z @ 0x180060EAC (-move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180063868 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18006D6B4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_18006D6B4.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18006E0F4 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180072B64 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007576C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180075D20 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180075D20.c)
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180076FFC (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x180077DF0 (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180083E1C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009FF94 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?GetDefaultAecReferenceEndpointId@@YAJU_GUID@@PEAPEAG@Z @ 0x1800A1120 (-GetDefaultAecReferenceEndpointId@@YAJU_GUID@@PEAPEAG@Z.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A3C60 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A5C5C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ??4?$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800B5F1C (--4-$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800BDF94 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAudioProcess@@PEAVCAudioSessionManager@@PEBU_GUID@@8PEAPEAUISaDeviceProxy@@@Z @ 0x1800BE128 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BE314 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C6FD0 (-DisconnectAllStreamsOfType@CAudioSessionManager@@QEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=36 #try_helpers=1
__int64 __fastcall CAudioResourceManager::CreateStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        struct EndpointCharacteristicsDescriptor *a12,
        unsigned int a13,
        enum _AUDCLNT_SHAREMODE a14,
        __int64 a15,
        struct tWAVEFORMATEX *a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        int a22,
        __int64 a23,
        unsigned int a24,
        __int64 a25,
        int a26,
        __int64 a27,
        int a28,
        struct IProcessSubmixProxy *a29,
        __int64 a30)
{
  struct IProcessSubmixProxy *v31; // r14
  int v32; // ebx
  unsigned int v33; // edi
  int v34; // eax
  int v35; // ebx
  struct _GUID v36; // xmm7
  struct _GUID v37; // xmm8
  struct _GUID v38; // xmm6
  int v39; // edi
  unsigned __int64 v40; // r9
  __int64 v41; // rdx
  _DWORD *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _DWORD *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _DWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _DWORD *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  struct AudioSrvTelemetryProvider *v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  struct AudioSrvTelemetryProvider *v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  _DWORD *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned int wFormatTag; // ecx
  struct AudioSrvTelemetryProvider *v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  struct AudioSrvTelemetryProvider *v72; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  _DWORD *v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned int v79; // ecx
  struct AudioSrvTelemetryProvider *v80; // rax
  __int64 v81; // r8
  __int64 v82; // r9
  struct AudioSrvTelemetryProvider *v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  _DWORD *v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned int v90; // ecx
  struct AudioSrvTelemetryProvider *v91; // rax
  __int64 v92; // r8
  __int64 v93; // r9
  struct AudioSrvTelemetryProvider *v94; // rax
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // eax
  char v98; // di
  __int64 v99; // rbx
  __int64 v100; // rax
  int v101; // r13d
  unsigned __int64 v102; // r9
  __int64 v103; // rdx
  _QWORD *v104; // rax
  __int64 v105; // rcx
  int v106; // r8d
  __int64 v107; // rcx
  int v108; // edx
  GUID v109; // xmm6
  __int64 v110; // r8
  const char *v111; // r9
  int DefaultAecReferenceEndpointId; // eax
  int v113; // ecx
  int EndpointStore; // eax
  CEndpointCharacteristics *v115; // rcx
  int CustomResourceManagerService; // eax
  struct _RTL_CRITICAL_SECTION **v117; // rax
  __int64 v118; // r9
  int v119; // eax
  __int64 (__fastcall *v120)(__int64, __int64 *); // rbx
  int v121; // eax
  __int64 v122; // rbx
  __int64 (__fastcall *v123)(__int64, __int64 **); // rdi
  int v124; // eax
  _BYTE *v125; // r13
  struct EndpointCharacteristicsDescriptor **v126; // r12
  __int64 v127; // rdi
  __int64 v128; // rbx
  __int64 v129; // rax
  unsigned __int64 v130; // r9
  __int64 v131; // rdx
  struct EndpointCharacteristicsDescriptor *v132; // rax
  __int64 v133; // rcx
  bool v134; // al
  bool v135; // bl
  unsigned __int16 *v136; // rax
  int v137; // r9d
  int v138; // eax
  const struct tWAVEFORMATEX *v139; // rax
  int v140; // eax
  bool v141; // zf
  char v142; // al
  unsigned __int128 v143; // kr10_16
  __int64 v144; // rbx
  const struct tWAVEFORMATEX *v145; // rax
  __int64 v146; // rax
  _DWORD *v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v152; // r14d
  bool DoesExclusiveModeOverrideShared; // r14
  __int64 v154; // rdx
  struct EndpointCharacteristicsDescriptor *v155; // rcx
  int SaDeviceForExclusiveStream; // eax
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // rdx
  __int64 v160; // r14
  char v161; // si
  char v162; // di
  CAudioSessionManager *v163; // rbx
  int v164; // eax
  __int64 (__fastcall *v165)(struct IDeviceGraphManager *, __int64, __int64 *, bool, _QWORD); // rbx
  char v166; // al
  int v167; // eax
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // rax
  int v171; // ebx
  struct AudioSrvTelemetryProvider *v172; // rax
  _DWORD *v173; // rbx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // r14
  __int64 v177; // rbx
  __int64 (__fastcall *v178)(__int64, __int64 **); // rdi
  int v179; // eax
  __int64 v180; // rax
  int v181; // eax
  __int64 v182; // rdx
  unsigned int v183; // eax
  int v184; // eax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rcx
  __int64 v188; // rbx
  int v189; // eax
  __int64 v190; // rdx
  struct _GUID *v192; // [rsp+40h] [rbp-7F8h]
  int v193; // [rsp+40h] [rbp-7F8h]
  char v194; // [rsp+F0h] [rbp-748h] BYREF
  _BYTE v195[7]; // [rsp+F1h] [rbp-747h] BYREF
  struct CEndpointStore *v196; // [rsp+F8h] [rbp-740h] BYREF
  __int64 *v197; // [rsp+100h] [rbp-738h] BYREF
  bool v198; // [rsp+108h] [rbp-730h]
  struct tWAVEFORMATEX *v199; // [rsp+110h] [rbp-728h] BYREF
  __int64 v200; // [rsp+118h] [rbp-720h] BYREF
  struct tWAVEFORMATEX *v201; // [rsp+120h] [rbp-718h] BYREF
  struct tWAVEFORMATEX *v202; // [rsp+128h] [rbp-710h] BYREF
  __int64 v203; // [rsp+130h] [rbp-708h] BYREF
  __int64 v204; // [rsp+138h] [rbp-700h] BYREF
  _QWORD *v205; // [rsp+140h] [rbp-6F8h] BYREF
  void *v206; // [rsp+148h] [rbp-6F0h] BYREF
  struct _RTL_CRITICAL_SECTION *v207; // [rsp+150h] [rbp-6E8h] BYREF
  struct _RTL_CRITICAL_SECTION *v208; // [rsp+158h] [rbp-6E0h] BYREF
  bool v209; // [rsp+160h] [rbp-6D8h]
  struct _RTL_CRITICAL_SECTION *v210; // [rsp+168h] [rbp-6D0h] BYREF
  struct IProcessSubmixProxy *v211; // [rsp+170h] [rbp-6C8h] BYREF
  struct EndpointCharacteristicsDescriptor *v212; // [rsp+178h] [rbp-6C0h] BYREF
  __int64 v213; // [rsp+180h] [rbp-6B8h] BYREF
  __int64 *v214; // [rsp+188h] [rbp-6B0h] BYREF
  int v215; // [rsp+190h] [rbp-6A8h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 ConnectorTypeForStream; // [rsp+194h] [rbp-6A4h]
  int v217; // [rsp+198h] [rbp-6A0h] BYREF
  int v218; // [rsp+19Ch] [rbp-69Ch] BYREF
  int v219; // [rsp+1A0h] [rbp-698h] BYREF
  unsigned int v220; // [rsp+1A4h] [rbp-694h] BYREF
  int v221; // [rsp+1A8h] [rbp-690h] BYREF
  __int64 v222; // [rsp+1B0h] [rbp-688h] BYREF
  _BYTE *v223; // [rsp+1B8h] [rbp-680h]
  struct EndpointCharacteristicsDescriptor **v224; // [rsp+1C0h] [rbp-678h]
  char v225; // [rsp+1C8h] [rbp-670h]
  DWORD nSamplesPerSec; // [rsp+1D0h] [rbp-668h] BYREF
  unsigned int *v227; // [rsp+1D8h] [rbp-660h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+1E0h] [rbp-658h] BYREF
  DWORD v229; // [rsp+1E4h] [rbp-654h] BYREF
  DWORD v230; // [rsp+1E8h] [rbp-650h] BYREF
  DWORD v231; // [rsp+1ECh] [rbp-64Ch] BYREF
  DWORD v232; // [rsp+1F0h] [rbp-648h] BYREF
  int v233; // [rsp+1F4h] [rbp-644h] BYREF
  int v234; // [rsp+1F8h] [rbp-640h] BYREF
  const struct tWAVEFORMATEX **v235; // [rsp+200h] [rbp-638h] BYREF
  __int64 v236; // [rsp+208h] [rbp-630h] BYREF
  __int64 v237; // [rsp+210h] [rbp-628h]
  const WCHAR *v238; // [rsp+218h] [rbp-620h] BYREF
  struct tWAVEFORMATEX *v239; // [rsp+220h] [rbp-618h] BYREF
  struct tWAVEFORMATEX *v240; // [rsp+228h] [rbp-610h] BYREF
  struct tWAVEFORMATEX *v241; // [rsp+230h] [rbp-608h] BYREF
  const WCHAR *v242; // [rsp+238h] [rbp-600h] BYREF
  int v243[2]; // [rsp+240h] [rbp-5F8h]
  __int64 v244; // [rsp+248h] [rbp-5F0h]
  GUID *v245; // [rsp+250h] [rbp-5E8h] BYREF
  GUID *v246; // [rsp+258h] [rbp-5E0h] BYREF
  GUID *v247; // [rsp+260h] [rbp-5D8h] BYREF
  GUID *v248; // [rsp+268h] [rbp-5D0h] BYREF
  const WCHAR *v249; // [rsp+270h] [rbp-5C8h] BYREF
  struct _RTL_CRITICAL_SECTION *v250; // [rsp+278h] [rbp-5C0h] BYREF
  void *v251; // [rsp+280h] [rbp-5B8h] BYREF
  struct SaDeviceParams *v252; // [rsp+288h] [rbp-5B0h] BYREF
  char v253; // [rsp+290h] [rbp-5A8h]
  __int64 v254; // [rsp+298h] [rbp-5A0h]
  __int64 v255; // [rsp+2A0h] [rbp-598h]
  __int64 v256; // [rsp+2A8h] [rbp-590h]
  __int64 v257; // [rsp+2B0h] [rbp-588h]
  __int64 v258; // [rsp+2B8h] [rbp-580h]
  struct _GUID v259; // [rsp+2C0h] [rbp-578h] BYREF
  unsigned __int128 v260; // [rsp+2D0h] [rbp-568h] BYREF
  __int64 v261; // [rsp+2E0h] [rbp-558h]
  __int64 v262; // [rsp+2E8h] [rbp-550h] BYREF
  __int64 v263; // [rsp+2F0h] [rbp-548h] BYREF
  GUID v264; // [rsp+300h] [rbp-538h] BYREF
  __int128 v265; // [rsp+310h] [rbp-528h] BYREF
  __int64 v266; // [rsp+320h] [rbp-518h]
  __int64 *v267; // [rsp+328h] [rbp-510h] BYREF
  struct tWAVEFORMATEX *v268; // [rsp+330h] [rbp-508h] BYREF
  char v269; // [rsp+338h] [rbp-500h]
  struct tWAVEFORMATEX **v270; // [rsp+340h] [rbp-4F8h] BYREF
  struct tWAVEFORMATEX *v271; // [rsp+348h] [rbp-4F0h] BYREF
  char v272; // [rsp+350h] [rbp-4E8h]
  struct tWAVEFORMATEX **v273; // [rsp+358h] [rbp-4E0h] BYREF
  struct tWAVEFORMATEX *v274; // [rsp+360h] [rbp-4D8h] BYREF
  char v275; // [rsp+368h] [rbp-4D0h]
  struct tWAVEFORMATEX **v276; // [rsp+370h] [rbp-4C8h] BYREF
  struct tWAVEFORMATEX *v277; // [rsp+378h] [rbp-4C0h] BYREF
  char v278; // [rsp+380h] [rbp-4B8h]
  _QWORD **v279; // [rsp+388h] [rbp-4B0h] BYREF
  __int64 v280; // [rsp+390h] [rbp-4A8h] BYREF
  char v281; // [rsp+398h] [rbp-4A0h]
  const struct tWAVEFORMATEX ***v282; // [rsp+3A0h] [rbp-498h] BYREF
  __int64 v283; // [rsp+3A8h] [rbp-490h] BYREF
  char v284; // [rsp+3B0h] [rbp-488h]
  GUID v285; // [rsp+3C0h] [rbp-478h] BYREF
  GUID v286; // [rsp+3D0h] [rbp-468h] BYREF
  GUID v287; // [rsp+3E0h] [rbp-458h] BYREF
  GUID v288; // [rsp+3F0h] [rbp-448h] BYREF
  __int64 v289[2]; // [rsp+400h] [rbp-438h] BYREF
  struct _GUID v290; // [rsp+410h] [rbp-428h] BYREF
  __int64 v291[2]; // [rsp+420h] [rbp-418h] BYREF
  struct _GUID v292; // [rsp+430h] [rbp-408h] BYREF
  struct _GUID v293; // [rsp+440h] [rbp-3F8h] BYREF
  struct _GUID v294; // [rsp+450h] [rbp-3E8h] BYREF
  struct _GUID v295; // [rsp+460h] [rbp-3D8h] BYREF
  __int64 v296[2]; // [rsp+470h] [rbp-3C8h] BYREF
  struct _GUID v297; // [rsp+480h] [rbp-3B8h] BYREF
  char *v298; // [rsp+490h] [rbp-3A8h]
  struct CEndpointStore **v299; // [rsp+498h] [rbp-3A0h]
  char v300; // [rsp+4A0h] [rbp-398h]
  _BYTE v301[304]; // [rsp+4B0h] [rbp-388h] BYREF
  _BYTE v302[304]; // [rsp+5E0h] [rbp-258h] BYREF
  unsigned int v303[4]; // [rsp+710h] [rbp-128h] BYREF
  GUID v304; // [rsp+720h] [rbp-118h] BYREF
  GUID v305; // [rsp+730h] [rbp-108h] BYREF
  GUID v306; // [rsp+740h] [rbp-F8h] BYREF
  GUID v307; // [rsp+750h] [rbp-E8h] BYREF
  __int64 v308; // [rsp+760h] [rbp-D8h] BYREF
  unsigned int v309; // [rsp+768h] [rbp-D0h]
  char v310; // [rsp+76Ch] [rbp-CCh]
  __int16 v311; // [rsp+76Dh] [rbp-CBh]
  char v312; // [rsp+76Fh] [rbp-C9h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v313; // [rsp+770h] [rbp-C8h]
  struct _GUID v314; // [rsp+774h] [rbp-C4h]
  int v315; // [rsp+784h] [rbp-B4h]
  struct _GUID v316; // [rsp+790h] [rbp-A8h] BYREF
  GUID v317; // [rsp+7A0h] [rbp-98h] BYREF
  struct _GUID v318; // [rsp+7B0h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+838h] [rbp+0h]

  v220 = a4;
  v244 = a3;
  v237 = a2;
  v256 = a1;
  v212 = a12;
  v258 = a15;
  v255 = a19;
  v254 = a20;
  v257 = a21;
  v236 = a23;
  v222 = a25;
  v31 = a29;
  v211 = a29;
  *(_QWORD *)v243 = a30;
  v32 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 208LL))(a3);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v212 + 56LL))(*(_QWORD *)v212) )
  {
    v33 = 1;
  }
  else if ( (a13 & 0x20000) != 0 )
  {
    v33 = (v32 != 0) + 2;
  }
  else
  {
    v33 = 0;
  }
  LODWORD(v197) = v33;
  ConnectorTypeForStream = (unsigned int)GetConnectorTypeForStream(
                                           (CEndpointCharacteristics **)v212,
                                           a13,
                                           a14,
                                           v32,
                                           a16,
                                           v31);
  v265 = 0LL;
  v266 = 0LL;
  v285 = GUID_00000000_0000_0000_0000_000000000000;
  v286 = GUID_00000000_0000_0000_0000_000000000000;
  v287 = GUID_00000000_0000_0000_0000_000000000000;
  v264 = GUID_00000000_0000_0000_0000_000000000000;
  v288 = GUID_00000000_0000_0000_0000_000000000000;
  v34 = DeriveAudioProcessingModeConfiguration(
          v220,
          a5,
          a6,
          (CEndpointCharacteristics **)v212,
          v33,
          a14,
          ConnectorTypeForStream,
          (__int64)v211,
          0,
          1,
          (__int64)a16,
          &v285,
          &v286,
          &v287,
          &v264,
          &v288);
  v35 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v34);
    goto LABEL_256;
  }
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0LL;
  v199 = 0LL;
  v276 = &v199;
  v277 = 0LL;
  v278 = 1;
  v273 = &v201;
  v274 = 0LL;
  v275 = 1;
  v270 = &v202;
  v271 = 0LL;
  v272 = 1;
  v267 = &v200;
  v268 = 0LL;
  v269 = 1;
  v36 = v285;
  v290 = v285;
  v37 = v286;
  v297 = v286;
  v38 = v287;
  v292 = v287;
  v198 = a8 != 0;
  v35 = DeriveDeviceGraphFormatsForStream(
          (CEndpointCharacteristics **)v212,
          a8 != 0,
          ConnectorTypeForStream,
          a14,
          v220,
          (IAudioMediaType *)&v292,
          &v297,
          &v290,
          a16,
          &v268,
          &v271,
          &v274,
          &v277);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v267);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v270);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v273);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v276);
  if ( v35 < 0 )
  {
    v39 = -2005139333;
    if ( v35 == -2005139333 )
    {
LABEL_10:
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v199,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v202,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v201,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v200,
        0LL);
      v35 = v39;
      goto LABEL_256;
    }
    v40 = (unsigned int)v35;
    v41 = 1451LL;
    goto LABEL_12;
  }
  if ( a16 )
  {
    if ( a16->wFormatTag == 0xFFFE )
    {
      v54 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v54 > 4u && tlgKeywordOn((__int64)v54, 512LL) )
      {
        nSamplesPerSec = *(_DWORD *)&a16[1].nChannels;
        v249 = (const WCHAR *)&a16[1].nSamplesPerSec + 1;
        nAvgBytesPerSec = a16->nAvgBytesPerSec;
        LODWORD(v248) = a16->nSamplesPerSec;
        LOWORD(v217) = a16->nChannels;
        *(_QWORD *)&v307.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v55,
          byte_18019F7D0,
          v56,
          v57,
          (const WCHAR **)&v307,
          (__int64)&v217,
          (__int64)&v248,
          (__int64)&nAvgBytesPerSec,
          (__int64 *)&v249,
          (__int64)&nSamplesPerSec);
      }
    }
    else
    {
      v307 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v307.Data1 = a16->wFormatTag;
      v50 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v50 > 4u && tlgKeywordOn((__int64)v50, 512LL) )
      {
        v248 = &v307;
        nAvgBytesPerSec = a16->nAvgBytesPerSec;
        nSamplesPerSec = a16->nSamplesPerSec;
        LOWORD(v217) = a16->nChannels;
        v249 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v51,
          byte_18019F862,
          v52,
          v53,
          &v249,
          (__int64)&v217,
          (__int64)&nSamplesPerSec,
          (__int64)&nAvgBytesPerSec,
          (__int64 *)&v248);
      }
    }
  }
  else
  {
    v42 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v42 > 4u && tlgKeywordOn((__int64)v42, 512LL) )
    {
      v217 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v43,
        byte_18019F8E7,
        v44,
        v45,
        (__int64)&v217);
    }
  }
  v238 = (const WCHAR *)v200;
  if ( v200 )
  {
    if ( *(_WORD *)v200 == 0xFFFE )
    {
      v61 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v61 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v61 + 1), 512LL) )
      {
        v233 = *((_DWORD *)v238 + 5);
        v238 += 12;
        v234 = *(_DWORD *)(v200 + 8);
        LODWORD(v247) = *(_DWORD *)(v200 + 4);
        LOWORD(v218) = *(_WORD *)(v200 + 2);
        *(_QWORD *)&v304.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v62,
          byte_18019F667,
          v62,
          v63,
          (const WCHAR **)&v304,
          (__int64)&v218,
          (__int64)&v247,
          (__int64)&v234,
          (__int64 *)&v238,
          (__int64)&v233);
      }
    }
    else
    {
      v304 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v304.Data1 = *(unsigned __int16 *)v200;
      v58 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v58 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v58 + 1), 512LL) )
      {
        v247 = &v304;
        v234 = *(_DWORD *)(v200 + 8);
        v233 = *(_DWORD *)(v200 + 4);
        LOWORD(v218) = *(_WORD *)(v200 + 2);
        v238 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v59,
          byte_18019F6FB,
          v59,
          v60,
          &v238,
          (__int64)&v218,
          (__int64)&v233,
          (__int64)&v234,
          (__int64 *)&v247);
      }
    }
  }
  else
  {
    v46 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v46 > 4u && tlgKeywordOn((__int64)v46, 512LL) )
    {
      v218 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v47,
        byte_18019F782,
        v48,
        v49,
        (__int64)&v218);
    }
  }
  v239 = v202;
  if ( v202 )
  {
    wFormatTag = v202->wFormatTag;
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      v72 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v72 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v72 + 1), 512LL) )
      {
        v230 = *(_DWORD *)&v239[1].nChannels;
        v239 = (struct tWAVEFORMATEX *)((char *)v239 + 24);
        v232 = v202->nAvgBytesPerSec;
        LODWORD(v246) = v202->nSamplesPerSec;
        LOWORD(v219) = v202->nChannels;
        *(_QWORD *)&v305.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v73,
          byte_18019F4F5,
          v73,
          v74,
          (const WCHAR **)&v305,
          (__int64)&v219,
          (__int64)&v246,
          (__int64)&v232,
          (__int64 *)&v239,
          (__int64)&v230);
      }
    }
    else
    {
      v305 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v305.Data1 = wFormatTag;
      v69 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v69 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v69 + 1), 512LL) )
      {
        v246 = &v305;
        v232 = v202->nAvgBytesPerSec;
        v230 = v202->nSamplesPerSec;
        LOWORD(v219) = v202->nChannels;
        v239 = (struct tWAVEFORMATEX *)L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v70,
          byte_18019F58C,
          v70,
          v71,
          (const WCHAR **)&v239,
          (__int64)&v219,
          (__int64)&v230,
          (__int64)&v232,
          (__int64 *)&v246);
      }
    }
  }
  else
  {
    v64 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v64 > 4u && tlgKeywordOn((__int64)v64, 512LL) )
    {
      v219 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v65,
        byte_18019F616,
        v66,
        v67,
        (__int64)&v219);
    }
  }
  v240 = v201;
  if ( v201 )
  {
    v79 = v201->wFormatTag;
    if ( (_WORD)v79 == 0xFFFE )
    {
      v83 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v83 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v83 + 1), 512LL) )
      {
        v229 = *(_DWORD *)&v240[1].nChannels;
        v240 = (struct tWAVEFORMATEX *)((char *)v240 + 24);
        v231 = v201->nAvgBytesPerSec;
        LODWORD(v245) = v201->nSamplesPerSec;
        LOWORD(v221) = v201->nChannels;
        *(_QWORD *)&v306.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v84,
          byte_18019F386,
          v84,
          v85,
          (const WCHAR **)&v306,
          (__int64)&v221,
          (__int64)&v245,
          (__int64)&v231,
          (__int64 *)&v240,
          (__int64)&v229);
      }
    }
    else
    {
      v306 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v306.Data1 = v79;
      v80 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v80 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v80 + 1), 512LL) )
      {
        v245 = &v306;
        v231 = v201->nAvgBytesPerSec;
        v229 = v201->nSamplesPerSec;
        LOWORD(v221) = v201->nChannels;
        v240 = (struct tWAVEFORMATEX *)L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v81,
          byte_18019F41C,
          v81,
          v82,
          (const WCHAR **)&v240,
          (__int64)&v221,
          (__int64)&v229,
          (__int64)&v231,
          (__int64 *)&v245);
      }
    }
  }
  else
  {
    v75 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v75 > 4u && tlgKeywordOn((__int64)v75, 512LL) )
    {
      v221 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v76,
        byte_18019F4A5,
        v77,
        v78,
        (__int64)&v221);
    }
  }
  v241 = v199;
  if ( v199 )
  {
    v90 = v199->wFormatTag;
    if ( (_WORD)v90 == 0xFFFE )
    {
      v94 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v94 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v94 + 1), 512LL) )
      {
        LODWORD(v213) = *(_DWORD *)&v241[1].nChannels;
        v241 = (struct tWAVEFORMATEX *)((char *)v241 + 24);
        LODWORD(v214) = v199->nAvgBytesPerSec;
        LODWORD(v227) = v199->nSamplesPerSec;
        LOWORD(v215) = v199->nChannels;
        *(_QWORD *)v303 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v95,
          byte_18019F21A,
          v95,
          v96,
          (const WCHAR **)v303,
          (__int64)&v215,
          (__int64)&v227,
          (__int64)&v214,
          (__int64 *)&v241,
          (__int64)&v213);
      }
    }
    else
    {
      *(GUID *)v303 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v303[0] = v90;
      v91 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v91 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v91 + 1), 512LL) )
      {
        v227 = v303;
        LODWORD(v214) = v199->nAvgBytesPerSec;
        LODWORD(v213) = v199->nSamplesPerSec;
        LOWORD(v215) = v199->nChannels;
        v241 = (struct tWAVEFORMATEX *)L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v92,
          byte_18019F2AF,
          v92,
          v93,
          (const WCHAR **)&v241,
          (__int64)&v215,
          (__int64)&v213,
          (__int64)&v214,
          (__int64 *)&v227);
      }
    }
  }
  else
  {
    v86 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v86 > 4u && tlgKeywordOn((__int64)v86, 512LL) )
    {
      v215 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v87,
        byte_18019F337,
        v88,
        v89,
        (__int64)&v215);
    }
  }
  v263 = 0LL;
  v262 = 0LL;
  v293 = v37;
  v294 = v38;
  v295 = v36;
  v97 = DerivePeriodicityForStream(
          v212,
          a16,
          (struct IAudioStreamInfo *)a3,
          a13,
          a14,
          ConnectorTypeForStream,
          v199,
          &v295,
          &v294,
          &v293,
          a7 != 0,
          v198,
          a17,
          a18,
          v211,
          &a18,
          &v262,
          &v263);
  v35 = v97;
  if ( v97 < 0 )
  {
    v40 = (unsigned int)v97;
    v41 = 1465LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v40);
LABEL_13:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v199,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v202,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v201,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v200,
      0LL);
    goto LABEL_256;
  }
  v98 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v237 + 368LL))(v237);
  v209 = a18 < v262;
  v198 = 0;
  v205 = 0LL;
  v203 = 0LL;
  v279 = &v205;
  v280 = 0LL;
  v281 = 1;
  v99 = v263;
  v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 80LL))(a3);
  *(GUID *)v296 = v288;
  *(struct _GUID *)v289 = v37;
  *(struct _GUID *)v291 = v36;
  v101 = (int)v197;
  v35 = InitializeStreamAndModeDescriptors(
          v212,
          ConnectorTypeForStream,
          (__int64)v291,
          (__int64)v289,
          (__int64)v296,
          a22,
          (__int64)a16,
          v200,
          a17,
          a18,
          v236,
          v255,
          v254,
          v257,
          v222,
          v100,
          v98,
          a9 != 0,
          a10 != 0,
          v99,
          a11,
          a26,
          a27,
          a28,
          (__int64)&v280,
          (__int64)&v203);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v279);
  if ( v35 < 0 )
  {
    v102 = (unsigned int)v35;
    v103 = 1478LL;
LABEL_73:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v103,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v102);
LABEL_74:
    std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)&v203);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v205,
      0LL);
    goto LABEL_13;
  }
  v104 = (_QWORD *)v203;
  if ( v203 && (v105 = *(_QWORD *)(v203 + 8)) != 0 )
    v106 = *(_DWORD *)(v105 + 52);
  else
    v106 = 0;
  if ( v203 && (v107 = *(_QWORD *)(v203 + 8)) != 0 )
    v108 = *(_DWORD *)(v107 + 56);
  else
    v108 = 0;
  if ( v106 && v108 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)(a3 + 616),
      0LL);
    v109 = v264;
    v316 = v264;
    DefaultAecReferenceEndpointId = GetDefaultAecReferenceEndpointId(&v316, (unsigned __int16 **)(a3 + 616), v110, v111);
    v35 = DefaultAecReferenceEndpointId;
    if ( DefaultAecReferenceEndpointId < 0 )
    {
      v102 = (unsigned int)DefaultAecReferenceEndpointId;
      v103 = 1487LL;
      goto LABEL_73;
    }
    v104 = (_QWORD *)v203;
  }
  else
  {
    v109 = v264;
  }
  v113 = 1;
  if ( v104 && *v104 )
    v113 = 3;
  *(_DWORD *)(a3 + 384) = v113;
  v196 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(
                    *(CEndpointStoreCache **)v212,
                    *(const unsigned __int16 **)(*(_QWORD *)v212 + 48LL),
                    &v196);
  v35 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_94:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v196);
    goto LABEL_74;
  }
  (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **, struct CEndpointStore *))(**(_QWORD **)(v256 + 48)
                                                                                           + 80LL))(
    *(_QWORD *)(v256 + 48),
    &v207,
    v196);
  v206 = 0LL;
  v115 = *(CEndpointCharacteristics **)v212;
  v206 = 0LL;
  CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                   v115,
                                   &GUID_4d3814ae_3db5_4fb3_819c_1493075ce6e3,
                                   &v206);
  v35 = CustomResourceManagerService;
  if ( CustomResourceManagerService < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5EC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)CustomResourceManagerService);
LABEL_97:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v206);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v207);
    goto LABEL_94;
  }
  v208 = 0LL;
  if ( v206 )
  {
    v117 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(void *, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v206 + 96LL))(
                                              v206,
                                              &v250);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::operator=(
      &v208,
      v117);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v250);
  }
  (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v196 + 13) + 128LL))(
    *((_QWORD *)v196 + 13),
    &v210);
  v118 = *((_QWORD *)v196 + 13);
  v317 = v109;
  v119 = BuildDeviceGraphForStream(
           (__int64)v212,
           a3,
           v237,
           v118,
           v220,
           a13,
           a14,
           ConnectorTypeForStream,
           (__int64)v192,
           &v317,
           (__int64)v205,
           v203,
           v202,
           v101,
           v258,
           a24,
           a14 == AUDCLNT_SHAREMODE_EXCLUSIVE,
           (__int64)v211,
           *(__int64 *)v243);
  v35 = v119;
  if ( v119 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v119);
LABEL_102:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v210);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v208);
    goto LABEL_97;
  }
  v204 = 0LL;
  v120 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 120LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v204);
  v121 = v120(a3, &v204);
  v35 = v121;
  if ( v121 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v121);
LABEL_105:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v204);
    goto LABEL_102;
  }
  v197 = 0LL;
  v122 = v204;
  v123 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v204 + 224LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v197);
  v124 = v123(v122, &v197);
  v35 = v124;
  if ( v124 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x602,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v124);
LABEL_108:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v197);
    goto LABEL_105;
  }
  v195[0] = 0;
  v125 = v195;
  v223 = v195;
  v126 = &v212;
  v224 = &v212;
  v225 = 1;
  v127 = v244;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v244 + 144LL))(v244)
    || v209 && g_DisableSpatialOnLowLatency )
  {
    AudioPolicyManagerExtension_OnPreMatchFormatStateChange(*(_QWORD *)(*(_QWORD *)v212 + 48LL));
    v195[0] = 1;
    v128 = (__int64)v197;
    if ( !v197 )
      goto LABEL_139;
    v235 = 0LL;
    v129 = *v197;
    v282 = &v235;
    v283 = 0LL;
    v284 = 1;
    v35 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v129 + 120))(v197, &v283);
    wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v282);
    if ( v35 < 0 )
    {
      v130 = (unsigned int)v35;
      v131 = 1566LL;
LABEL_115:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v131,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v130);
LABEL_116:
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v235);
      if ( !v195[0] )
        goto LABEL_108;
      v132 = v212;
      goto LABEL_118;
    }
    v134 = 0;
    v194 = 0;
    v135 = 0;
    if ( g_PerformStrictConnectorMatchOnMatchFormat )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v127 + 144LL))(v127) )
      {
        v134 = (unsigned int)CompareWaveFormat(v235[2], v199) == 0;
        v194 = v134;
      }
      else
      {
        v134 = 0;
      }
    }
    if ( v209 && g_DisableSpatialOnLowLatency && !v134 )
    {
      v220 = 0;
      v236 = 0LL;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v236);
      v136 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64 *))(*v197 + 24))(v197);
      v138 = Create_SpatialAudioDevicePropertyReader(v136, 0LL, &v236, v137);
      v35 = v138;
      if ( v138 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x630,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v138);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v236);
        goto LABEL_116;
      }
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v236 + 112LL))(v236, &v220);
      v135 = v220 != 0;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v236);
    }
    v139 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v204 + 144LL))(v204);
    if ( !(unsigned int)CompareWaveFormat(v235[3], v139) || v194 || v135 )
    {
      v140 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphManager
                                                                                         + 40LL))(
               g_DeviceGraphManager,
               v204,
               v197);
      v35 = v140;
      if ( v140 < 0 )
      {
        v130 = (unsigned int)v140;
        v131 = 1600LL;
        goto LABEL_115;
      }
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v197);
    }
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v235);
  }
  v128 = (__int64)v197;
  if ( !v197 )
  {
LABEL_139:
    if ( v211 )
      goto LABEL_211;
    if ( !g_DisableSpatialOnLowLatency || (v141 = IsCompressedSpatialFormat(v199) == 0, v142 = 1, v141) )
      v142 = 0;
    if ( (a13 & 0x20000) != 0 && g_UseSoftwareLoopbackOnMatchFormat || v142 )
    {
      v260 = 0LL;
      v261 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, unsigned __int128 *))(**((_QWORD **)v196 + 13) + 96LL))(
             *((_QWORD *)v196 + 13),
             &v260) >= 0 )
      {
        v143 = v260;
        *(_QWORD *)&v259.Data1 = *((_QWORD *)&v260 + 1);
        while ( 1 )
        {
          v211 = (struct IProcessSubmixProxy *)v143;
          if ( (_QWORD)v143 == *((_QWORD *)&v143 + 1) )
            break;
          v222 = *(_QWORD *)v143;
          v144 = v222;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v222);
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v144 + 168LL))(v144) )
          {
            v145 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 48LL))(v144);
            if ( !(unsigned int)ValidateUncompressedWaveFormatEx(v145) )
            {
              v242 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v204 + 128LL))(v204);
              v146 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL))(v144);
              if ( v146 <= (__int64)v242 )
              {
                wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=((__int64 *)&v197, &v222);
                v147 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
                if ( *v147 > 4u && tlgKeywordOn((__int64)v147, 512LL) )
                {
                  v242 = *(const WCHAR **)(*(_QWORD *)v212 + 48LL);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    v148,
                    byte_18019F1DD,
                    v149,
                    v150,
                    &v242);
                }
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v222);
                break;
              }
            }
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v222);
          v143 = __PAIR128__(*(unsigned __int64 *)&v259.Data1, (unsigned __int64)v211 + 8);
        }
      }
      if ( (_QWORD)v260 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v260,
          *((__int64 **)&v260 + 1));
        std::_Deallocate<16,0>((char *)v260, (const struct std::nothrow_t *)((v261 - v260) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      v128 = (__int64)v197;
    }
    if ( v128 )
      goto LABEL_199;
    v211 = 0LL;
    v251 = &v211;
    v252 = 0LL;
    v253 = 1;
    v151 = v205[4];
    v259 = v37;
    v318 = v36;
    v152 = ConnectorTypeForStream;
    v35 = DeriveSaDeviceParametersForStream(
            (CEndpointCharacteristics ***)v212,
            a14,
            ConnectorTypeForStream,
            &v318,
            &v259,
            v199,
            v201,
            v151,
            &v252);
    wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v251);
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v35);
LABEL_162:
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v211);
LABEL_163:
      if ( !*v125 )
        goto LABEL_108;
      v132 = *v126;
LABEL_118:
      v133 = *(_QWORD *)v132;
LABEL_119:
      AudioPolicyManagerExtension_OnPreMatchFormatStateChange(*(_QWORD *)(v133 + 48));
      goto LABEL_108;
    }
    v198 = 1;
    v311 = 0;
    v312 = 0;
    v315 = 0;
    v310 = 1;
    v309 = a24;
    v308 = 0LL;
    v314 = v36;
    v313 = v152;
    DoesExclusiveModeOverrideShared = CEndpointCharacteristics::DoesExclusiveModeOverrideShared(*(CEndpointCharacteristics **)v212);
    v194 = 0;
    v298 = &v194;
    v299 = &v196;
    v300 = 1;
    if ( DoesExclusiveModeOverrideShared )
    {
      if ( a14 == AUDCLNT_SHAREMODE_EXCLUSIVE )
      {
        if ( !_InterlockedCompareExchange(
                (volatile signed __int32 *)(*((_QWORD *)v196 + 12) + 276LL),
                GetCurrentThreadId(),
                0) )
        {
          v194 = 1;
          v126 = v224;
          v125 = v223;
          goto LABEL_184;
        }
        v154 = 1691LL;
LABEL_172:
        v35 = -2005139364;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v154,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x887C005CLL);
        if ( v194 )
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v196 + 12) + 276LL), 0);
        std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v211);
        if ( !*v223 )
          goto LABEL_108;
        v155 = *v224;
LABEL_176:
        v133 = *(_QWORD *)v155;
        goto LABEL_119;
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v196 + 12) + 276LL), 0, 0) )
      {
        v154 = 1697LL;
        goto LABEL_172;
      }
      v126 = v224;
      v125 = v223;
    }
    else if ( a14 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    {
LABEL_184:
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v197);
      LOBYTE(v193) = DoesExclusiveModeOverrideShared;
      SaDeviceForExclusiveStream = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                     *((_QWORD *)v196 + 12),
                                     v212,
                                     v206,
                                     v211,
                                     a13,
                                     1,
                                     &v308,
                                     &v265,
                                     v193,
                                     v237,
                                     *((_QWORD *)v196 + 12),
                                     &v197);
      v35 = SaDeviceForExclusiveStream;
      if ( SaDeviceForExclusiveStream < 0 )
      {
        if ( (unsigned int)(SaDeviceForExclusiveStream + 2005139335) <= 1 )
          goto LABEL_188;
        v159 = 1706LL;
        goto LABEL_187;
      }
      goto LABEL_194;
    }
    if ( (a13 & 1) != 0 )
    {
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v197);
      SaDeviceForExclusiveStream = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                     *((_QWORD *)v196 + 12),
                                     v212,
                                     v206,
                                     v211,
                                     a13,
                                     a14,
                                     &v308,
                                     &v265,
                                     v237,
                                     *((_QWORD *)v196 + 12),
                                     v255,
                                     v254,
                                     &v197);
      v35 = SaDeviceForExclusiveStream;
      if ( SaDeviceForExclusiveStream < 0 )
      {
        if ( SaDeviceForExclusiveStream != -2005139370 && SaDeviceForExclusiveStream != -2005139334 )
        {
          v159 = 1713LL;
LABEL_187:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v159,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)SaDeviceForExclusiveStream);
          goto LABEL_188;
        }
        goto LABEL_188;
      }
    }
    else
    {
      v160 = v256;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v197);
      v161 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v127 + 144LL))(v127);
      v162 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v127 + 136LL))(v127);
      v163 = (CAudioSessionManager *)*((_QWORD *)v196 + 12);
      v164 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v237 + 96LL))(v237);
      SaDeviceForExclusiveStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                     v160 - 8,
                                     (__int64)v212,
                                     (__int64)v206,
                                     (__int64)v211,
                                     a13,
                                     a14,
                                     (__int64)&v308,
                                     (__int64)&v265,
                                     v164 != 0,
                                     v163,
                                     v162,
                                     v161,
                                     (__int64)&v197);
      v35 = SaDeviceForExclusiveStream;
      if ( SaDeviceForExclusiveStream < 0 )
      {
        if ( (unsigned int)(SaDeviceForExclusiveStream + 2005139335) > 1 )
        {
          v159 = 1721LL;
          goto LABEL_187;
        }
LABEL_188:
        if ( v194 )
        {
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v196 + 12) + 276LL), 0);
          v126 = v224;
          v125 = v223;
        }
        goto LABEL_162;
      }
      v127 = v244;
    }
LABEL_194:
    if ( v194 )
    {
      v157 = *((_QWORD *)v196 + 12);
      _InterlockedExchange((volatile __int32 *)(v157 + 276), 0);
      v126 = v224;
      v125 = v223;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v157,
        (__int64)&AudioResourceManager_SaDevice_Created,
        v158,
        1,
        (__int64)&v318);
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v211);
LABEL_199:
    v165 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64 *, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
    v166 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v204 + 240LL))(v204);
    v167 = v165(g_DeviceGraphManager, v204, v197, v166 == 0, *(_QWORD *)v243);
    v35 = v167;
    if ( v167 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v167);
LABEL_201:
      if ( !*v125 )
        goto LABEL_108;
      v155 = *v126;
      goto LABEL_176;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v168,
        (__int64)&AudioResourceManager_SaDevice_Connected,
        v169,
        1,
        (__int64)&v317);
    goto LABEL_205;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v127 - 8) + 56LL))(v127 - 8);
LABEL_205:
  if ( v197 )
  {
    v222 = 0LL;
    v170 = *v197;
    v251 = &v222;
    v252 = 0LL;
    v253 = 1;
    v171 = (*(__int64 (__fastcall **)(__int64 *, struct SaDeviceParams **))(v170 + 120))(v197, &v252);
    wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v251);
    if ( v171 >= 0 )
    {
      v172 = AudioSrvTelemetryProvider::Instance();
      v173 = (_DWORD *)*((_QWORD *)v172 + 1);
      if ( *v173 > 4u && tlgKeywordOn(*((_QWORD *)v172 + 1), 0x400000000000LL) )
      {
        *(_QWORD *)&v259.Data1 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v127 + 88LL))(
                                   v127,
                                   &v316);
        v242 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v127 + 80LL))(v127);
        LODWORD(v227) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v212 + 56LL))(*(_QWORD *)v212);
        v250 = (struct _RTL_CRITICAL_SECTION *)(v222 + 80);
        *(_QWORD *)v303 = v257;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
          (__int64)v173,
          byte_18019F188,
          v174,
          v175,
          (__int64 *)v303,
          (__int64 *)&v250,
          (__int64)&v227,
          (__int64)&v242,
          (__int64 *)&v259);
      }
    }
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v222);
  }
LABEL_211:
  v176 = *(_QWORD *)v243;
  if ( (a13 & 0x400000) != 0 || *(_QWORD *)v243 && !*(_DWORD *)(*(_QWORD *)v243 + 960LL) && (a13 & 1) != 0 )
  {
    v214 = 0LL;
    v177 = v204;
    v178 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v204 + 224LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v214);
    v179 = v178(v177, &v214);
    v35 = v179;
    if ( v179 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6EE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v179);
LABEL_217:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v214);
      goto LABEL_163;
    }
    if ( v214 )
    {
      v213 = 0LL;
      v180 = *v214;
      v213 = 0LL;
      v181 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v180 + 56))(v214, &v213);
      v35 = v181;
      if ( v181 < 0 )
      {
        v182 = 1778LL;
LABEL_221:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v182,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v181);
LABEL_222:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v213);
        goto LABEL_217;
      }
      v183 = RpcImpersonateClient(0LL);
      if ( v183 )
      {
        v35 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x6F7,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)v183);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v213);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v214);
        goto LABEL_201;
      }
      BYTE1(v215) = 1;
      memset_0(v302, 0, 0x128uLL);
      memset_0(v301, 0, 0x128uLL);
      v184 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)v213 + 32LL))(
               v213,
               (unsigned int)a22,
               v302,
               v301);
      v35 = v184;
      if ( v184 < 0 )
      {
        v185 = 1787LL;
LABEL_227:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v185,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v184);
        RpcRevertToSelf();
        goto LABEL_222;
      }
      v186 = *(_QWORD *)(v176 + 48);
      *(_QWORD *)(v176 + 48) = 0LL;
      if ( v186 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v186 + 16LL))(v186);
      v184 = SystemAudioStream::move_from_blob(
               (struct CP_EVENT_METADATA_BLOB *)v302,
               (struct ICrossProcessEvent **)(v176 + 48),
               (struct CP_EVENT_METADATA_BLOB *)(v176 + 56));
      v35 = v184;
      if ( v184 < 0 )
      {
        v185 = 1789LL;
        goto LABEL_227;
      }
      v187 = *(_QWORD *)(v176 + 352);
      *(_QWORD *)(v176 + 352) = 0LL;
      if ( v187 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v187 + 16LL))(v187);
      v184 = SystemAudioStream::move_from_blob(
               (struct CP_EVENT_METADATA_BLOB *)v301,
               (struct ICrossProcessEvent **)(v176 + 352),
               (struct CP_EVENT_METADATA_BLOB *)(v176 + 360));
      v35 = v184;
      if ( v184 < 0 )
      {
        v185 = 1790LL;
        goto LABEL_227;
      }
      RpcRevertToSelf();
      if ( ConnectorTypeForStream == eOffloadConnector )
      {
        v181 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v213 + 40LL))(
                 v213,
                 v176 + 1276,
                 v176 + 1280);
        v35 = v181;
        if ( v181 < 0 )
        {
          v182 = 1798LL;
          goto LABEL_221;
        }
        *(_DWORD *)(v176 + 1272) = 1;
        v181 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v258 + 32LL))(v258, v213);
        v35 = v181;
        if ( v181 < 0 )
        {
          v182 = 1800LL;
          goto LABEL_221;
        }
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v213);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v214);
  }
  v188 = v244;
  if ( g_UseSoftwareLoopbackOnMatchFormat )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v244 + 144LL))(v244) )
    {
      v189 = CAudioSessionManager::DisconnectAllStreamsOfType(*((_QWORD *)v196 + 12));
      v39 = v189;
      if ( v189 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x710,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v189);
        if ( *v125 )
          AudioPolicyManagerExtension_OnPreMatchFormatStateChange(*(_QWORD *)(*(_QWORD *)*v126 + 48LL));
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v197);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v204);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v210);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v208);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v206);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v207);
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v196);
        std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)&v203);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v205,
          0LL);
        goto LABEL_10;
      }
    }
  }
  if ( v198 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v188 + 144LL))(v188) )
  {
    LOBYTE(v190) = 1;
    AudioPolicyManagerExtension_OnPostMatchFormatStateChange(*(_QWORD *)(*(_QWORD *)v212 + 48LL), v190);
    v225 = 0;
  }
  if ( v225 && *v125 )
    AudioPolicyManagerExtension_OnPreMatchFormatStateChange(*(_QWORD *)(*(_QWORD *)*v126 + 48LL));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v197);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v204);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v210);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v208);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v206);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v207);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v196);
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((MODE_PARAMS **)&v203);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v205,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v199,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v202,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v201,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v200,
    0LL);
  v35 = 0;
LABEL_256:
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v265);
  return (unsigned int)v35;
}
