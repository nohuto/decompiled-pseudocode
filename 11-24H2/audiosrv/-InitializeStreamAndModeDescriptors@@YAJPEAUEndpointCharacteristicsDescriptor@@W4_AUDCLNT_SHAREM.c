/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BD114
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??$?4U?$default_delete@UMODE_PARAMS@@@std@@$0A@@?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001A08C (--$-4U-$default_delete@UMODE_PARAMS@@@std@@$0A@@-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMO.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18001A0EC (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAA@XZ @ 0x18001A144 (--1-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@.c)
 *     ??$?4U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001A168 (--$-4U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@-$unique_ptr@UAUDIO_DEVICE_MODE.c)
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x18002AC74 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002E41C (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002FF38 (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002FFD4 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x1800324E8 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180033CA0 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18003AFEC (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x180049450 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$try_copy@UIApoAcousticEchoCancellation@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAcousticEchoCancellation@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18006AFA8 (--$try_copy@UIApoAcousticEchoCancellation@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode.c)
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18006BE54 (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ??$try_copy@UIApoAuxiliaryInputConfiguration@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18006D2CC (--$try_copy@UIApoAuxiliaryInputConfiguration@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returnc.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A07F8 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800A7618 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ??$try_copy@UIApoAcousticEchoCancellation2@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAcousticEchoCancellation2@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1800B6348 (--$try_copy@UIApoAcousticEchoCancellation2@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returncod.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DisableModePipeForOffloadPins@@@details@wil@@QEAA_NXZ @ 0x1800C00FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DisableModePipeForOfflo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=27
__int64 __fastcall InitializeStreamAndModeDescriptors(
        EffectPack **this,
        int a2,
        unsigned int a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        _QWORD *a6,
        IID *a7,
        _OWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        IID *a15,
        __int64 a16,
        GUID *a17,
        __int64 a18,
        __int64 a19,
        char a20,
        char a21,
        char a22,
        __int64 a23,
        __int64 a24,
        int a25,
        __int64 a26,
        int a27,
        _QWORD *a28,
        __int64 *a29)
{
  IID *v31; // r12
  char *v32; // rsi
  EffectPack *v33; // rbx
  int v34; // edi
  unsigned int ModeEffect; // edi
  __int64 v36; // rdx
  void *v37; // rax
  int v38; // ebx
  unsigned __int64 v39; // r9
  int v40; // eax
  unsigned int v41; // edx
  int v42; // eax
  EffectPack *v43; // rcx
  int StreamEffect; // eax
  __int64 v45; // rdx
  void **v46; // rcx
  __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // rdx
  unsigned int v50; // edi
  void *v51; // rax
  int v52; // eax
  SIZE_T v53; // rbx
  void *v54; // rax
  int v55; // edx
  unsigned int v56; // ecx
  GUID v57; // xmm0
  SIZE_T v58; // rbx
  void *v59; // rax
  int v60; // r12d
  int v61; // ebx
  unsigned int v62; // ecx
  int v63; // eax
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // edi
  SIZE_T v68; // rbx
  void *v69; // rax
  int v70; // edx
  unsigned int v71; // ecx
  void *v72; // rax
  GUID *v73; // rax
  __int128 v74; // xmm2
  __int128 v75; // xmm3
  __int64 v76; // xmm0_8
  int ContainerProperty; // eax
  __int64 v79; // rcx
  __int64 v80; // rdx
  int v81; // eax
  IID *v82; // r12
  __int64 v83; // rdx
  __int64 v84; // rax
  char CanProcessingModeBeParameterized; // r15
  unsigned int v86; // r14d
  __int64 v87; // rdi
  struct ICompositeSystemEffect *v88; // rax
  struct ICompositeSystemEffect *v89; // rbx
  int v90; // edx
  unsigned int v91; // ecx
  BOOL v92; // eax
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rdx
  MODE_PARAMS *v96; // rax
  struct IAudioModeEffectsWatcher **v97; // r9
  MODE_PARAMS *v98; // rbx
  int Watcher; // eax
  char v101; // r15
  unsigned int v102; // r14d
  __int64 v103; // rdi
  struct ICompositeSystemEffect *v104; // rax
  struct ICompositeSystemEffect *v105; // rbx
  int v106; // edx
  unsigned int v107; // ecx
  BOOL v108; // eax
  int v109; // eax
  __int64 v110; // rdx
  MODE_PARAMS *v111; // rax
  struct IAudioModeEffectsWatcher **v112; // r9
  MODE_PARAMS *v113; // rbx
  int v114; // eax
  struct ICompositeSystemEffect *v115; // [rsp+40h] [rbp-C0h] BYREF
  int v116; // [rsp+48h] [rbp-B8h] BYREF
  struct ICompositeSystemEffect *v117; // [rsp+50h] [rbp-B0h] BYREF
  int v118; // [rsp+58h] [rbp-A8h] BYREF
  struct IAudioProcessingObject *v119; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v120; // [rsp+68h] [rbp-98h] BYREF
  _OWORD *v121; // [rsp+70h] [rbp-90h] BYREF
  _OWORD *v122; // [rsp+78h] [rbp-88h] BYREF
  void *v123; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v124; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v125; // [rsp+8Ch] [rbp-74h] BYREF
  IID *v126; // [rsp+90h] [rbp-70h] BYREF
  _OWORD *v127; // [rsp+98h] [rbp-68h] BYREF
  IID rclsid; // [rsp+A0h] [rbp-60h] BYREF
  char v129; // [rsp+B0h] [rbp-50h]
  __int64 v130; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v131; // [rsp+C8h] [rbp-38h] BYREF
  MODE_PARAMS *v132[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _GUID v133; // [rsp+E0h] [rbp-20h] BYREF
  char v134; // [rsp+F0h] [rbp-10h]
  IID v135; // [rsp+100h] [rbp+0h] BYREF
  __int64 v136; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v137; // [rsp+118h] [rbp+18h]
  __int64 *v138; // [rsp+120h] [rbp+20h]
  CLSID pClsid; // [rsp+130h] [rbp+30h] BYREF
  char v140; // [rsp+140h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v116 = a4;
  v118 = a2;
  v126 = a7;
  v31 = a15;
  *(_QWORD *)&rclsid.Data1 = a15;
  v137 = a28;
  v138 = a29;
  v136 = 0LL;
  v32 = 0LL;
  v123 = 0LL;
  v132[0] = 0LL;
  v33 = *this;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v136);
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v33 + 5, &v136);
  if ( !v137 )
  {
    v38 = v116;
    goto LABEL_113;
  }
  if ( (a3 & 0x800000) == 0 )
  {
    v40 = v118;
    if ( !v118 )
    {
      if ( a5 == eHostProcessConnector || (unsigned int)(a5 - 2) <= 2 )
      {
        v122 = 0LL;
        v41 = 0;
        v124 = 0;
        pClsid = 0LL;
        if ( ((a5 - 2) & 0xFFFFFFFD) != 0 )
        {
          v115 = 0LL;
          v42 = EffectPack::EndpointConnectorSupportsProcessingModes(this[1], (unsigned int)a5);
          v43 = this[1];
          if ( v42 )
          {
            v115 = 0LL;
            v133 = *a7;
            StreamEffect = EffectPack::GetStreamEffect((unsigned __int64)v43, &v133, 0, a5, &v115, 0LL, 0LL);
            ModeEffect = StreamEffect;
            if ( StreamEffect < 0 )
            {
              v45 = 308LL;
LABEL_17:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v45,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)StreamEffect);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v115);
LABEL_18:
              v46 = (void **)&v122;
LABEL_19:
              wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                v46,
                0LL);
              goto LABEL_159;
            }
          }
          else
          {
            v115 = 0LL;
            StreamEffect = EffectPack::GetLfx(v43, a5, &v115, 0LL);
            ModeEffect = StreamEffect;
            if ( StreamEffect < 0 )
            {
              v45 = 313LL;
              goto LABEL_17;
            }
          }
          if ( v115 )
          {
            v47 = *(_QWORD *)v115;
            *(_QWORD *)&v133.Data1 = &v122;
            *(_QWORD *)v133.Data4 = 0LL;
            v134 = 1;
            (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, unsigned __int8 *))(v47 + 32))(
              v115,
              &v124,
              v133.Data4);
            wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v133);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v115);
          v41 = v124;
        }
        v48 = v116;
        if ( v116 )
        {
          if ( v116 != 1 )
          {
            if ( (unsigned int)(v116 - 2) >= 2 )
            {
              ModeEffect = -2147024809;
              v49 = 443LL;
              goto LABEL_68;
            }
            v50 = 3;
            v51 = CoTaskMemAlloc(0x170uLL);
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              &v123,
              v51);
            v32 = (char *)v123;
            if ( v123 )
            {
              memset_0(v123, 0, 0x170uLL);
              v52 = 1;
              if ( ((a5 - 2) & 0xFFFFFFFD) != 0 )
                v52 = v48;
              *(_DWORD *)v32 = v52;
              *((_DWORD *)v32 + 34) = a3;
              *((_DWORD *)v32 + 79) = 3;
              *((GUID *)v32 + 20) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
              *((GUID *)v32 + 21) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
              *((GUID *)v32 + 22) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
              *((_DWORD *)v32 + 38) = 0;
              goto LABEL_62;
            }
            v49 = 427LL;
            goto LABEL_67;
          }
          v50 = v41 + 2;
          v53 = 16 * (v41 + 2 + 20LL);
          v54 = CoTaskMemAlloc(v53);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v123,
            v54);
          v32 = (char *)v123;
          if ( v123 )
          {
            memset_0(v123, 0, v53);
            *(_DWORD *)v32 = 1;
            *((_DWORD *)v32 + 34) = a3;
            *((_DWORD *)v32 + 38) = 0;
            *((_DWORD *)v32 + 79) = 0;
            *((_QWORD *)v32 + 32) = a23;
            *((_QWORD *)v32 + 33) = a24;
            if ( a22 )
              *((_QWORD *)v32 + 31) = a19;
            v55 = 0;
            if ( v124 )
            {
              while ( 1 )
              {
                v56 = *((_DWORD *)v32 + 79);
                if ( v56 > 0x1F )
                  break;
                *((_DWORD *)v32 + 38) |= 1 << v56;
                *(_OWORD *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = v122[v55];
                if ( ++v55 >= v124 )
                  goto LABEL_40;
              }
              ModeEffect = -2147418113;
              v49 = 407LL;
              goto LABEL_68;
            }
LABEL_40:
            *(GUID *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
            v57 = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
LABEL_61:
            *(GUID *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = v57;
LABEL_62:
            *((_DWORD *)v32 + 1) = a3 >> 31;
            if ( *((_DWORD *)v32 + 79) > v50 )
            {
              ModeEffect = -2147418113;
              v49 = 447LL;
              goto LABEL_68;
            }
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              (void **)&v122,
              0LL);
            v38 = v116;
            goto LABEL_90;
          }
          v49 = 392LL;
        }
        else
        {
          v50 = v41 + 4;
          v125 = v41 + 4;
          v58 = 16 * (v41 + 4 + 20LL);
          v59 = CoTaskMemAlloc(v58);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v123,
            v59);
          v32 = (char *)v123;
          if ( v123 )
          {
            memset_0(v123, 0, v58);
            *(_DWORD *)v32 = 0;
            *((_DWORD *)v32 + 34) = a3;
            *((_DWORD *)v32 + 79) = 0;
            *((_DWORD *)v32 + 38) = 0;
            if ( a21 )
            {
              *((_DWORD *)v32 + 38) = 1;
              *(GUID *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
            }
            else
            {
              v60 = 0;
              if ( v124 )
              {
                while ( 1 )
                {
                  if ( *(_QWORD *)&v122[v60] != *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1
                    || *((_QWORD *)&v122[v60] + 1) != *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4
                    || !IsGetDefaultSpatialRenderingModePresent()
                    || RpcImpersonateClient(0LL) < 0
                    || (v61 = IsVirtualSurroundAllowedForProcess(a9), RpcRevertToSelf(), v61) )
                  {
                    v62 = *((_DWORD *)v32 + 79);
                    if ( v62 > 0x1F )
                    {
                      ModeEffect = -2147418113;
                      v49 = 361LL;
                      goto LABEL_68;
                    }
                    *((_DWORD *)v32 + 38) |= 1 << v62;
                    *(_OWORD *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = v122[v60];
                  }
                  if ( ++v60 >= v124 )
                  {
                    v50 = v125;
                    break;
                  }
                }
              }
              v31 = *(IID **)&rclsid.Data1;
            }
            *(GUID *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
            *(GUID *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
            *(GUID *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
            if ( a21 || !a20 || CoGetPSClsid(&GUID_5849e670_4969_44de_8904_75ed892b627e, &pClsid) < 0 )
              goto LABEL_62;
            v57 = GUID_e3eff23b_5360_40a1_8e7b_506b6283b5d4;
            goto LABEL_61;
          }
          v49 = 327LL;
        }
LABEL_67:
        ModeEffect = -2147024882;
LABEL_68:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v49,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)ModeEffect);
        goto LABEL_18;
      }
      v40 = v118;
    }
    v127 = 0LL;
    v125 = 0;
    if ( a5 != eOffloadConnector || v40 )
    {
      v72 = CoTaskMemAlloc(0x150uLL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v123,
        v72);
      v32 = (char *)v123;
      if ( !v123 )
      {
        ModeEffect = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E9,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_75;
      }
      memset_0(v123, 0, 0x150uLL);
      v38 = v116;
      *(_DWORD *)v32 = v116;
      *((_DWORD *)v32 + 34) = a3;
      *((_DWORD *)v32 + 79) = 0;
      *((_DWORD *)v32 + 1) = 0;
    }
    else
    {
      v117 = 0LL;
      pClsid = *a7;
      v63 = EffectPack::GetStreamEffect((unsigned __int64)this[1], &pClsid, 0, a5, &v117, 0LL, 0LL);
      ModeEffect = v63;
      if ( v63 < 0 )
      {
        v64 = (unsigned int)v63;
        v65 = 456LL;
LABEL_74:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v65,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v64);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v117);
LABEL_75:
        v46 = (void **)&v127;
        goto LABEL_19;
      }
      if ( v117 )
      {
        v66 = *(_QWORD *)v117;
        *(_QWORD *)&pClsid.Data1 = &v127;
        *(_QWORD *)pClsid.Data4 = 0LL;
        v140 = 1;
        (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, unsigned __int8 *))(v66 + 32))(
          v117,
          &v125,
          pClsid.Data4);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&pClsid);
      }
      v67 = v125;
      v68 = 16 * (v125 + 20LL);
      v69 = CoTaskMemAlloc(v68);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v123,
        v69);
      v32 = (char *)v123;
      if ( !v123 )
      {
        ModeEffect = -2147024882;
        v64 = 2147942414LL;
        v65 = 463LL;
        goto LABEL_74;
      }
      memset_0(v123, 0, v68);
      *(_DWORD *)v32 = 0;
      *((_DWORD *)v32 + 34) = a3;
      *((_DWORD *)v32 + 79) = 0;
      *((_DWORD *)v32 + 38) = 0;
      v70 = 0;
      if ( v125 )
      {
        while ( 1 )
        {
          v71 = *((_DWORD *)v32 + 79);
          if ( v71 > 0x1F )
            break;
          *((_DWORD *)v32 + 38) |= 1 << v71;
          *(_OWORD *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = v127[v70];
          if ( ++v70 >= v125 )
            goto LABEL_82;
        }
        ModeEffect = -2147418113;
        v64 = 2147549183LL;
        v65 = 473LL;
        goto LABEL_74;
      }
LABEL_82:
      *((_DWORD *)v32 + 1) = 0;
      if ( *((_DWORD *)v32 + 79) > v67 )
      {
        ModeEffect = -2147418113;
        v64 = 2147549183LL;
        v65 = 481LL;
        goto LABEL_74;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v117);
      v38 = v116;
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v127,
      0LL);
LABEL_90:
    v34 = v118;
    goto LABEL_91;
  }
  v34 = v118;
  if ( v118 )
  {
    ModeEffect = -2147418113;
    v36 = 270LL;
LABEL_8:
    v39 = ModeEffect;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v39);
    goto LABEL_159;
  }
  v37 = CoTaskMemAlloc(0x150uLL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v123,
    v37);
  v32 = (char *)v123;
  if ( !v123 )
  {
    ModeEffect = -2147024882;
    v36 = 275LL;
    goto LABEL_8;
  }
  memset_0(v123, 0, 0x150uLL);
  *(_DWORD *)v32 = 0;
  *((_DWORD *)v32 + 34) = a3;
  *((_DWORD *)v32 + 79) = 0;
  *((_DWORD *)v32 + 38) = 0;
  *((_DWORD *)v32 + 38) = 1 << *((_DWORD *)v32 + 79);
  *(GUID *)&v32[16 * (*((_DWORD *)v32 + 79))++ + 320] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
  *((_DWORD *)v32 + 1) = 1;
  v38 = v116;
LABEL_91:
  *(IID *)(v32 + 156) = *v126;
  *(_OWORD *)(v32 + 172) = *a8;
  *((_DWORD *)v32 + 2) = a5;
  *((_QWORD *)v32 + 16) = a10;
  *((_DWORD *)v32 + 30) = *(unsigned __int16 *)(a10 + 16) + 18;
  *((_QWORD *)v32 + 3) = a12;
  *((_QWORD *)v32 + 4) = a13;
  *((_DWORD *)v32 + 3) = a9;
  *((_QWORD *)v32 + 2) = a14;
  v73 = &GUID_00000000_0000_0000_0000_000000000000;
  if ( a17 )
    v73 = a17;
  *((GUID *)v32 + 3) = *v73;
  v74 = *(_OWORD *)(a18 + 16);
  v75 = *(_OWORD *)(a18 + 32);
  v76 = *(_QWORD *)(a18 + 48);
  *((_OWORD *)v32 + 12) = *(_OWORD *)a18;
  *((_OWORD *)v32 + 13) = v74;
  *((_OWORD *)v32 + 14) = v75;
  *((_QWORD *)v32 + 30) = v76;
  *((_QWORD *)v32 + 14) = a19;
  *((_DWORD *)v32 + 74) = a25;
  if ( a25 != 2 )
    a26 = 0LL;
  *((_QWORD *)v32 + 38) = a26;
  *((_DWORD *)v32 + 78) = a27;
  *((_DWORD *)v32 + 68) = v34 == 1;
  *((GUID *)v32 + 4) = GUID_00000000_0000_0000_0000_000000000000;
  if ( v31
    && (*(_QWORD *)&v31->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
     || *(_QWORD *)v31->Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    rclsid = *v31;
    ContainerProperty = GetContainerProperty(&rclsid, &PKEY_Audio_CPMemoryManager, (struct _GUID *)v32 + 4);
    ModeEffect = ContainerProperty;
    if ( ContainerProperty < 0 )
    {
      v39 = (unsigned int)ContainerProperty;
      v36 = 519LL;
      goto LABEL_9;
    }
  }
  *((GUID *)v32 + 5) = GUID_00000000_0000_0000_0000_000000000000;
  v79 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v31 )
    goto LABEL_106;
  if ( *(_QWORD *)&v31->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    || (v80 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4,
        *(_QWORD *)v31->Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    rclsid = *v31;
    v81 = GetContainerProperty(&rclsid, &PKEY_Audio_CPEventManager, (struct _GUID *)v32 + 5);
    ModeEffect = v81;
    if ( v81 < 0 )
    {
      v39 = (unsigned int)v81;
      v36 = 526LL;
      goto LABEL_9;
    }
    v79 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
LABEL_106:
    v80 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  }
  if ( a16 && (*(_QWORD *)a16 != v79 || *(_QWORD *)(a16 + 8) != v80) )
    *((_OWORD *)v32 + 6) = *(_OWORD *)a16;
LABEL_113:
  v121 = 0LL;
  v120 = 0;
  v119 = 0LL;
  v115 = 0LL;
  v82 = v126;
  rclsid = *v126;
  ModeEffect = EffectPack::GetModeEffect((unsigned __int64)this[1], &rclsid, 0, a5, &v115, &v119, 0LL);
  if ( (ModeEffect & 0x80000000) != 0 )
  {
    v83 = 540LL;
LABEL_115:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v83,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)ModeEffect);
LABEL_116:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v119);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v121,
      0LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v115);
    goto LABEL_159;
  }
  ModeEffect = 0;
  if ( v115 )
  {
    v84 = *(_QWORD *)v115;
    *(_QWORD *)&rclsid.Data1 = &v121;
    *(_QWORD *)rclsid.Data4 = 0LL;
    v129 = 1;
    (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, unsigned __int8 *))(v84 + 32))(
      v115,
      &v120,
      rclsid.Data4);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&rclsid);
  }
  if ( (a3 & 0x800000) == 0 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DisableModePipeForOffloadPins>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableModePipeForOffloadPins>::GetImpl'::`2'::impl) )
    {
      if ( v118 || a5 && a5 != eKeywordDetectorConnector )
        goto LABEL_156;
      if ( (unsigned int)(v38 - 2) <= 1 )
        goto LABEL_156;
      rclsid = *v82;
      CanProcessingModeBeParameterized = EffectPack::CanProcessingModeBeParameterized(this[1], &rclsid, a5);
      if ( !CanProcessingModeBeParameterized
        && (*a6 != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
         || a6[1] != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4
         || !(unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector((__int64)this[1], (unsigned int)a5, 0)) )
      {
        goto LABEL_156;
      }
      v86 = 1;
      if ( v120 > 1 )
        v86 = v120;
      v87 = 16LL * v86;
      v88 = (struct ICompositeSystemEffect *)operator new[](v87 + 68, (const struct std::nothrow_t *)&std::nothrow);
      v89 = v88;
      v117 = v88;
      if ( v88 )
      {
        memset_0(v88, 0, v87 + 68);
        *(_DWORD *)v89 = v116;
        ModeEffect = 0;
        *((_DWORD *)v89 + 1) = 0;
        *((_DWORD *)v89 + 16) = 0;
        v90 = 0;
        if ( v120 )
        {
          v91 = 0;
          while ( v91 <= 0x1F )
          {
            *((_DWORD *)v89 + 8) |= 1 << v91;
            *(_OWORD *)((char *)v89 + 16 * (unsigned int)(*((_DWORD *)v89 + 16))++ + 68) = v121[v90];
            v91 = *((_DWORD *)v89 + 16);
            if ( ++v90 >= v120 )
              goto LABEL_138;
          }
          ModeEffect = -2147418113;
          v94 = 588LL;
          goto LABEL_162;
        }
LABEL_138:
        *(IID *)((char *)v89 + 36) = *v82;
        wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAuxiliaryInputConfiguration>(
          (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v119,
          &v135);
        *((_DWORD *)v89 + 13) = *(_QWORD *)&v135.Data1 != 0LL;
        wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation>(
          (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v119,
          &v130);
        v92 = v130 != 0;
        *((_DWORD *)v89 + 14) = v92;
        if ( v92 )
        {
          wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation2>(
            (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v119,
            &v126);
          if ( v126 )
          {
            v118 = 0;
            v93 = (*(__int64 (__fastcall **)(IID *, int *))(*(_QWORD *)&v126->Data1 + 24LL))(v126, &v118);
            ModeEffect = v93;
            if ( v93 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x262,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v93);
              wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v126);
LABEL_142:
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v130);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v135);
LABEL_163:
              std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>((void **)&v117);
              goto LABEL_116;
            }
            *((_DWORD *)v89 + 15) = v118 & 1;
            ModeEffect = 0;
          }
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v126);
        }
        if ( *((_DWORD *)v89 + 16) > v86 )
        {
          ModeEffect = -2147418113;
          v95 = 619LL;
LABEL_148:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v95,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)ModeEffect);
          goto LABEL_142;
        }
        *((_QWORD *)v89 + 2) = a11;
        *((_DWORD *)v89 + 2) = *(unsigned __int16 *)(a11 + 16) + 18;
        v96 = (MODE_PARAMS *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
        v98 = v96;
        if ( !v96 )
        {
          v132[0] = 0LL;
          ModeEffect = -2147024882;
          v95 = 624LL;
          goto LABEL_148;
        }
        v132[0] = v96;
        *(_OWORD *)v96 = 0LL;
        if ( CanProcessingModeBeParameterized )
        {
          *(_QWORD *)&rclsid.Data1 = 0LL;
          *(_QWORD *)v96 = 0LL;
          v133 = *v82;
          Watcher = AudioModeEffectsWatcherFactory::GetWatcher(
                      (AudioModeEffectsWatcherFactory *)this,
                      (struct EndpointCharacteristicsDescriptor *)&v133,
                      (struct _GUID *)v96,
                      v97);
          ModeEffect = Watcher;
          if ( Watcher < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x276,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)Watcher);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&rclsid);
            goto LABEL_142;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&rclsid);
          ModeEffect = 0;
        }
        std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::operator=<std::default_delete<AUDIO_DEVICE_MODE_DESCRIPTOR>,0>(
          (void **)v98 + 1,
          (void **)&v117);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v130);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v135);
LABEL_155:
        std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>((void **)&v117);
        goto LABEL_156;
      }
      ModeEffect = -2147024882;
      v94 = 580LL;
LABEL_162:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v94,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)ModeEffect);
      goto LABEL_163;
    }
    if ( v118 )
      goto LABEL_156;
    if ( (a5 & 0xFFFFFFFC) != 0 )
      goto LABEL_156;
    if ( a5 == eLoopbackConnector )
      goto LABEL_156;
    if ( (unsigned int)(v116 - 2) <= 1 )
      goto LABEL_156;
    rclsid = *v82;
    v101 = EffectPack::CanProcessingModeBeParameterized(this[1], &rclsid, a5);
    if ( !v101
      && (*a6 != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
       || a6[1] != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4
       || !(unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector((__int64)this[1], (unsigned int)a5, 0)) )
    {
      goto LABEL_156;
    }
    v102 = 1;
    if ( v120 > 1 )
      v102 = v120;
    v103 = 16LL * v102;
    v104 = (struct ICompositeSystemEffect *)operator new[](v103 + 68, (const struct std::nothrow_t *)&std::nothrow);
    v105 = v104;
    v117 = v104;
    if ( !v104 )
    {
      ModeEffect = -2147024882;
      v94 = 662LL;
      goto LABEL_162;
    }
    memset_0(v104, 0, v103 + 68);
    *(_DWORD *)v105 = v116;
    ModeEffect = 0;
    *((_DWORD *)v105 + 1) = 0;
    *((_DWORD *)v105 + 16) = 0;
    v106 = 0;
    if ( v120 )
    {
      v107 = 0;
      while ( v107 <= 0x1F )
      {
        *((_DWORD *)v105 + 8) |= 1 << v107;
        *(_OWORD *)((char *)v105 + 16 * (unsigned int)(*((_DWORD *)v105 + 16))++ + 68) = v121[v106];
        v107 = *((_DWORD *)v105 + 16);
        if ( ++v106 >= v120 )
          goto LABEL_179;
      }
      ModeEffect = -2147418113;
      v94 = 670LL;
      goto LABEL_162;
    }
LABEL_179:
    *(IID *)((char *)v105 + 36) = *v82;
    wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAuxiliaryInputConfiguration>(
      (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v119,
      &v133);
    *((_DWORD *)v105 + 13) = *(_QWORD *)&v133.Data1 != 0LL;
    wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation>(
      (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v119,
      &v131);
    v108 = v131 != 0;
    *((_DWORD *)v105 + 14) = v108;
    if ( v108 )
    {
      wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation2>(
        (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v119,
        &rclsid);
      if ( *(_QWORD *)&rclsid.Data1 )
      {
        v116 = 0;
        v109 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)&rclsid.Data1 + 24LL))(
                 *(_QWORD *)&rclsid.Data1,
                 &v116);
        ModeEffect = v109;
        if ( v109 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B4,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v109);
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&rclsid);
          goto LABEL_183;
        }
        *((_DWORD *)v105 + 15) = v116 & 1;
        ModeEffect = 0;
      }
      wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&rclsid);
    }
    if ( *((_DWORD *)v105 + 16) <= v102 )
    {
      *((_QWORD *)v105 + 2) = a11;
      *((_DWORD *)v105 + 2) = *(unsigned __int16 *)(a11 + 16) + 18;
      v111 = (MODE_PARAMS *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      v113 = v111;
      if ( v111 )
      {
        v132[0] = v111;
        *(_OWORD *)v111 = 0LL;
        if ( v101 )
        {
          v126 = 0LL;
          *(_QWORD *)v111 = 0LL;
          v135 = *v82;
          v114 = AudioModeEffectsWatcherFactory::GetWatcher(
                   (AudioModeEffectsWatcherFactory *)this,
                   (struct EndpointCharacteristicsDescriptor *)&v135,
                   (struct _GUID *)v111,
                   v112);
          ModeEffect = v114;
          if ( v114 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2C8,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v114);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v126);
            goto LABEL_183;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v126);
          ModeEffect = 0;
        }
        std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::operator=<std::default_delete<AUDIO_DEVICE_MODE_DESCRIPTOR>,0>(
          (void **)v113 + 1,
          (void **)&v117);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v131);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v133);
        goto LABEL_155;
      }
      v132[0] = 0LL;
      ModeEffect = -2147024882;
      v110 = 706LL;
    }
    else
    {
      ModeEffect = -2147418113;
      v110 = 701LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v110,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)ModeEffect);
LABEL_183:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v131);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v133);
    goto LABEL_163;
  }
  if ( v118 )
  {
    ModeEffect = -2147418113;
    v83 = 550LL;
    goto LABEL_115;
  }
LABEL_156:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v119);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v121,
    0LL);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v115);
  if ( v137 )
  {
    v123 = 0LL;
    *v137 = v32;
  }
  std::unique_ptr<MODE_PARAMS>::operator=<std::default_delete<MODE_PARAMS>,0>(v138, (__int64 *)v132);
LABEL_159:
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(v132);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v123,
    0LL);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v136);
  return ModeEffect;
}
