/*
 * XREFs of s_SetDwmAttributes @ 0x18074D064
 * Callers:
 *     s_OnDrawItemHelper @ 0x18028640C (s_OnDrawItemHelper.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115270 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?IsHighContrast@@YAHXZ @ 0x18019CA9C (-IsHighContrast@@YAHXZ.c)
 */

int __fastcall s_SetDwmAttributes(LPARAM a1, LPARAM a2, __int64 a3, __int64 a4)
{
  int result; // eax
  LPARAM lParam[3]; // [rsp+20h] [rbp-18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  result = IsHighContrast();
  if ( !result )
  {
    lParam[0] = a1;
    lParam[1] = a2;
    return EnumWindows((WNDENUMPROC)lambda_f97821db548955ab18e7e47d757b5d74_::_lambda_invoker_cdecl_, (LPARAM)lParam);
  }
  return result;
}
