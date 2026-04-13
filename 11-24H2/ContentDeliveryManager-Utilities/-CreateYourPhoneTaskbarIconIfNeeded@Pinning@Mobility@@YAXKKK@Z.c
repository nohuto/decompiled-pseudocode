/*
 * XREFs of ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18002E784
 * Callers:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z @ 0x18002E760 (-CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18002941C (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039B10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003A644 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded(Mobility::Pinning *this, __int64 a2, __int64 a3)
{
  struct wil::details::IFunctorHost *v3; // r8
  const char *v4; // r9
  _DWORD v5[4]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-68h] BYREF
  DiagnosticsInfo v7; // [rsp+40h] [rbp-58h] BYREF
  const char *v8; // [rsp+48h] [rbp-50h]
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int16 v10; // [rsp+58h] [rbp-40h]
  _BYTE v11[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+74h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5[0] = (_DWORD)this;
  v5[1] = a2;
  v5[2] = a3;
  v7 = (DiagnosticsInfo)retaddr;
  v8 = "onecoreuap\\internal\\shell\\inc\\MobilityPinning.h";
  v9 = 0LL;
  v10 = 131;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl,
      a2,
      a3);
    v6[0] = &wil::details::functor_wrapper_void<_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_ &>::`vftable';
    v6[1] = v5;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v11, 16257538, &v7);
    wil::details::RunFunctor((wil::details *)v6, (struct wil::details::IFunctor *)v11, v3);
    if ( v12 )
      *(_DWORD *)(v12 + 16) = v13;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xBE,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      v4);
  }
}
