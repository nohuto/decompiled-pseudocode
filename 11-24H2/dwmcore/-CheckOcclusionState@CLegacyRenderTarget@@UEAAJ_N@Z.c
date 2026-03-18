/*
 * XREFs of ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x180235580
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180102E70 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@WEI@EAAJ_N@Z @ 0x1802762B0 (-CheckOcclusionState@CLegacyRenderTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@WFA@EAAJ_N@Z @ 0x1802762C0 (-CheckOcclusionState@CLegacyRenderTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x18009A69C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18018A130 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x180243AA0 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x180243D5C (-GetPresentError@CLegacyRenderTarget@@AEBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::CheckOcclusionState(CLegacyRenderTarget *this, char a2)
{
  CLegacyRenderTarget *v2; // r14
  int v5; // eax
  unsigned int v6; // edi
  unsigned __int8 IsEnabled; // al
  int v8; // esi
  int PresentError; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h]

  v2 = (CLegacyRenderTarget *)((char *)this - 96);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 12) + 232LL))((char *)this - 96);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, v5, 0xB6u, 0LL);
LABEL_21:
    if ( v6 == -2003304442 )
    {
      if ( *((_QWORD *)this + 13) )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 8) + 232LL))((char *)this + 64);
      return 142213121;
    }
    return v6;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl);
  v8 = *((_DWORD *)this + 8268);
  if ( IsEnabled )
  {
    if ( v8 != 1 && *((_DWORD *)g_pComposition + 1615) && !a2 )
      return v6;
    PresentError = CLegacyRenderTarget::GetPresentError(v2);
    v16 = 0LL;
    v15 = g_hrNoHardwareDeviceOverride;
    v10 = *((_QWORD *)this + 13);
    g_hrNoHardwareDeviceOverride = PresentError;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 24) + 320LL))(v10 + 24);
    v6 = v11;
    if ( v11 >= 0 )
    {
      if ( v11 == 142213121 )
      {
        *((_DWORD *)this + 8268) = 1;
      }
      else
      {
        (*(void (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 48LL))(this);
        *((_DWORD *)this + 8268) = 2;
        *((_BYTE *)this + 33416) = 1;
        CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 64));
        v6 = 0;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, v11, 0xC3u, 0LL);
    }
    CFailFastError::~CFailFastError((CFailFastError *)&v15);
    goto LABEL_21;
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 48LL))(this);
    *((_BYTE *)this + 33416) = 1;
    if ( v8 == 1 )
      *((_DWORD *)this + 8268) = 2;
    return v6;
  }
  if ( v8 != 1 )
    return v6;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 320LL))(*((_QWORD *)this + 13) + 24LL);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803968C8, 4u, v12, 0xEAu, 0LL);
    goto LABEL_21;
  }
  if ( v12 != 142213121 )
  {
    v13 = *(_QWORD *)this;
    *((_DWORD *)this + 8268) = 2;
    (*(void (__fastcall **)(CLegacyRenderTarget *))(v13 + 48))(this);
    *((_BYTE *)this + 33416) = 1;
    CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 64));
    return 0;
  }
  return v6;
}
