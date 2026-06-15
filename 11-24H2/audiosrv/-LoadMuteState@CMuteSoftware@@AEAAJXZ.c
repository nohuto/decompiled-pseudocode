/*
 * XREFs of ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x18010230C
 * Callers:
 *     ?GetLevelData@CMuteSoftware@@MEAAJXZ @ 0x180101EE0 (-GetLevelData@CMuteSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?LoadMuteState_old@CMuteSoftware@@AEAAJXZ @ 0x180102400 (-LoadMuteState_old@CMuteSoftware@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMuteSoftware::LoadMuteState(CMuteSoftware *this)
{
  int v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-10h]
  __int64 v6; // [rsp+58h] [rbp+18h] BYREF
  __int64 v7; // [rsp+60h] [rbp+20h] BYREF

  v2 = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl) )
    return CMuteSoftware::LoadMuteState_old(this);
  v7 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *((_QWORD *)this + 4),
         &v7) >= 0 )
  {
    v6 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 0LL, &v6) >= 0 )
    {
      *(_OWORD *)pvar = 0LL;
      v5 = 0LL;
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(v6, &PKEY_APO_MasterMute, pvar);
      if ( LOWORD(pvar[0]) == 11 )
      {
        LOBYTE(v2) = LOWORD(pvar[1]) == 0xFFFF;
        *((_DWORD *)this + 6) = v2;
        *((_BYTE *)this + 96) = 1;
      }
      PropVariantClear(pvar);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  return 0LL;
}
