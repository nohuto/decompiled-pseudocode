/*
 * XREFs of IsGamingFullScreenExperienceActive @ 0x18000DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800066F8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006714 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180008850 (--$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x18000D444 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     IsGamingFullScreenExperienceSupported @ 0x18000DC10 (IsGamingFullScreenExperienceSupported.c)
 *     __security_check_cookie @ 0x18000F280 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 IsGamingFullScreenExperienceActive()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  unsigned int v2; // ebx
  HRESULT v4; // eax
  int ActivationFactory; // eax
  unsigned int v6; // edi
  _BYTE v7[4]; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+24h] [rbp-44h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = 0;
  if ( !(unsigned int)IsGamingFullScreenExperienceSupported() )
    return 0LL;
  v8 = 0;
  if ( wil::try_wnf_query<unsigned long>(v0, &v8, v1) )
  {
    LOBYTE(v2) = v8 != 0;
    return v2;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
    return 0LL;
  v9 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(
         L"Windows.Internal.GamingExperiences.Posture.GamingPostureConfiguration",
         0x45u,
         &hstringHeader,
         &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    JUMPOUT(0x18000DC00LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_1822e102_f6d0_5879_a944_49964b222126, &v9);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\gamingexperience.cpp",
      (const char *)(unsigned int)ActivationFactory);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    return 0LL;
  }
  v7[0] = 0;
  if ( (*(int (__fastcall **)(_QWORD *, _BYTE *))(*v9 + 48LL))(v9, v7) < 0 || (v6 = 1, !v7[0]) )
    v6 = 0;
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v9 + 16LL))(v9, *v9);
  return v6;
}
