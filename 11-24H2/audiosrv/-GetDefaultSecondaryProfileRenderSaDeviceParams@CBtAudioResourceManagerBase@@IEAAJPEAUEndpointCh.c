/*
 * XREFs of ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800DDBD4
 * Callers:
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DC434 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002D3E0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x18004B024 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_18004B024.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180055BE4 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18005F3D0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_18005F3D0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180065F08 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180065F08.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CBtAudioResourceManagerBase::GetDefaultSecondaryProfileRenderSaDeviceParams(
        CBtAudioResourceManagerBase *this,
        CEndpointCharacteristics **a2,
        struct SaDeviceParams **a3)
{
  struct _GUID v6; // xmm6
  struct _GUID *v7; // rax
  __int64 (__fastcall *v8)(CBtAudioResourceManagerBase *, _BYTE *); // r8
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  struct tWAVEFORMATEX *v12; // rbx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int wFormatTag; // eax
  struct AudioSrvTelemetryProvider *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  struct AudioSrvTelemetryProvider *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  struct tWAVEFORMATEX *v24; // rbx
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
  int SharedModeEnginePeriodicity; // eax
  struct tWAVEFORMATEX *v38; // rbx
  __int64 v39; // rdi
  struct tWAVEFORMATEX *v40; // rsi
  struct _GUID *v41; // rax
  __int64 (__fastcall *v42)(CBtAudioResourceManagerBase *, _BYTE *); // r8
  int v44; // [rsp+70h] [rbp-90h] BYREF
  DWORD nSamplesPerSec; // [rsp+74h] [rbp-8Ch] BYREF
  DWORD nAvgBytesPerSec; // [rsp+78h] [rbp-88h] BYREF
  struct tWAVEFORMATEX *v47; // [rsp+80h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v48; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v49; // [rsp+90h] [rbp-70h] BYREF
  void *v50; // [rsp+A0h] [rbp-60h] BYREF
  void *v51; // [rsp+A8h] [rbp-58h] BYREF
  void **v52; // [rsp+B0h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v53; // [rsp+B8h] [rbp-48h] BYREF
  char v54; // [rsp+C0h] [rbp-40h]
  void **v55; // [rsp+C8h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *v56; // [rsp+D0h] [rbp-30h] BYREF
  char v57; // [rsp+D8h] [rbp-28h]
  struct tWAVEFORMATEX **v58; // [rsp+E0h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *v59; // [rsp+E8h] [rbp-18h] BYREF
  char v60; // [rsp+F0h] [rbp-10h]
  struct tWAVEFORMATEX **v61; // [rsp+F8h] [rbp-8h] BYREF
  struct tWAVEFORMATEX *v62; // [rsp+100h] [rbp+0h] BYREF
  char v63; // [rsp+108h] [rbp+8h]
  __int64 v64[2]; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v65; // [rsp+120h] [rbp+20h] BYREF
  struct _GUID v66; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v67[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v68[16]; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v47 = 0LL;
  v48 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v61 = &v47;
  v62 = 0LL;
  v63 = 1;
  v58 = &v48;
  v59 = 0LL;
  v60 = 1;
  v55 = &v50;
  v56 = 0LL;
  v57 = 1;
  v52 = &v51;
  v53 = 0LL;
  v54 = 1;
  v6 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, __int64 *))(*(_QWORD *)this + 136LL))(
                          this,
                          v64);
  v7 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                         this,
                         v68);
  v8 = *(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL);
  v66 = v6;
  v65 = *v7;
  v49 = *(struct _GUID *)v8(this, v67);
  v9 = DeriveDeviceGraphFormatsForStream(
         a2,
         0,
         eHostProcessConnector,
         AUDCLNT_SHAREMODE_SHARED,
         0,
         (IAudioMediaType *)&v49,
         &v65,
         &v66,
         0LL,
         &v53,
         &v56,
         &v59,
         &v62);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v52);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v55);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v58);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v61);
  if ( v9 >= 0 )
  {
    v12 = v48;
    if ( v48 )
    {
      wFormatTag = v48->wFormatTag;
      if ( (_WORD)wFormatTag == 0xFFFE )
      {
        v21 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v21 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v21 + 1), 16896LL) )
        {
          nSamplesPerSec = *(_DWORD *)&v12[1].nChannels;
          *(_QWORD *)&v49.Data1 = (char *)v12 + 24;
          nAvgBytesPerSec = v48->nAvgBytesPerSec;
          LODWORD(v64[0]) = v48->nSamplesPerSec;
          LOWORD(v44) = v48->nChannels;
          *(_QWORD *)&v65.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v22,
            byte_1801AB96A,
            v22,
            v23,
            (const WCHAR **)&v65,
            (__int64)&v44,
            (__int64)v64,
            (__int64)&nAvgBytesPerSec,
            (__int64 *)&v49,
            (__int64)&nSamplesPerSec);
        }
      }
      else
      {
        v65 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v65.Data1 = wFormatTag;
        v18 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v18 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v18 + 1), 16896LL) )
        {
          v64[0] = (__int64)&v65;
          nAvgBytesPerSec = v48->nAvgBytesPerSec;
          nSamplesPerSec = v48->nSamplesPerSec;
          LOWORD(v44) = v48->nChannels;
          *(_QWORD *)&v49.Data1 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v19,
            byte_1801ABA0B,
            v19,
            v20,
            (const WCHAR **)&v49,
            (__int64)&v44,
            (__int64)&nSamplesPerSec,
            (__int64)&nAvgBytesPerSec,
            v64);
        }
      }
    }
    else
    {
      v13 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v13 > 4u && tlgKeywordOn((__int64)v13, 16896LL) )
      {
        v44 = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          v14,
          byte_1801ABA9F,
          v15,
          v16,
          (__int64)&v44);
      }
    }
    v24 = v47;
    if ( v47 )
    {
      v29 = v47->wFormatTag;
      if ( (_WORD)v29 == 0xFFFE )
      {
        v33 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v33 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v33 + 1), 16896LL) )
        {
          LODWORD(v64[0]) = *(_DWORD *)&v24[1].nChannels;
          *(_QWORD *)&v65.Data1 = (char *)v24 + 24;
          nSamplesPerSec = v47->nAvgBytesPerSec;
          nAvgBytesPerSec = v47->nSamplesPerSec;
          LOWORD(v44) = v47->nChannels;
          *(_QWORD *)&v49.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v34,
            byte_1801AB7DD,
            v34,
            v35,
            (const WCHAR **)&v49,
            (__int64)&v44,
            (__int64)&nAvgBytesPerSec,
            (__int64)&nSamplesPerSec,
            (__int64 *)&v65,
            (__int64)v64);
        }
      }
      else
      {
        v66 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v66.Data1 = v29;
        v30 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v30 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v30 + 1), 16896LL) )
        {
          *(_QWORD *)&v65.Data1 = &v66;
          LODWORD(v64[0]) = v47->nAvgBytesPerSec;
          nSamplesPerSec = v47->nSamplesPerSec;
          LOWORD(v44) = v47->nChannels;
          *(_QWORD *)&v49.Data1 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v31,
            byte_1801AB87D,
            v31,
            v32,
            (const WCHAR **)&v49,
            (__int64)&v44,
            (__int64)&nSamplesPerSec,
            (__int64)v64,
            (__int64 *)&v65);
        }
      }
    }
    else
    {
      v25 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v25 > 4u && tlgKeywordOn((__int64)v25, 16896LL) )
      {
        LODWORD(v64[0]) = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          v26,
          byte_1801AB910,
          v27,
          v28,
          (__int64)v64);
      }
    }
    v44 = 0;
    nSamplesPerSec = 0;
    LODWORD(v64[0]) = 0;
    nAvgBytesPerSec = 0;
    v36 = a2[1];
    v66 = *(struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                             this,
                             v67);
    SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                    v36,
                                    0LL,
                                    &v47->wFormatTag,
                                    &v66,
                                    0,
                                    &v44,
                                    &nAvgBytesPerSec,
                                    &nSamplesPerSec,
                                    v64);
    v9 = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v38 = v47;
      v39 = (unsigned int)(int)((double)v44 * 10000000.0 / (double)(int)v47->nSamplesPerSec + 0.5);
      v40 = v48;
      v41 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                              this,
                              v67);
      v42 = *(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL);
      v66 = *v41;
      v65 = *(struct _GUID *)v42(this, v68);
      SharedModeEnginePeriodicity = DeriveSaDeviceParametersForStream(
                                      (CEndpointCharacteristics ***)a2,
                                      AUDCLNT_SHAREMODE_SHARED,
                                      eHostProcessConnector,
                                      &v65,
                                      &v66,
                                      v38,
                                      v40,
                                      v39,
                                      a3);
      v9 = SharedModeEnginePeriodicity;
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v9 = 0;
        goto LABEL_32;
      }
      v11 = 613LL;
    }
    else
    {
      v11 = 601LL;
    }
    v10 = (unsigned int)SharedModeEnginePeriodicity;
  }
  else
  {
    v10 = (unsigned int)v9;
    v11 = 595LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)v10);
LABEL_32:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v50,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v51,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v48,
    0LL);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v47,
    0LL);
  return (unsigned int)v9;
}
