/*
 * XREFs of ?DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x1801339EC
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180136B84 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180028F94 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x18002A614 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18003A68C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x18005CC64 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::DiscoverConnectorCapabilities(CEndpointCharacteristics *this)
{
  unsigned __int64 *v2; // r14
  int v3; // edi
  int v4; // eax
  int ConnectorSignalProcessingModes; // ebx
  int HostConnectorSignalProcessingModes; // ebx
  unsigned __int64 *v7; // rsi
  CAudioSignalProcessingModeArray *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  CAudioSignalProcessingModeArray *v11; // rax
  CAudioSignalProcessingModeArray *v12; // rax
  int v13; // edi
  __int64 v14; // rdx
  int v15; // ebx
  CAudioSignalProcessingModeArray *v16; // rax
  CAudioSignalProcessingModeArray *v17; // rax
  unsigned __int64 v18; // r9
  unsigned int v20; // [rsp+38h] [rbp-49h] BYREF
  struct _GUID *v21; // [rsp+40h] [rbp-41h] BYREF
  struct _GUID **v22; // [rsp+48h] [rbp-39h] BYREF
  struct _GUID *pv; // [rsp+50h] [rbp-31h] BYREF
  char v24; // [rsp+58h] [rbp-29h]
  PROPVARIANT pvar[3]; // [rsp+60h] [rbp-21h] BYREF
  struct _tagpropertykey v26; // [rsp+78h] [rbp-9h] BYREF
  __int128 v27; // [rsp+90h] [rbp+Fh] BYREF
  int v28; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = (unsigned __int64 *)((char *)this + 120);
  *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 15, 2uLL) = 0;
  *(_DWORD *)gsl::span<int,-1>::operator[](v2, 4uLL) = 0;
  v3 = -2147023728;
  v20 = 0;
  v21 = 0LL;
  memset(pvar, 0, sizeof(pvar));
  v27 = PKEY_ConnectorSpecific_SupportedProcessingModes;
  v28 = 2;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &v27,
         pvar);
  ConnectorSignalProcessingModes = v4;
  if ( v4 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 65 )
    {
      v20 = LODWORD(pvar[1]) >> 4;
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v21,
        pvar[2]);
      *(_OWORD *)&pvar[1] = 0LL;
      v3 = 0;
    }
    PropVariantClear(pvar);
    if ( (v3 >= 0
       || (v22 = &v21,
           pv = 0LL,
           v24 = 1,
           HostConnectorSignalProcessingModes = GetHostConnectorSignalProcessingModes(
                                                  *((struct IPropertyStore **)this + 9),
                                                  &v20,
                                                  &pv),
           wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v22),
           HostConnectorSignalProcessingModes >= 0))
      && v20 )
    {
      *(_DWORD *)gsl::span<int,-1>::operator[](v2, 0LL) = 1;
      v7 = (unsigned __int64 *)((char *)this + 216);
      v8 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                (unsigned __int64 *)this + 27,
                                                0LL);
      v9 = CAudioSignalProcessingModeArray::AddMultiple(v8, v20, v21);
      ConnectorSignalProcessingModes = v9;
      if ( v9 < 0 )
      {
        v10 = 2283LL;
LABEL_33:
        v18 = (unsigned int)v9;
LABEL_36:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v18);
        goto LABEL_37;
      }
    }
    else
    {
      *(_DWORD *)gsl::span<int,-1>::operator[](v2, 0LL) = 0;
      v7 = (unsigned __int64 *)((char *)this + 216);
      v11 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                 (unsigned __int64 *)this + 27,
                                                 0LL);
      v9 = CAudioSignalProcessingModeArray::AddMultiple(v11, 1u, &GUID_00000000_0000_0000_0000_000000000000);
      ConnectorSignalProcessingModes = v9;
      if ( v9 < 0 )
      {
        v10 = 2288LL;
        goto LABEL_33;
      }
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v21,
      0LL);
    v20 = 0;
    v26.fmtid.Data1 = 590439624;
    *(_DWORD *)&v26.fmtid.Data2 = 1283267372;
    *(_DWORD *)v26.fmtid.Data4 = 1907779772;
    *(_DWORD *)&v26.fmtid.Data4[4] = 1730509416;
    v26.pid = 1;
    v22 = &v21;
    pv = 0LL;
    v24 = 1;
    ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                       *((struct IPropertyStore **)this + 9),
                                       &v26,
                                       &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                       &v20,
                                       &pv);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v22);
    if ( ConnectorSignalProcessingModes < 0 )
    {
      if ( ConnectorSignalProcessingModes != -2147023728 )
      {
        v18 = (unsigned int)ConnectorSignalProcessingModes;
        v10 = 2310LL;
        goto LABEL_36;
      }
      *(_DWORD *)gsl::span<int,-1>::operator[](v2, 3uLL) = 0;
    }
    else
    {
      if ( !v20 )
        goto LABEL_37;
      v12 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v7, 3uLL);
      v13 = CAudioSignalProcessingModeArray::AddMultiple(v12, v20, v21);
      if ( v13 < 0 )
      {
        v14 = 2301LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13);
LABEL_17:
        ConnectorSignalProcessingModes = v13;
        goto LABEL_37;
      }
      *(_DWORD *)gsl::span<int,-1>::operator[](v2, 3uLL) = 1;
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v21,
      0LL);
    v20 = 0;
    v13 = 0;
    v15 = *(_DWORD *)gsl::span<int,-1>::operator[](v2, 0LL);
    *(_DWORD *)gsl::span<int,-1>::operator[](v2, 1uLL) = v15;
    if ( *(_DWORD *)gsl::span<int,-1>::operator[](v2, 1uLL) )
    {
      v22 = &v21;
      pv = 0LL;
      v24 = 1;
      v13 = GetConnectorSignalProcessingModes(
              *((struct IPropertyStore **)this + 9),
              &v26,
              &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
              &v20,
              &pv);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v22);
      if ( v13 < 0 )
      {
        if ( v13 != -2147023728 )
        {
          v14 = 2329LL;
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v20 )
          goto LABEL_17;
        v16 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v7, 1uLL);
        v9 = CAudioSignalProcessingModeArray::AddMultiple(v16, v20, v21);
        ConnectorSignalProcessingModes = v9;
        if ( v9 < 0 )
        {
          v10 = 2325LL;
          goto LABEL_33;
        }
      }
    }
    if ( *((_DWORD *)this + 59)
      || v13 == -2147023728
      || v20
      || (v17 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v7, 1uLL),
          v9 = CAudioSignalProcessingModeArray::AddMultiple(v17, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3),
          ConnectorSignalProcessingModes = v9,
          v9 >= 0) )
    {
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v21,
        0LL);
      return 0LL;
    }
    v10 = 2336LL;
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D6,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4);
  PropVariantClear(pvar);
LABEL_37:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v21,
    0LL);
  return (unsigned int)ConnectorSignalProcessingModes;
}
