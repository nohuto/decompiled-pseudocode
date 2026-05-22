/*
 * XREFs of ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x18017B210
 * Callers:
 *     _lambda_b2f25491a96761d2c95f2464bc62d8e1_::_lambda_invoker_cdecl_ @ 0x180177BA0 (_lambda_b2f25491a96761d2c95f2464bc62d8e1_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180179368 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180039878 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801325D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1801791D4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x180179BAC (-NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ.c)
 */

void __fastcall ControllerProcessor::UpdateControllerNavigationMode(ControllerProcessor *this)
{
  const char *v2; // r9
  bool v3; // zf
  LONG x; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct tagPOINT pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBC5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      v2);
  pvData.x = 0;
  pcbData = 4;
  v3 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
         L"Enabled",
         0x10u,
         0LL,
         &pvData,
         &pcbData) == 0;
  x = 1;
  if ( v3 )
    x = pvData.x;
  if ( x )
  {
    ControllerProcessor::GetCursorPosition(this, &pvData);
    ControllerProcessor::NavigationEnableGlobally(this);
  }
  else if ( *((_DWORD *)this + 70) != 2 )
  {
    ControllerProcessor::UpdateNavigationState((__int64)this, 2, 0LL, 0LL);
  }
}
