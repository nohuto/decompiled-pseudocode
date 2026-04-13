/*
 * XREFs of ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x18009CA70
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18002944C (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003A504 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800900AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::PinWebsiteToTaskbarService::Invoke(
        CreativeFramework::Actions::PinWebsiteToTaskbarService *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct wil::details::IFunctorHost *v4; // r8
  _QWORD v5[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v6; // [rsp+30h] [rbp-50h] BYREF
  const char *v7; // [rsp+38h] [rbp-48h]
  const char *v8; // [rsp+40h] [rbp-40h]
  __int16 v9; // [rsp+48h] [rbp-38h]
  _BYTE v10[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+64h] [rbp-1Ch]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+8h]
  CreativeFramework::Actions::PinWebsiteToTaskbarService *v14; // [rsp+90h] [rbp+10h] BYREF

  v14 = this;
  v6 = retaddr;
  v7 = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp";
  v8 = "Invoke";
  v9 = 126;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetImpl'::`2'::impl,
    1u,
    1u,
    a4);
  v5[0] = &wil::details::functor_wrapper_void<_lambda_62158d46a05af21ae3d227fe228597be_ &>::`vftable';
  v5[1] = &v14;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v10, 11790758, &v6);
  wil::details::RunFunctor((wil::details *)v5, (struct wil::details::IFunctor *)v10, v4);
  if ( v11 )
    *(_DWORD *)(v11 + 16) = v12;
}
