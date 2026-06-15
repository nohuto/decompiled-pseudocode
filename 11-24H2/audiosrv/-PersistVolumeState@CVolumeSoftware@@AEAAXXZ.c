/*
 * XREFs of ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x180085DC0
 * Callers:
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x180114D30 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_ae578691215ccdc9894b78260bb740f3__void_::_Do_call @ 0x180115A10 (std--_Func_impl_no_alloc__lambda_ae578691215ccdc9894b78260bb740f3__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U_tlgWrapperPtrSize@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU_tlgWrapperPtrSize@@4@Z @ 0x18000471C (--$Write@U-$_tlgWrapSz@G@@U_tlgWrapperPtrSize@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_Sdg @ 0x1800C320C (WPP_SF_Sdg.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     ?UIntToUShort@@YAJIPEAG@Z @ 0x180115660 (-UIntToUShort@@YAJIPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CVolumeSoftware::PersistVolumeState(CVolumeSoftware *this)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v3; // eax
  __int64 v4; // rax
  int v5; // eax
  unsigned int i; // ebx
  float *v7; // rax
  __int64 v8; // rax
  __m128 v9; // xmm0
  _DWORD *v10; // rcx
  int v11; // edx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-39h]
  float *v16; // [rsp+40h] [rbp-19h] BYREF
  int v17; // [rsp+48h] [rbp-11h]
  unsigned __int16 *v18; // [rsp+50h] [rbp-9h] BYREF
  int v19; // [rsp+58h] [rbp-1h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp+7h] BYREF
  float *v21; // [rsp+70h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned __int16 v23; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 *v25; // [rsp+D0h] [rbp+77h] BYREF
  const WCHAR *v26; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( _InterlockedExchange((volatile __int32 *)this + 76, 0) )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        41LL,
        &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
        *((_QWORD *)this + 7));
    }
    v25 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v25);
    v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 **))GetDevice)(
           g_DeviceEnumerator,
           *((_QWORD *)this + 7),
           &v25);
    if ( v3 >= 0 )
    {
      v24 = 0LL;
      v4 = *v25;
      v24 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v4 + 32))(v25, 1LL, &v24);
      if ( v5 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v21 = 0LL;
        LOWORD(pvar[0]) = 65;
        LODWORD(pvar[1]) = 4 * *((_DWORD *)this + 29);
        v21 = (float *)CoTaskMemAlloc(LODWORD(pvar[1]));
        if ( v21 )
        {
          for ( i = 0; i < *((_DWORD *)this + 29); ++i )
          {
            v7 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 10,
                            i);
            v21[i] = fmaxf(fminf(v7[1], v7[3]), v7[2]);
            if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
              && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v8 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, i);
              v9 = (__m128)*(unsigned int *)(v8 + 4);
              v9.m128_f32[0] = fmaxf(fminf(v9.m128_f32[0], *(float *)(v8 + 12)), *(float *)(v8 + 8));
              WPP_SF_Sdg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                42,
                (unsigned int)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
                *((_QWORD *)this + 7),
                i,
                *(_OWORD *)&_mm_cvtps_pd(v9));
            }
          }
          (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v24 + 48LL))(
            v24,
            &PKEY_APO_MasterVolumeLevel,
            pvar);
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl) )
          {
            v23 = 0;
            if ( (int)UIntToUShort(*((_DWORD *)this + 29), &v23) >= 0 )
            {
              v10 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
              if ( *v10 > 4u && tlgKeywordOn((__int64)v10, 2LL) )
              {
                v16 = v21;
                v17 = (int)pvar[1];
                v18 = &v23;
                v19 = v11;
                v26 = (const WCHAR *)*((_QWORD *)this + 7);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
                  v12,
                  (int)&unk_1801ADE2A,
                  v13,
                  v14,
                  &v26,
                  (__int64 *)&v18,
                  (__int64 *)&v16);
              }
            }
          }
        }
        PropVariantClear(pvar);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x78A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
          (const char *)(unsigned int)v5,
          v15);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x787,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v3,
        v15);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
  }
}
