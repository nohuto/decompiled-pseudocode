/*
 * XREFs of ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x1802BFFEC
 * Callers:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x18004CBE8 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 * Callees:
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AAA8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010EB80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@Q.c)
 *     ?IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18023620C (-IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

char __fastcall Windows::Internal::Shell::UwpWindowLifecycleManagement::ShouldMoveUWLMIntoShellProcess(
        Windows::Internal::Shell::UwpWindowLifecycleManagement *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  char v3; // bl
  bool v4; // di
  Windows::Internal::ApplicationModel::WindowManagement *v5; // rcx
  Windows::Internal::ApplicationModel::WindowManagement *v6; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v8, 0LL);
  v3 = 1;
  v4 = v8 == 3 || v8 == 9;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::GetImpl'::`2'::impl,
    1u,
    v1,
    v2);
  if ( !v4
    || !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v5)
    || !Windows::Internal::ApplicationModel::WindowManagement::IsViewManagerPhaseoutEnabled(v6) )
  {
    return 0;
  }
  return v3;
}
