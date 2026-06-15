/*
 * XREFs of ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18012DCD8
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1801010F0 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180005730 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180061BEC (-RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007576C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18012E2DC (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18012E98C (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015C850 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectPack::RefreshConnectorFormats(EffectPack *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int CustomResourceManagerService; // eax
  unsigned int v5; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edx
  const WCHAR *v8; // [rsp+30h] [rbp-40h] BYREF
  void *v9; // [rsp+38h] [rbp-38h] BYREF
  int v10[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( **((_DWORD **)this + 265) > 4u && tlgKeywordOn(*((_QWORD *)this + 265), 16LL) )
  {
    v8 = *(const WCHAR **)(*((_QWORD *)this + 198) + 48LL);
    *(_OWORD *)pvar = *(_OWORD *)*((_QWORD *)this + 196);
    *(_QWORD *)v10 = pvar;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      v2,
      (int)&unk_1801A46E8,
      v2,
      v3,
      (__int64 *)v10,
      &v8);
  }
  v9 = 0LL;
  CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                   *((CEndpointCharacteristics **)this + 198),
                                   &GUID_655e6959_84d5_43a4_b383_39d8f3094d70,
                                   &v9);
  v5 = CustomResourceManagerService;
  if ( CustomResourceManagerService >= 0 )
  {
    if ( v9 && (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v9 + 24LL))(v9) )
    {
      *(_OWORD *)pvar = 0LL;
      v13 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL) + 40LL))(
             *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
             &PKEY_Endpoint_IsBluetooth,
             pvar) >= 0
        && LOWORD(pvar[0]) == 11 )
      {
        if ( LOWORD(pvar[1]) )
        {
          LODWORD(v8) = 0;
          if ( (*(int (__fastcall **)(_QWORD, const WCHAR **))(**(_QWORD **)(*((_QWORD *)this + 198) + 40LL) + 48LL))(
                 *(_QWORD *)(*((_QWORD *)this + 198) + 40LL),
                 &v8) >= 0
            && (_DWORD)v8 == 1 )
          {
            MicrosoftTelemetryAssertTriggeredArgs(0LL, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
          }
        }
      }
      PropVariantClear(pvar);
    }
    else
    {
      (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
        g_policyConfigInternal,
        &v11,
        *(_QWORD *)(*((_QWORD *)this + 198) + 48LL));
      EffectPack::RefreshDefaultConnectorFormats(this, v6);
      EffectPack::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, 0LL, 0LL, 0);
      EffectPack::ResetDeviceFormat(this);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2340,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)CustomResourceManagerService);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  return v5;
}
