/*
 * XREFs of ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800A12DC
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180083E1C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B88DC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800029B8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTempl.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x180027248 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180028CC0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800331CC (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005563C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??4?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180061B0C (--4-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectState@CProcess.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18006EAA0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlg.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18007F0B0 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ??$?4U?$default_delete@UStreamGroupParams@@@std@@$0A@@?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180088B88 (--$-4U-$default_delete@UStreamGroupParams@@@std@@$0A@@-$unique_ptr@UStreamGroupParams@@U-$defaul.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     WPP_SF_Idd @ 0x1800C169C (WPP_SF_Idd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveStreamGroupParametersForStream(
        CEndpointCharacteristics **a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        int a3,
        __int64 a4,
        int a5,
        struct _GUID *a6,
        char a7,
        unsigned __int8 a8,
        struct tWAVEFORMATEX *Src,
        __int64 a10,
        __int64 a11,
        StreamGroupParams **a12)
{
  _DWORD *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  StreamGroupParams *v16; // rax
  CEndpointCharacteristics *v17; // rbx
  int EndpointId; // eax
  unsigned int v19; // ebx
  char v20; // r15
  char *v21; // rax
  char *v22; // rdi
  __int64 v23; // rdx
  LPVOID v24; // rbx
  void *v25; // rbx
  unsigned __int8 v26; // bl
  const char *v27; // r9
  char *v28; // rdx
  void **v29; // rbx
  _DWORD *v30; // r14
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  char v35; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int8 v36[7]; // [rsp+41h] [rbp-58h] BYREF
  void *v37; // [rsp+48h] [rbp-51h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-49h] BYREF
  StreamGroupParams *v39; // [rsp+58h] [rbp-41h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v40[2]; // [rsp+60h] [rbp-39h] BYREF
  void *v41; // [rsp+68h] [rbp-31h] BYREF
  struct _GUID v42; // [rsp+70h] [rbp-29h] BYREF
  char v43; // [rsp+80h] [rbp-19h]
  __int64 v44; // [rsp+90h] [rbp-9h]
  StreamGroupParams **v45; // [rsp+98h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]

  v44 = a4;
  LODWORD(v37) = a3;
  v40[0] = a2;
  v45 = a12;
  v13 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v13 > 4u )
  {
    if ( a11 )
      v16 = (StreamGroupParams *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a11 + 80LL))(a11);
    else
      v16 = 0LL;
    v39 = v16;
    v36[0] = a8;
    v35 = a7;
    *(_QWORD *)&v42.Data1 = a6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      (__int64)v13,
      byte_18019F9B1,
      v14,
      v15,
      (__int64 *)&v42,
      (__int64)&v35,
      (__int64)v36,
      (__int64)&v39);
  }
  pv = 0LL;
  v17 = *a1;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  EndpointId = CEndpointCharacteristics::GetEndpointId(v17, (unsigned __int16 **)&pv);
  v19 = EndpointId;
  if ( EndpointId >= 0 )
  {
    v41 = 0LL;
    *(_QWORD *)&v42.Data1 = &v41;
    *(_QWORD *)v42.Data4 = 0LL;
    v20 = 1;
    v43 = 1;
    v19 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v42.Data4);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v42);
    if ( (v19 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v19);
LABEL_32:
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v41,
        0LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      return v19;
    }
    v21 = (char *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v21;
    *(_QWORD *)&v42.Data1 = v21;
    if ( v21 )
    {
      memset_0(v21, 0, 0x60uLL);
      *(_QWORD *)v22 = 0LL;
      *((_QWORD *)v22 + 2) = 0LL;
      *((_QWORD *)v22 + 7) = 0LL;
      *((_QWORD *)v22 + 8) = 0LL;
      *((_QWORD *)v22 + 9) = 0LL;
      *((_QWORD *)v22 + 10) = 0LL;
      v22[88] = 0;
    }
    else
    {
      v22 = 0LL;
    }
    v39 = (StreamGroupParams *)v22;
    if ( !v22 )
    {
      v23 = 878LL;
LABEL_16:
      v19 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v39);
      goto LABEL_32;
    }
    v24 = pv;
    pv = 0LL;
    CoTaskMemFree(*(LPVOID *)v22);
    *(_QWORD *)v22 = v24;
    v22[49] = v40[0] == eKeywordDetectorConnector;
    v25 = v41;
    v41 = 0LL;
    CoTaskMemFree(*((LPVOID *)v22 + 2));
    *((_QWORD *)v22 + 2) = v25;
    *((_QWORD *)v22 + 3) = v44;
    *((struct _GUID *)v22 + 2) = *a6;
    v26 = a7;
    v22[48] = a7;
    v22[50] = a8;
    *((_DWORD *)v22 + 2) = (_DWORD)v37;
    if ( a11 )
    {
      v42 = *a6;
      if ( EffectPack::CanProcessingModeBeParameterized(a1[1], &v42, v40[0]) )
      {
        v28 = *(char **)(a11 + 616);
        if ( v28 )
        {
          wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
            &v37,
            v28,
            0xFFFFFFFFFFFFFFFFuLL,
            v27);
          v29 = (void **)(v22 + 80);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
            (_QWORD *)v22 + 10,
            &v37);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v37);
          if ( !*((_QWORD *)v22 + 10) )
          {
            v23 = 896LL;
            goto LABEL_16;
          }
        }
        else
        {
          v29 = (void **)(v22 + 80);
        }
        if ( !a10 || !*(_DWORD *)(*(_QWORD *)(a10 + 8) + 60LL) )
          v20 = 0;
        v22[88] = v20;
        std::vector<CProcessingModeParameters::AudioEffectState>::operator=(
          (char **)v22 + 7,
          (const void **)(a11 + 592));
        v30 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *v30 > 4u )
        {
          *(_QWORD *)&v42.Data1 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v22 + 8) - *((_QWORD *)v22 + 7)) >> 2);
          v35 = v22[88];
          v37 = *v29;
          *(_QWORD *)v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a11 + 80LL))(a11);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (int)v30,
            (int)&unk_18019F933,
            v31,
            v32,
            (__int64)v40,
            (const WCHAR **)&v37,
            (__int64)&v35,
            (__int64)&v42);
        }
        v26 = a7;
      }
    }
    std::unique_ptr<StreamGroupParams>::operator=<std::default_delete<StreamGroupParams>,0>(v45, &v39);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2), v26, v33, v44, v26, a8);
    }
    std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v39);
    v19 = 0;
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x368,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)EndpointId);
  if ( pv )
    CoTaskMemFree(pv);
  return v19;
}
