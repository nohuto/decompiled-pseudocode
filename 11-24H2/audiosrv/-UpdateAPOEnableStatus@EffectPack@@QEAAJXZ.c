/*
 * XREFs of ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x180138C40
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001180C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180005FF4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTem.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800060EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U-$_tlgWrapperB.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180031900 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180132CE0 (-AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x180134DB4 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall EffectPack::UpdateAPOEnableStatus(EffectPack *this)
{
  int v2; // esi
  _DWORD *v3; // r14
  bool v4; // di
  _DWORD *v5; // rcx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  void **v17; // rcx
  _DWORD *v18; // rcx
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v24; // [rsp+50h] [rbp-49h] BYREF
  void *v25; // [rsp+58h] [rbp-41h] BYREF
  __int64 *v26; // [rsp+60h] [rbp-39h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v28; // [rsp+78h] [rbp-21h]
  void *v29; // [rsp+80h] [rbp-19h] BYREF
  int v30[2]; // [rsp+88h] [rbp-11h] BYREF
  const WCHAR *v31; // [rsp+90h] [rbp-9h] BYREF
  const WCHAR *v32; // [rsp+98h] [rbp-1h] BYREF
  int v33[2]; // [rsp+A0h] [rbp+7h] BYREF
  PROPVARIANT *v34; // [rsp+A8h] [rbp+Fh]
  char v35; // [rsp+B0h] [rbp+17h]
  __int128 v36; // [rsp+B8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *(_OWORD *)pvar = 0LL;
  v28 = 0LL;
  v34 = pvar;
  v35 = 1;
  v2 = 1;
  v3 = (_DWORD *)((char *)this + 1492);
  while ( v2 < 4 )
  {
    v4 = 0;
    if ( *((_DWORD *)this + 377) )
      goto LABEL_50;
    if ( !*((_DWORD *)this + 376) )
      EffectPack::InitializeCriticalAPOMetadata(this);
    if ( !*v3 )
    {
LABEL_50:
      if ( !(unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(*((CEndpointCharacteristics **)this
                                                                                  + 198)) )
      {
        if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL) + 40LL))(
               *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
               &byte_1801DA780[20 * v2],
               pvar) >= 0
          && LOWORD(pvar[0]) == 19
          && LODWORD(pvar[1]) >= 0x64 )
        {
          v4 = 1;
        }
        else
        {
          PropVariantClear(pvar);
          if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL)
                                                                    + 40LL))(
                 *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
                 &byte_1801DA7D0[20 * v2],
                 pvar) >= 0
            && LOWORD(pvar[0]) == 19 )
          {
            v4 = LODWORD(pvar[1]) >= 0x64;
          }
        }
        PropVariantClear(pvar);
        if ( v4 )
        {
          v29 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &v29,
            0LL);
          mmdDevGetInstanceIdFromMMDeviceId(*(_QWORD *)(*((_QWORD *)this + 198) + 48LL), &v29);
          v5 = (_DWORD *)*((_QWORD *)this + 265);
          if ( *v5 > 4u && tlgKeywordOn((__int64)v5, 0x400000000100LL) )
          {
            LODWORD(v25) = v2;
            *(_QWORD *)v30 = v29;
            v36 = *(_OWORD *)*((_QWORD *)this + 196);
            v31 = (const WCHAR *)&v36;
            v32 = *(const WCHAR **)(*((_QWORD *)this + 198) + 48LL);
            *(_QWORD *)v33 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v6,
              (int)&unk_1801B031C,
              v7,
              v8,
              (__int64)v33,
              &v32,
              (__int64 *)&v31,
              (const WCHAR **)v30,
              (__int64)&v25);
          }
          v26 = 0LL;
          v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 198) + 40LL);
          v10 = *v9;
          v26 = 0LL;
          v11 = (*v10)(v9, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, (__int64 *)&v26);
          v12 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2C9,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v11);
LABEL_36:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
            v17 = &v29;
LABEL_44:
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v17);
            goto LABEL_47;
          }
          v24 = 0LL;
          v13 = *v26;
          v24 = 0LL;
          v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v13 + 40))(v26, 2LL, &v24);
          v12 = v14;
          if ( v14 < 0 )
          {
            v15 = 715LL;
LABEL_33:
            v16 = (unsigned int)v14;
LABEL_34:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v15,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)v16);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
            goto LABEL_36;
          }
          if ( !v24 )
          {
            v12 = -2147024894;
            v16 = 2147942402LL;
            v15 = 716LL;
            goto LABEL_34;
          }
          LOWORD(pvar[0]) = 19;
          LODWORD(pvar[1]) = 1;
          v14 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v24 + 48LL))(
                  v24,
                  &PKEY_AudioEndpoint_Disable_SysFx,
                  pvar);
          v12 = v14;
          if ( v14 < 0 )
          {
            v15 = 720LL;
            goto LABEL_33;
          }
          v14 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL)
                                                                         + 48LL))(
                  *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
                  &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
                  pvar);
          v12 = v14;
          if ( v14 < 0 )
          {
            v15 = 724LL;
            goto LABEL_33;
          }
          if ( !*(_QWORD *)(*((_QWORD *)this + 198) + 80LL) )
          {
            v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v26 + 40))(v26, 0LL);
            v12 = v14;
            if ( v14 < 0 )
            {
              v15 = 729LL;
              goto LABEL_33;
            }
          }
          PropVariantClear(pvar);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v29);
        }
      }
    }
    ++v2;
    ++v3;
  }
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(*((CEndpointCharacteristics **)this + 198))
    && (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(*((CEndpointCharacteristics **)this + 198)) )
  {
    v25 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v25,
      0LL);
    mmdDevGetInstanceIdFromMMDeviceId(*(_QWORD *)(*((_QWORD *)this + 198) + 48LL), &v25);
    v18 = (_DWORD *)*((_QWORD *)this + 265);
    if ( *v18 > 4u && tlgKeywordOn((__int64)v18, 0x400000000100LL) )
    {
      *(_QWORD *)v33 = v25;
      v36 = *(_OWORD *)*((_QWORD *)this + 196);
      v32 = (const WCHAR *)&v36;
      v31 = *(const WCHAR **)(*((_QWORD *)this + 198) + 48LL);
      *(_QWORD *)v30 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v19,
        (int)&unk_1801B0391,
        v20,
        v21,
        (__int64)v30,
        &v31,
        (__int64 *)&v32,
        (const WCHAR **)v33);
    }
    LOWORD(pvar[0]) = 19;
    LODWORD(pvar[1]) = 0;
    v22 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL) + 48LL))(
            *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
            &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
            pvar);
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F3,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v22);
      v17 = &v25;
      goto LABEL_44;
    }
    PropVariantClear(pvar);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v25);
  }
  v12 = 0;
LABEL_47:
  PropVariantClear(pvar);
  return v12;
}
