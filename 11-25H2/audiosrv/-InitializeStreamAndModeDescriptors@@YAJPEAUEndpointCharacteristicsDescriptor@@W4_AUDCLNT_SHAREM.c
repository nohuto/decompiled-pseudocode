/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BE314
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B88DC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAA@XZ @ 0x18001F3F8 (--1-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@.c)
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x1800226F4 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??$?4U?$default_delete@UMODE_PARAMS@@@std@@$0A@@?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002732C (--$-4U-$default_delete@UMODE_PARAMS@@@std@@$0A@@-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMO.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18002738C (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800273E4 (--$-4U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@-$unique_ptr@UAUDIO_DEVICE_MODE.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800331CC (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180034CF8 (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180034D94 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x1800372A8 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18004B200 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18004E288 (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x1800542D0 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$try_copy@UIApoAcousticEchoCancellation@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAcousticEchoCancellation@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18007CFF8 (--$try_copy@UIApoAcousticEchoCancellation@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode.c)
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18007E0A0 (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ??$try_copy@UIApoAuxiliaryInputConfiguration@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18007F6BC (--$try_copy@UIApoAuxiliaryInputConfiguration@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returnc.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=23
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
  EffectPack **v31; // r13
  IID *v32; // r12
  char *v33; // rsi
  EffectPack *v34; // rbx
  int StreamEffect; // edi
  __int64 v36; // rdx
  void *v37; // rax
  unsigned int v38; // edx
  int v39; // eax
  EffectPack *v40; // rcx
  __int64 v41; // rdx
  void **v42; // rcx
  __int64 v43; // rax
  int v44; // ebx
  __int64 v45; // rdx
  unsigned int v46; // r13d
  void *v47; // rax
  int v48; // eax
  SIZE_T v49; // rbx
  void *v50; // rax
  int v51; // edx
  unsigned int v52; // ecx
  GUID v53; // xmm0
  SIZE_T v54; // rbx
  void *v55; // rax
  unsigned int i; // r12d
  int v57; // ebx
  unsigned int v58; // ecx
  int v59; // eax
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned int v63; // edi
  SIZE_T v64; // rbx
  void *v65; // rax
  int v66; // edx
  unsigned int v67; // ecx
  void *v68; // rax
  GUID *v69; // rax
  __int128 v70; // xmm2
  __int128 v71; // xmm3
  __int64 v72; // xmm0_8
  int v74; // ebx
  __int64 v75; // rcx
  __int64 v76; // rdx
  int ModeEffect; // eax
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rax
  int v81; // r12d
  char CanProcessingModeBeParameterized; // r15
  unsigned int v83; // r14d
  __int64 v84; // rdi
  struct ICompositeSystemEffect *v85; // rax
  struct ICompositeSystemEffect *v86; // rbx
  int v87; // edx
  unsigned int v88; // ecx
  IID *v89; // rdi
  BOOL v90; // eax
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rdx
  MODE_PARAMS *v95; // rax
  struct IAudioModeEffectsWatcher **v96; // r9
  MODE_PARAMS *v97; // rbx
  int Watcher; // eax
  struct ICompositeSystemEffect *v100; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v101; // [rsp+50h] [rbp-B8h] BYREF
  struct ICompositeSystemEffect *v102; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD *v103; // [rsp+60h] [rbp-A8h] BYREF
  void *v104; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v105; // [rsp+70h] [rbp-98h] BYREF
  int v106; // [rsp+74h] [rbp-94h] BYREF
  struct IAudioProcessingObject *v107; // [rsp+78h] [rbp-90h] BYREF
  _OWORD *v108; // [rsp+80h] [rbp-88h] BYREF
  IID *v109; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v110; // [rsp+90h] [rbp-78h] BYREF
  _OWORD *v111; // [rsp+98h] [rbp-70h] BYREF
  AudioModeEffectsWatcherFactory *v112; // [rsp+A0h] [rbp-68h] BYREF
  IID rclsid; // [rsp+A8h] [rbp-60h] BYREF
  IID v114; // [rsp+B8h] [rbp-50h] BYREF
  char v115; // [rsp+C8h] [rbp-40h]
  MODE_PARAMS *v116[2]; // [rsp+D8h] [rbp-30h] BYREF
  struct _GUID v117; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v118; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD *v119; // [rsp+100h] [rbp-8h]
  __int64 *v120; // [rsp+108h] [rbp+0h]
  CLSID pClsid; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v106 = a4;
  LODWORD(v101) = a2;
  v31 = this;
  v112 = (AudioModeEffectsWatcherFactory *)this;
  v109 = a7;
  v32 = a15;
  *(_QWORD *)&rclsid.Data1 = a15;
  v119 = a28;
  v120 = a29;
  v118 = 0LL;
  v33 = 0LL;
  v104 = 0LL;
  v116[0] = 0LL;
  v34 = *this;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v118);
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v34 + 5, &v118);
  if ( !v119 )
  {
    v74 = v101;
    goto LABEL_109;
  }
  if ( (a3 & 0x800000) == 0 )
  {
    if ( !a2 && (a5 == eHostProcessConnector || (unsigned int)(a5 - 2) <= 2) )
    {
      v103 = 0LL;
      v38 = 0;
      v105 = 0;
      pClsid = 0LL;
      if ( ((a5 - 2) & 0xFFFFFFFD) != 0 )
      {
        v100 = 0LL;
        v39 = EffectPack::EndpointConnectorSupportsProcessingModes(v31[1], (unsigned int)a5);
        v40 = v31[1];
        if ( v39 )
        {
          v100 = 0LL;
          v117 = *v109;
          StreamEffect = EffectPack::GetStreamEffect((unsigned __int64)v40, &v117, 0, a5, &v100, 0LL, 0LL);
          if ( StreamEffect < 0 )
          {
            v41 = 304LL;
LABEL_16:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v41,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)StreamEffect);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v100);
LABEL_17:
            v42 = (void **)&v103;
LABEL_18:
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              v42,
              0LL);
            goto LABEL_159;
          }
        }
        else
        {
          v100 = 0LL;
          StreamEffect = EffectPack::GetLfx(v40, a5, &v100, 0LL);
          if ( StreamEffect < 0 )
          {
            v41 = 309LL;
            goto LABEL_16;
          }
        }
        if ( v100 )
        {
          v43 = *(_QWORD *)v100;
          *(_QWORD *)&v114.Data1 = &v103;
          *(_QWORD *)v114.Data4 = 0LL;
          v115 = 1;
          (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, unsigned __int8 *))(v43 + 32))(
            v100,
            &v105,
            v114.Data4);
          wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v114);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v100);
        v38 = v105;
      }
      v44 = v106;
      if ( v106 )
      {
        if ( v106 != 1 )
        {
          if ( (unsigned int)(v106 - 2) >= 2 )
          {
            StreamEffect = -2147024809;
            v45 = 439LL;
            goto LABEL_66;
          }
          v46 = 3;
          v47 = CoTaskMemAlloc(0x170uLL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v104,
            v47);
          v33 = (char *)v104;
          if ( v104 )
          {
            memset_0(v104, 0, 0x170uLL);
            v48 = 1;
            if ( ((a5 - 2) & 0xFFFFFFFD) != 0 )
              v48 = v44;
            *(_DWORD *)v33 = v48;
            *((_DWORD *)v33 + 34) = a3;
            *((_DWORD *)v33 + 79) = 3;
            *((GUID *)v33 + 20) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
            *((GUID *)v33 + 21) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
            *((GUID *)v33 + 22) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
            *((_DWORD *)v33 + 38) = 0;
            goto LABEL_60;
          }
          v45 = 423LL;
          goto LABEL_65;
        }
        v46 = v38 + 2;
        v49 = 16 * (v38 + 2 + 20LL);
        v50 = CoTaskMemAlloc(v49);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v104,
          v50);
        v33 = (char *)v104;
        if ( v104 )
        {
          memset_0(v104, 0, v49);
          *(_DWORD *)v33 = 1;
          *((_DWORD *)v33 + 34) = a3;
          *((_DWORD *)v33 + 38) = 0;
          *((_DWORD *)v33 + 79) = 0;
          *((_QWORD *)v33 + 32) = a23;
          *((_QWORD *)v33 + 33) = a24;
          if ( a22 )
            *((_QWORD *)v33 + 31) = a19;
          v51 = 0;
          if ( v105 )
          {
            while ( 1 )
            {
              v52 = *((_DWORD *)v33 + 79);
              if ( v52 > 0x1F )
                break;
              *((_DWORD *)v33 + 38) |= 1 << v52;
              *(_OWORD *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = v103[v51];
              if ( ++v51 >= v105 )
                goto LABEL_39;
            }
            StreamEffect = -2147418113;
            v45 = 403LL;
            goto LABEL_66;
          }
LABEL_39:
          *(GUID *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
          v53 = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
LABEL_59:
          *(GUID *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = v53;
LABEL_60:
          *((_DWORD *)v33 + 1) = a3 >> 31;
          if ( *((_DWORD *)v33 + 79) > v46 )
          {
            StreamEffect = -2147418113;
            v45 = 443LL;
            goto LABEL_66;
          }
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v103,
            0LL);
          v31 = (EffectPack **)v112;
          goto LABEL_87;
        }
        v45 = 388LL;
      }
      else
      {
        v46 = v38 + 4;
        v54 = 16 * (v38 + 4 + 20LL);
        v55 = CoTaskMemAlloc(v54);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v104,
          v55);
        v33 = (char *)v104;
        if ( v104 )
        {
          memset_0(v104, 0, v54);
          *(_DWORD *)v33 = 0;
          *((_DWORD *)v33 + 34) = a3;
          *((_DWORD *)v33 + 79) = 0;
          *((_DWORD *)v33 + 38) = 0;
          if ( a21 )
          {
            *((_DWORD *)v33 + 38) = 1;
            *(GUID *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
          }
          else
          {
            for ( i = 0; i < v105; ++i )
            {
              if ( *(_QWORD *)&v103[i] == *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1
                && *((_QWORD *)&v103[i] + 1) == *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4 )
              {
                if ( IsGetDefaultSpatialRenderingModePresent() )
                {
                  if ( RpcImpersonateClient(0LL) >= 0 )
                  {
                    v57 = IsVirtualSurroundAllowedForProcess(a9);
                    RpcRevertToSelf();
                    if ( !v57 )
                      continue;
                  }
                }
              }
              v58 = *((_DWORD *)v33 + 79);
              if ( v58 > 0x1F )
              {
                StreamEffect = -2147418113;
                v45 = 357LL;
                goto LABEL_66;
              }
              *((_DWORD *)v33 + 38) |= 1 << v58;
              *(_OWORD *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = v103[i];
            }
            v32 = *(IID **)&rclsid.Data1;
          }
          *(GUID *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
          *(GUID *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
          *(GUID *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
          if ( a21 || !a20 || CoGetPSClsid(&GUID_5849e670_4969_44de_8904_75ed892b627e, &pClsid) < 0 )
            goto LABEL_60;
          v53 = GUID_e3eff23b_5360_40a1_8e7b_506b6283b5d4;
          goto LABEL_59;
        }
        v45 = 323LL;
      }
LABEL_65:
      StreamEffect = -2147024882;
LABEL_66:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v45,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)StreamEffect);
      goto LABEL_17;
    }
    v111 = 0LL;
    v110 = 0;
    if ( a5 != eOffloadConnector || a2 )
    {
      v68 = CoTaskMemAlloc(0x150uLL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v104,
        v68);
      v33 = (char *)v104;
      if ( !v104 )
      {
        StreamEffect = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E5,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_72;
      }
      memset_0(v104, 0, 0x150uLL);
      *(_DWORD *)v33 = v106;
      *((_DWORD *)v33 + 34) = a3;
      *((_DWORD *)v33 + 79) = 0;
      *((_DWORD *)v33 + 1) = 0;
    }
    else
    {
      v102 = 0LL;
      pClsid = *v109;
      v59 = EffectPack::GetStreamEffect((unsigned __int64)v31[1], &pClsid, 0, a5, &v102, 0LL, 0LL);
      StreamEffect = v59;
      if ( v59 < 0 )
      {
        v60 = (unsigned int)v59;
        v61 = 452LL;
LABEL_71:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v61,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v60);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v102);
LABEL_72:
        v42 = (void **)&v111;
        goto LABEL_18;
      }
      if ( v102 )
      {
        v62 = *(_QWORD *)v102;
        *(_QWORD *)&v114.Data1 = &v111;
        *(_QWORD *)v114.Data4 = 0LL;
        v115 = 1;
        (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, unsigned __int8 *))(v62 + 32))(
          v102,
          &v110,
          v114.Data4);
        wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v114);
      }
      v63 = v110;
      v64 = 16 * (v110 + 20LL);
      v65 = CoTaskMemAlloc(v64);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v104,
        v65);
      v33 = (char *)v104;
      if ( !v104 )
      {
        StreamEffect = -2147024882;
        v60 = 2147942414LL;
        v61 = 459LL;
        goto LABEL_71;
      }
      memset_0(v104, 0, v64);
      *(_DWORD *)v33 = 0;
      *((_DWORD *)v33 + 34) = a3;
      *((_DWORD *)v33 + 79) = 0;
      *((_DWORD *)v33 + 38) = 0;
      v66 = 0;
      if ( v110 )
      {
        while ( 1 )
        {
          v67 = *((_DWORD *)v33 + 79);
          if ( v67 > 0x1F )
            break;
          *((_DWORD *)v33 + 38) |= 1 << v67;
          *(_OWORD *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = v111[v66];
          if ( ++v66 >= v110 )
            goto LABEL_79;
        }
        StreamEffect = -2147418113;
        v60 = 2147549183LL;
        v61 = 469LL;
        goto LABEL_71;
      }
LABEL_79:
      *((_DWORD *)v33 + 1) = 0;
      if ( *((_DWORD *)v33 + 79) > v63 )
      {
        StreamEffect = -2147418113;
        v60 = 2147549183LL;
        v61 = 477LL;
        goto LABEL_71;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v102);
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v111,
      0LL);
    goto LABEL_87;
  }
  if ( a2 )
  {
    StreamEffect = -2147418113;
    v36 = 266LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)StreamEffect);
    goto LABEL_159;
  }
  v37 = CoTaskMemAlloc(0x150uLL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v104,
    v37);
  v33 = (char *)v104;
  if ( !v104 )
  {
    StreamEffect = -2147024882;
    v36 = 271LL;
    goto LABEL_8;
  }
  memset_0(v104, 0, 0x150uLL);
  *(_DWORD *)v33 = 0;
  *((_DWORD *)v33 + 34) = a3;
  *((_DWORD *)v33 + 79) = 0;
  *((_DWORD *)v33 + 38) = 0;
  *((_DWORD *)v33 + 38) = 1 << *((_DWORD *)v33 + 79);
  *(GUID *)&v33[16 * (*((_DWORD *)v33 + 79))++ + 320] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
  *((_DWORD *)v33 + 1) = 1;
LABEL_87:
  *(IID *)(v33 + 156) = *v109;
  *(_OWORD *)(v33 + 172) = *a8;
  *((_DWORD *)v33 + 2) = a5;
  *((_QWORD *)v33 + 16) = a10;
  *((_DWORD *)v33 + 30) = *(unsigned __int16 *)(a10 + 16) + 18;
  *((_QWORD *)v33 + 3) = a12;
  *((_QWORD *)v33 + 4) = a13;
  *((_DWORD *)v33 + 3) = a9;
  *((_QWORD *)v33 + 2) = a14;
  v69 = &GUID_00000000_0000_0000_0000_000000000000;
  if ( a17 )
    v69 = a17;
  *((GUID *)v33 + 3) = *v69;
  v70 = *(_OWORD *)(a18 + 16);
  v71 = *(_OWORD *)(a18 + 32);
  v72 = *(_QWORD *)(a18 + 48);
  *((_OWORD *)v33 + 12) = *(_OWORD *)a18;
  *((_OWORD *)v33 + 13) = v70;
  *((_OWORD *)v33 + 14) = v71;
  *((_QWORD *)v33 + 30) = v72;
  *((_QWORD *)v33 + 14) = a19;
  *((_DWORD *)v33 + 74) = a25;
  if ( a25 != 2 )
    a26 = 0LL;
  *((_QWORD *)v33 + 38) = a26;
  *((_DWORD *)v33 + 78) = a27;
  v74 = v101;
  *((_DWORD *)v33 + 68) = v101 == 1;
  *((GUID *)v33 + 4) = GUID_00000000_0000_0000_0000_000000000000;
  if ( v32
    && (*(_QWORD *)&v32->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
     || *(_QWORD *)v32->Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    rclsid = *v32;
    StreamEffect = GetContainerProperty(&rclsid, &PKEY_Audio_CPMemoryManager, (struct _GUID *)v33 + 4);
    if ( StreamEffect < 0 )
    {
      v36 = 515LL;
      goto LABEL_8;
    }
  }
  *((GUID *)v33 + 5) = GUID_00000000_0000_0000_0000_000000000000;
  v75 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v32 )
    goto LABEL_102;
  if ( *(_QWORD *)&v32->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    || (v76 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4,
        *(_QWORD *)v32->Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    rclsid = *v32;
    StreamEffect = GetContainerProperty(&rclsid, &PKEY_Audio_CPEventManager, (struct _GUID *)v33 + 5);
    if ( StreamEffect < 0 )
    {
      v36 = 522LL;
      goto LABEL_8;
    }
    v75 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
LABEL_102:
    v76 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  }
  if ( a16 && (*(_QWORD *)a16 != v75 || *(_QWORD *)(a16 + 8) != v76) )
    *((_OWORD *)v33 + 6) = *(_OWORD *)a16;
LABEL_109:
  v108 = 0LL;
  LODWORD(v101) = 0;
  v107 = 0LL;
  v100 = 0LL;
  rclsid = *v109;
  ModeEffect = EffectPack::GetModeEffect((unsigned __int64)v31[1], &rclsid, 0, a5, &v100, &v107, 0LL);
  StreamEffect = ModeEffect;
  if ( ModeEffect < 0 )
  {
    v78 = (unsigned int)ModeEffect;
    v79 = 536LL;
LABEL_111:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v79,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v78);
LABEL_112:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v107);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v108,
      0LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v100);
    goto LABEL_159;
  }
  if ( v100 )
  {
    v80 = *(_QWORD *)v100;
    *(_QWORD *)&v114.Data1 = &v108;
    *(_QWORD *)v114.Data4 = 0LL;
    v115 = 1;
    (*(void (__fastcall **)(struct ICompositeSystemEffect *, __int64 *, unsigned __int8 *))(v80 + 32))(
      v100,
      &v101,
      v114.Data4);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v114);
  }
  if ( (a3 & 0x800000) == 0 )
  {
    if ( v74 )
      goto LABEL_156;
    if ( (a5 & 0xFFFFFFFC) != 0 )
      goto LABEL_156;
    if ( a5 == eLoopbackConnector )
      goto LABEL_156;
    v81 = v106;
    if ( (unsigned int)(v106 - 2) <= 1 )
      goto LABEL_156;
    rclsid = *v109;
    CanProcessingModeBeParameterized = EffectPack::CanProcessingModeBeParameterized(v31[1], &rclsid, a5);
    if ( !CanProcessingModeBeParameterized
      && (*a6 != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
       || a6[1] != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4
       || !(unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector((__int64)v31[1], (unsigned int)a5, 0)) )
    {
      goto LABEL_156;
    }
    v83 = 1;
    if ( (unsigned int)v101 > 1 )
      v83 = v101;
    v84 = 16LL * v83;
    v85 = (struct ICompositeSystemEffect *)operator new[](v84 + 68, (const struct std::nothrow_t *)&std::nothrow);
    v86 = v85;
    v102 = v85;
    if ( !v85 )
    {
      StreamEffect = -2147024882;
      v93 = 572LL;
LABEL_154:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v93,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)StreamEffect);
      goto LABEL_155;
    }
    memset_0(v85, 0, v84 + 68);
    *(_DWORD *)v86 = v81;
    *((_DWORD *)v86 + 1) = 0;
    *((_DWORD *)v86 + 16) = 0;
    v87 = 0;
    if ( (_DWORD)v101 )
    {
      v88 = 0;
      while ( v88 <= 0x1F )
      {
        *((_DWORD *)v86 + 8) |= 1 << v88;
        *(_OWORD *)((char *)v86 + 16 * (unsigned int)(*((_DWORD *)v86 + 16))++ + 68) = v108[v87];
        v88 = *((_DWORD *)v86 + 16);
        if ( ++v87 >= (unsigned int)v101 )
          goto LABEL_133;
      }
      StreamEffect = -2147418113;
      v93 = 580LL;
      goto LABEL_154;
    }
LABEL_133:
    v89 = v109;
    *(IID *)((char *)v86 + 36) = *v109;
    wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAuxiliaryInputConfiguration>(
      (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v107,
      &v112);
    *((_DWORD *)v86 + 13) = v112 != 0LL;
    wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation>(
      (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v107,
      &v117);
    v90 = *(_QWORD *)&v117.Data1 != 0LL;
    *((_DWORD *)v86 + 14) = v90;
    if ( v90 )
    {
      v91 = 0LL;
      *(_QWORD *)&rclsid.Data1 = 0LL;
      if ( v107 )
      {
        ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, IID *))v107->lpVtbl->QueryInterface)(
          v107,
          &GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2,
          &rclsid);
        v91 = *(_QWORD *)&rclsid.Data1;
      }
      if ( v91 )
      {
        v106 = 0;
        v92 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v91 + 24LL))(v91, &v106);
        StreamEffect = v92;
        if ( v92 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x25A,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v92);
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&rclsid);
          goto LABEL_139;
        }
        *((_DWORD *)v86 + 15) = v106 & 1;
        v89 = v109;
      }
      wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&rclsid);
    }
    if ( *((_DWORD *)v86 + 16) <= v83 )
    {
      *((_QWORD *)v86 + 2) = a11;
      *((_DWORD *)v86 + 2) = *(unsigned __int16 *)(a11 + 16) + 18;
      v95 = (MODE_PARAMS *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      v97 = v95;
      if ( v95 )
      {
        v116[0] = v95;
        *(_OWORD *)v95 = 0LL;
        if ( CanProcessingModeBeParameterized )
        {
          v109 = 0LL;
          *(_QWORD *)v95 = 0LL;
          v114 = *v89;
          Watcher = AudioModeEffectsWatcherFactory::GetWatcher(
                      (AudioModeEffectsWatcherFactory *)v31,
                      (struct EndpointCharacteristicsDescriptor *)&v114,
                      (struct _GUID *)v95,
                      v96);
          StreamEffect = Watcher;
          if ( Watcher < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x26E,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)Watcher);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v109);
            goto LABEL_139;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v109);
        }
        std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::operator=<std::default_delete<AUDIO_DEVICE_MODE_DESCRIPTOR>,0>(
          (void **)v97 + 1,
          (void **)&v102);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v117);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v112);
        std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>((void **)&v102);
        goto LABEL_156;
      }
      v116[0] = 0LL;
      StreamEffect = -2147024882;
      v94 = 616LL;
    }
    else
    {
      StreamEffect = -2147418113;
      v94 = 611LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v94,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)StreamEffect);
LABEL_139:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v117);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v112);
LABEL_155:
    std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>((void **)&v102);
    goto LABEL_112;
  }
  if ( v74 )
  {
    StreamEffect = -2147418113;
    v78 = 2147549183LL;
    v79 = 546LL;
    goto LABEL_111;
  }
LABEL_156:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v107);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v108,
    0LL);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v100);
  if ( v119 )
  {
    v104 = 0LL;
    *v119 = v33;
  }
  std::unique_ptr<MODE_PARAMS>::operator=<std::default_delete<MODE_PARAMS>,0>(v120, (__int64 *)v116);
  StreamEffect = 0;
LABEL_159:
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(v116);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v104,
    0LL);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v118);
  return (unsigned int)StreamEffect;
}
