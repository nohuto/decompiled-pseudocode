/*
 * XREFs of ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x18023EBE0
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18013E9A0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@WEI@EAAJ_N@Z @ 0x180280D20 (-CheckOcclusionState@CLegacyRenderTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@WFA@EAAJ_N@Z @ 0x180280D30 (-CheckOcclusionState@CLegacyRenderTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C2C90 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800C865C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAA_NXZ @ 0x18024A5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wi.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x18024C9D8 (--1CFailFastError@@QEAA@XZ.c)
 *     ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x18024CC94 (-GetPresentError@CLegacyRenderTarget@@AEBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v13; // eax
  __int64 v14; // rax
  int v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]

  v2 = (CLegacyRenderTarget *)((char *)this - 96);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 12) + 232LL))((char *)this - 96);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, v5, 0xB6u, 0LL);
LABEL_25:
    if ( v6 == -2003304442 )
    {
      if ( *((_QWORD *)this + 13) )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 8) + 232LL))((char *)this + 64);
      return 142213121;
    }
    return v6;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl);
  v8 = *((_DWORD *)this + 8364);
  if ( IsEnabled )
  {
    if ( v8 != 1 && *((_DWORD *)g_pComposition + 1621) && !a2 )
      return v6;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::GetImpl'::`2'::impl) )
    {
      PresentError = CLegacyRenderTarget::GetPresentError(v2);
      v17 = 0LL;
      v16 = g_hrNoHardwareDeviceOverride;
      v10 = *((_QWORD *)this + 13);
      g_hrNoHardwareDeviceOverride = PresentError;
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 24) + 320LL))(v10 + 24);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, v11, 0xC5u, 0LL);
      CFailFastError::~CFailFastError((CFailFastError *)&v16);
      if ( (v6 & 0x80000000) == 0 )
        goto LABEL_10;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 320LL))(*((_QWORD *)this + 13) + 24LL);
      v6 = v12;
      if ( v12 >= 0 )
      {
LABEL_10:
        if ( v6 == 142213121 )
        {
          *((_DWORD *)this + 8364) = 1;
          return v6;
        }
        (*(void (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 48LL))(this);
        *((_DWORD *)this + 8364) = 2;
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, v12, 0xC9u, 0LL);
    }
    goto LABEL_25;
  }
  if ( !a2 )
  {
    if ( v8 != 1 )
      return v6;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 320LL))(*((_QWORD *)this + 13) + 24LL);
    v6 = v13;
    if ( v13 >= 0 )
    {
      if ( v13 == 142213121 )
        return v6;
      v14 = *(_QWORD *)this;
      *((_DWORD *)this + 8364) = 2;
      (*(void (__fastcall **)(CLegacyRenderTarget *))(v14 + 48))(this);
LABEL_12:
      *((_BYTE *)this + 33800) = 1;
      CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 64));
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1888, 4u, v13, 0xF1u, 0LL);
    goto LABEL_25;
  }
  (*(void (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 48LL))(this);
  *((_BYTE *)this + 33800) = 1;
  if ( v8 == 1 )
    *((_DWORD *)this + 8364) = 2;
  return v6;
}
