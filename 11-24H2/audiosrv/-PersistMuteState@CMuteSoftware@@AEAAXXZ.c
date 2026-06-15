/*
 * XREFs of ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x180102904
 * Callers:
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x180102BC0 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_678fb27b68ec7c640ea64e1cc032af9e__void_::_Do_call @ 0x180103010 (std--_Func_impl_no_alloc__lambda_678fb27b68ec7c640ea64e1cc032af9e__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001E120 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18001E120.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     WPP_SF_Sl @ 0x18010306C (WPP_SF_Sl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMuteSoftware::PersistMuteState(CMuteSoftware *this)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v3; // eax
  __int64 v4; // rax
  int v5; // eax
  int v6; // r8d
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  __int64 *v16; // [rsp+90h] [rbp+40h] BYREF
  const WCHAR *v17; // [rsp+98h] [rbp+48h] BYREF

  if ( _InterlockedExchange((volatile __int32 *)this + 25, 0) )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_7f672c8107043d7bc81576871ecf25df_Traceguids,
        *((const wchar_t **)this + 4));
    }
    v16 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v16);
    v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 **))GetDevice)(
           g_DeviceEnumerator,
           *((_QWORD *)this + 4),
           &v16);
    if ( v3 >= 0 )
    {
      v15 = 0LL;
      v4 = *v16;
      v15 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v4 + 32))(v16, 1LL, &v15);
      if ( v5 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v12 = 0LL;
        LOWORD(pvar[0]) = 11;
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sl(*((_QWORD *)WPP_GLOBAL_Control + 2), 25, v6, *((_QWORD *)this + 4), *((_DWORD *)this + 6));
        }
        if ( *((_DWORD *)this + 6) )
          LOWORD(pvar[1]) = -1;
        else
          LOWORD(pvar[1]) = 0;
        (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 48LL))(
          v15,
          &PKEY_APO_MasterMute,
          pvar);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl) )
        {
          v7 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
          if ( *v7 > 4u && tlgKeywordOn((__int64)v7, 2LL) )
          {
            v14 = *((_DWORD *)this + 6);
            v17 = (const WCHAR *)*((_QWORD *)this + 4);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v8,
              byte_1801AD0AB,
              v9,
              v10,
              &v17,
              (__int64)&v14);
          }
        }
        PropVariantClear(pvar);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          937LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
          (const char *)(unsigned int)v5);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        934LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
        (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
  }
}
