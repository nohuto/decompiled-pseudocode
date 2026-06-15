/*
 * XREFs of ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800D7450
 * Callers:
 *     ?CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D3D40 (-CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUE.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032190 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180050D34 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x180058EAC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_180058EAC.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180063868 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18006D6B4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_18006D6B4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180075D20 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180075D20.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HfpToA2dpSwitchError@@@details@wil@@QEAA_NXZ @ 0x1800DDA28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HfpToA2dpSwitchError@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CBtAudioResourceManagerBase::GetDefaultPrimaryProfileRenderSaDeviceParams(
        CBtAudioResourceManagerBase *this,
        CEndpointCharacteristics **a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct SaDeviceParams **a4)
{
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  struct tWAVEFORMATEX *v12; // rsi
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  struct AudioSrvTelemetryProvider *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  struct AudioSrvTelemetryProvider *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  struct tWAVEFORMATEX *v24; // rsi
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  struct AudioSrvTelemetryProvider *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  struct AudioSrvTelemetryProvider *v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  CEndpointCharacteristics *v36; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // r15d
  int v38; // eax
  struct tWAVEFORMATEX *v39; // rbx
  __int64 v40; // rdi
  struct tWAVEFORMATEX *v41; // rsi
  struct _GUID *v42; // rax
  __int64 (__fastcall *v43)(CBtAudioResourceManagerBase *, GUID *); // r9
  struct _GUID v44; // xmm6
  struct _GUID *v45; // rax
  __int64 (__fastcall *v46)(CBtAudioResourceManagerBase *, void ***); // r8
  unsigned __int64 v47; // r9
  __int64 v48; // rdx
  struct tWAVEFORMATEX *v49; // rsi
  _DWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int wFormatTag; // eax
  struct AudioSrvTelemetryProvider *v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  struct AudioSrvTelemetryProvider *v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  struct tWAVEFORMATEX *v61; // rsi
  _DWORD *v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int v66; // eax
  struct AudioSrvTelemetryProvider *v67; // rax
  __int64 v68; // r8
  __int64 v69; // r9
  struct AudioSrvTelemetryProvider *v70; // rax
  __int64 v71; // r8
  __int64 v72; // r9
  CEndpointCharacteristics *v73; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v74; // r15d
  int SharedModeEnginePeriodicity; // eax
  struct tWAVEFORMATEX *v76; // rbx
  __int64 v77; // rdi
  struct tWAVEFORMATEX *v78; // rsi
  struct _GUID *v79; // rax
  __int64 (__fastcall *v80)(CBtAudioResourceManagerBase *, void ***); // r8
  int v81; // [rsp+88h] [rbp-80h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+8Ch] [rbp-7Ch] BYREF
  DWORD nSamplesPerSec; // [rsp+90h] [rbp-78h] BYREF
  struct tWAVEFORMATEX *v84; // [rsp+98h] [rbp-70h] BYREF
  struct tWAVEFORMATEX *v85; // [rsp+A0h] [rbp-68h] BYREF
  void *v86; // [rsp+A8h] [rbp-60h] BYREF
  void *v87; // [rsp+B0h] [rbp-58h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v88; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX **v89; // [rsp+C0h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v90; // [rsp+C8h] [rbp-40h] BYREF
  char v91; // [rsp+D0h] [rbp-38h]
  struct tWAVEFORMATEX **v92; // [rsp+D8h] [rbp-30h] BYREF
  struct tWAVEFORMATEX *v93; // [rsp+E0h] [rbp-28h] BYREF
  char v94; // [rsp+E8h] [rbp-20h]
  struct SaDeviceParams **v95; // [rsp+F0h] [rbp-18h]
  struct tWAVEFORMATEX **v96; // [rsp+F8h] [rbp-10h] BYREF
  struct tWAVEFORMATEX *v97; // [rsp+100h] [rbp-8h] BYREF
  char v98; // [rsp+108h] [rbp+0h]
  struct tWAVEFORMATEX **v99; // [rsp+110h] [rbp+8h] BYREF
  struct tWAVEFORMATEX *v100; // [rsp+118h] [rbp+10h] BYREF
  char v101; // [rsp+120h] [rbp+18h]
  GUID v102; // [rsp+128h] [rbp+20h] BYREF
  struct _GUID v103; // [rsp+138h] [rbp+30h] BYREF
  struct _GUID v104; // [rsp+148h] [rbp+40h] BYREF
  struct _GUID v105; // [rsp+158h] [rbp+50h] BYREF
  void **v106; // [rsp+168h] [rbp+60h] BYREF
  struct tWAVEFORMATEX *v107; // [rsp+170h] [rbp+68h] BYREF
  char v108; // [rsp+178h] [rbp+70h]
  void **v109; // [rsp+180h] [rbp+78h] BYREF
  struct tWAVEFORMATEX *v110; // [rsp+188h] [rbp+80h] BYREF
  char v111; // [rsp+190h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v95 = a4;
  v88 = a3;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_HfpToA2dpSwitchError>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_HfpToA2dpSwitchError>::GetImpl'::`2'::impl) )
  {
    v84 = 0LL;
    v85 = 0LL;
    v86 = 0LL;
    v87 = 0LL;
    v99 = &v84;
    v100 = 0LL;
    v101 = 1;
    v96 = &v85;
    v97 = 0LL;
    v98 = 1;
    v89 = (struct tWAVEFORMATEX **)&v87;
    v90 = 0LL;
    v91 = 1;
    v92 = (struct tWAVEFORMATEX **)&v86;
    v93 = 0LL;
    v94 = 1;
    v44 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, GUID *))(*(_QWORD *)this + 120LL))(
                             this,
                             &v102);
    v45 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, void ***))(*(_QWORD *)this + 120LL))(
                            this,
                            &v109);
    v46 = *(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, void ***))(*(_QWORD *)this + 120LL);
    v105 = v44;
    v103 = *v45;
    v104 = *(struct _GUID *)v46(this, &v106);
    v8 = DeriveDeviceGraphFormatsForStream(
           a2,
           0,
           a3,
           AUDCLNT_SHAREMODE_SHARED,
           0,
           (IAudioMediaType *)&v104,
           &v103,
           &v105,
           0LL,
           &v93,
           &v90,
           &v97,
           &v100);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v92);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v89);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v96);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v99);
    if ( v8 >= 0 )
    {
      v49 = v85;
      if ( v85 )
      {
        wFormatTag = v85->wFormatTag;
        if ( (_WORD)wFormatTag == 0xFFFE )
        {
          v58 = AudioSrvTelemetryProvider::Instance();
          if ( **((_DWORD **)v58 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v58 + 1), 16896LL) )
          {
            v102.Data1 = *(_DWORD *)&v49[1].nChannels;
            *(_QWORD *)&v103.Data1 = (char *)v49 + 24;
            nAvgBytesPerSec = v85->nAvgBytesPerSec;
            nSamplesPerSec = v85->nSamplesPerSec;
            LOWORD(v81) = v85->nChannels;
            *(_QWORD *)&v104.Data1 = L"WAVEFORMATEXTENSIBLE";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v59,
              byte_1801A0A12,
              v59,
              v60,
              (const WCHAR **)&v104,
              (__int64)&v81,
              (__int64)&nSamplesPerSec,
              (__int64)&nAvgBytesPerSec,
              (__int64 *)&v103,
              (__int64)&v102);
          }
        }
        else
        {
          v105 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v105.Data1 = wFormatTag;
          v55 = AudioSrvTelemetryProvider::Instance();
          if ( **((_DWORD **)v55 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v55 + 1), 16896LL) )
          {
            *(_QWORD *)&v103.Data1 = &v105;
            v102.Data1 = v85->nAvgBytesPerSec;
            nAvgBytesPerSec = v85->nSamplesPerSec;
            LOWORD(v81) = v85->nChannels;
            *(_QWORD *)&v104.Data1 = L"WAVEFORMATEX";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v56,
              byte_1801A0AB1,
              v56,
              v57,
              (const WCHAR **)&v104,
              (__int64)&v81,
              (__int64)&nAvgBytesPerSec,
              (__int64)&v102,
              (__int64 *)&v103);
          }
        }
      }
      else
      {
        v50 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *v50 > 4u && tlgKeywordOn((__int64)v50, 16896LL) )
        {
          v102.Data1 = 0;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            v51,
            byte_1801A0B43,
            v52,
            v53,
            (__int64)&v102);
        }
      }
      v61 = v84;
      if ( v84 )
      {
        v66 = v84->wFormatTag;
        if ( (_WORD)v66 == 0xFFFE )
        {
          v70 = AudioSrvTelemetryProvider::Instance();
          if ( **((_DWORD **)v70 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v70 + 1), 16896LL) )
          {
            v102.Data1 = *(_DWORD *)&v61[1].nChannels;
            *(_QWORD *)&v103.Data1 = (char *)v61 + 24;
            nAvgBytesPerSec = v84->nAvgBytesPerSec;
            nSamplesPerSec = v84->nSamplesPerSec;
            LOWORD(v81) = v84->nChannels;
            *(_QWORD *)&v104.Data1 = L"WAVEFORMATEXTENSIBLE";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v71,
              byte_1801A088B,
              v71,
              v72,
              (const WCHAR **)&v104,
              (__int64)&v81,
              (__int64)&nSamplesPerSec,
              (__int64)&nAvgBytesPerSec,
              (__int64 *)&v103,
              (__int64)&v102);
          }
        }
        else
        {
          v105 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v105.Data1 = v66;
          v67 = AudioSrvTelemetryProvider::Instance();
          if ( **((_DWORD **)v67 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v67 + 1), 16896LL) )
          {
            *(_QWORD *)&v103.Data1 = &v105;
            v102.Data1 = v84->nAvgBytesPerSec;
            nAvgBytesPerSec = v84->nSamplesPerSec;
            LOWORD(v81) = v84->nChannels;
            *(_QWORD *)&v104.Data1 = L"WAVEFORMATEX";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v68,
              byte_1801A0929,
              v68,
              v69,
              (const WCHAR **)&v104,
              (__int64)&v81,
              (__int64)&nAvgBytesPerSec,
              (__int64)&v102,
              (__int64 *)&v103);
          }
        }
      }
      else
      {
        v62 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *v62 > 4u && tlgKeywordOn((__int64)v62, 16896LL) )
        {
          v102.Data1 = 0;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            v63,
            byte_1801A09BA,
            v64,
            v65,
            (__int64)&v102);
        }
      }
      v81 = 0;
      nAvgBytesPerSec = 0;
      v102.Data1 = 0;
      nSamplesPerSec = 0;
      v73 = a2[1];
      v105 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, void ***))(*(_QWORD *)this
                                                                                                 + 120LL))(
                                this,
                                &v106);
      v74 = v88;
      SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                      v73,
                                      (unsigned int)v88,
                                      &v84->wFormatTag,
                                      &v105,
                                      0,
                                      &v81,
                                      &nSamplesPerSec,
                                      &nAvgBytesPerSec,
                                      &v102);
      v8 = SharedModeEnginePeriodicity;
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v76 = v84;
        v77 = (unsigned int)(int)((double)v81 * 10000000.0 / (double)(int)v84->nSamplesPerSec + 0.5);
        v78 = v85;
        v79 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, void ***))(*(_QWORD *)this
                                                                                                 + 120LL))(
                                this,
                                &v106);
        v80 = *(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, void ***))(*(_QWORD *)this + 120LL);
        v105 = *v79;
        v103 = *(struct _GUID *)v80(this, &v109);
        SharedModeEnginePeriodicity = DeriveSaDeviceParametersForStream(
                                        (CEndpointCharacteristics ***)a2,
                                        AUDCLNT_SHAREMODE_SHARED,
                                        v74,
                                        &v103,
                                        &v105,
                                        v76,
                                        v78,
                                        v77,
                                        v95);
        v8 = SharedModeEnginePeriodicity;
        if ( SharedModeEnginePeriodicity >= 0 )
        {
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v87,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v86,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&v85,
            0LL);
          goto LABEL_68;
        }
        v48 = 863LL;
      }
      else
      {
        v48 = 851LL;
      }
      v47 = (unsigned int)SharedModeEnginePeriodicity;
    }
    else
    {
      v47 = (unsigned int)v8;
      v48 = 845LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)v47);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v87,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v86,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v85,
      0LL);
    goto LABEL_35;
  }
  v103 = GUID_00000000_0000_0000_0000_000000000000;
  v104 = GUID_00000000_0000_0000_0000_000000000000;
  v102 = GUID_00000000_0000_0000_0000_000000000000;
  v7 = DeriveAudioProcessingModeConfiguration(0, 0, 0, a2, 0, 0, a3, 0LL, 0, 1, 0LL, &v103, &v104, &v102, 0LL, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x317,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v8;
  }
  v84 = 0LL;
  v85 = 0LL;
  v87 = 0LL;
  v86 = 0LL;
  v92 = &v84;
  v93 = 0LL;
  v94 = 1;
  v89 = &v85;
  v90 = 0LL;
  v91 = 1;
  v109 = &v86;
  v110 = 0LL;
  v111 = 1;
  v106 = &v87;
  v107 = 0LL;
  v108 = 1;
  v105 = v103;
  v103 = v104;
  v104 = v102;
  v8 = DeriveDeviceGraphFormatsForStream(
         a2,
         0,
         a3,
         AUDCLNT_SHAREMODE_SHARED,
         0,
         (IAudioMediaType *)&v104,
         &v103,
         &v105,
         0LL,
         &v107,
         &v110,
         &v90,
         &v93);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v106);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v109);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v89);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v92);
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 808LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)v10);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v86,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v87,
      0LL);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v85,
      0LL);
LABEL_35:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v84,
      0LL);
    return (unsigned int)v8;
  }
  v12 = v85;
  if ( v85 )
  {
    v17 = v85->wFormatTag;
    if ( (_WORD)v17 == 0xFFFE )
    {
      v21 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v21 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v21 + 1), 16896LL) )
      {
        nAvgBytesPerSec = *(_DWORD *)&v12[1].nChannels;
        *(_QWORD *)&v104.Data1 = (char *)v12 + 24;
        nSamplesPerSec = v85->nAvgBytesPerSec;
        v102.Data1 = v85->nSamplesPerSec;
        LOWORD(v81) = v85->nChannels;
        *(_QWORD *)&v103.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v22,
          byte_1801A0A12,
          v22,
          v23,
          (const WCHAR **)&v103,
          (__int64)&v81,
          (__int64)&v102,
          (__int64)&nSamplesPerSec,
          (__int64 *)&v104,
          (__int64)&nAvgBytesPerSec);
      }
    }
    else
    {
      v103 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v103.Data1 = v17;
      v18 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v18 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v18 + 1), 16896LL) )
      {
        *(_QWORD *)&v102.Data1 = &v103;
        nSamplesPerSec = v85->nAvgBytesPerSec;
        nAvgBytesPerSec = v85->nSamplesPerSec;
        LOWORD(v81) = v85->nChannels;
        *(_QWORD *)&v104.Data1 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v19,
          byte_1801A0AB1,
          v19,
          v20,
          (const WCHAR **)&v104,
          (__int64)&v81,
          (__int64)&nAvgBytesPerSec,
          (__int64)&nSamplesPerSec,
          (__int64 *)&v102);
      }
    }
  }
  else
  {
    v13 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v13 > 4u && tlgKeywordOn((__int64)v13, 16896LL) )
    {
      v81 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v14,
        byte_1801A0B43,
        v15,
        v16,
        (__int64)&v81);
    }
  }
  v24 = v84;
  if ( v84 )
  {
    v29 = v84->wFormatTag;
    if ( (_WORD)v29 == 0xFFFE )
    {
      v33 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v33 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v33 + 1), 16896LL) )
      {
        v102.Data1 = *(_DWORD *)&v24[1].nChannels;
        *(_QWORD *)&v103.Data1 = (char *)v24 + 24;
        nAvgBytesPerSec = v84->nAvgBytesPerSec;
        nSamplesPerSec = v84->nSamplesPerSec;
        LOWORD(v81) = v84->nChannels;
        *(_QWORD *)&v104.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v34,
          byte_1801A088B,
          v34,
          v35,
          (const WCHAR **)&v104,
          (__int64)&v81,
          (__int64)&nSamplesPerSec,
          (__int64)&nAvgBytesPerSec,
          (__int64 *)&v103,
          (__int64)&v102);
      }
    }
    else
    {
      v105 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v105.Data1 = v29;
      v30 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v30 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v30 + 1), 16896LL) )
      {
        *(_QWORD *)&v103.Data1 = &v105;
        v102.Data1 = v84->nAvgBytesPerSec;
        nAvgBytesPerSec = v84->nSamplesPerSec;
        LOWORD(v81) = v84->nChannels;
        *(_QWORD *)&v104.Data1 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v31,
          byte_1801A0929,
          v31,
          v32,
          (const WCHAR **)&v104,
          (__int64)&v81,
          (__int64)&nAvgBytesPerSec,
          (__int64)&v102,
          (__int64 *)&v103);
      }
    }
  }
  else
  {
    v25 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v25 > 4u && tlgKeywordOn((__int64)v25, 16896LL) )
    {
      v102.Data1 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v26,
        byte_1801A09BA,
        v27,
        v28,
        (__int64)&v102);
    }
  }
  v81 = 0;
  nAvgBytesPerSec = 0;
  v102.Data1 = 0;
  nSamplesPerSec = 0;
  v36 = a2[1];
  v105 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, struct _GUID *))(*(_QWORD *)this + 120LL))(
                            this,
                            &v103);
  v37 = v88;
  v38 = EffectPack::GetSharedModeEnginePeriodicity(
          v36,
          (unsigned int)v88,
          &v84->wFormatTag,
          &v105,
          0,
          &v81,
          &nSamplesPerSec,
          &nAvgBytesPerSec,
          &v102);
  v8 = v38;
  if ( v38 < 0 )
  {
    v11 = 814LL;
LABEL_33:
    v10 = (unsigned int)v38;
    goto LABEL_34;
  }
  v39 = v84;
  v40 = (unsigned int)(int)((double)v81 * 10000000.0 / (double)(int)v84->nSamplesPerSec + 0.5);
  v41 = v85;
  v42 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, struct _GUID *))(*(_QWORD *)this
                                                                                                 + 120LL))(
                          this,
                          &v104);
  v43 = *(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, GUID *))(*(_QWORD *)this + 120LL);
  v105 = *v42;
  v103 = *(struct _GUID *)v43(this, &v102);
  v38 = DeriveSaDeviceParametersForStream(
          (CEndpointCharacteristics ***)a2,
          AUDCLNT_SHAREMODE_SHARED,
          v37,
          &v103,
          &v105,
          v39,
          v41,
          v40,
          v95);
  v8 = v38;
  if ( v38 < 0 )
  {
    v11 = 826LL;
    goto LABEL_33;
  }
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v86,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v87,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v85,
    0LL);
LABEL_68:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v84,
    0LL);
  return 0LL;
}
