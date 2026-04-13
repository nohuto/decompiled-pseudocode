/*
 * XREFs of ?PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z @ 0x1800A5080
 * Callers:
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_62158d46a05af21ae3d227fe228597be_@@@details@wil@@UEAAJXZ @ 0x18009D4A0 (-Run@-$functor_wrapper_void@AEAV_lambda_62158d46a05af21ae3d227fe228597be_@@@details@wil@@UEAAJXZ.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18002941C (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003A644 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A554C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@QEAAX_N.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CreativeFramework::Actions::PinnedWebsiteManager::PinWebsite(
        CreativeFramework::Actions::PinnedWebsiteManager *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r9
  struct wil::details::IFunctorHost *v7; // r8
  const wchar_t *v8; // [rsp+20h] [rbp-39h] BYREF
  __int64 v9; // [rsp+28h] [rbp-31h] BYREF
  const wchar_t *v10; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-11h] BYREF
  struct DiagnosticsInfo v13; // [rsp+60h] [rbp+7h] BYREF
  const char *v14; // [rsp+68h] [rbp+Fh]
  const char *v15; // [rsp+70h] [rbp+17h]
  __int16 v16; // [rsp+78h] [rbp+1Fh]
  _BYTE v17[8]; // [rsp+80h] [rbp+27h] BYREF
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+3Bh]
  struct DiagnosticsInfo retaddr; // [rsp+B8h] [rbp+5Fh]

  v8 = a2;
  v10 = a3;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteActionV2>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetImpl'::`2'::impl,
    a2,
    a3,
    a4,
    v8,
    this,
    v10);
  v12[0] = &v8;
  v12[1] = &v9;
  v12[2] = &v10;
  v13 = retaddr;
  v14 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp";
  v15 = "Pin";
  v16 = 114;
  LOBYTE(v4) = 1;
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteActionV2>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetImpl'::`2'::impl,
    v5,
    v4,
    v6,
    v8,
    v9,
    v10);
  v11[0] = off_1800C9950;
  v11[1] = v12;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v17, 16419964, &v13);
  wil::details::RunFunctor((wil::details *)v11, (struct wil::details::IFunctor *)v17, v7);
  if ( v18 )
    *(_DWORD *)(v18 + 16) = v19;
}
