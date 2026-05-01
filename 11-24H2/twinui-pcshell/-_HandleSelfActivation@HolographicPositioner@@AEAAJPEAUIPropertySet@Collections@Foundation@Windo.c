/*
 * XREFs of ?_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18040D454
 * Callers:
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040DEDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SelfActivation@HolographicPositionerTelemetry@@SAXXZ @ 0x18040B9A4 (-SelfActivation@HolographicPositionerTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_HandleSelfActivation(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v7,
    a2);
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Holographic.SelfActivation",
    0x1Bu,
    0x1Au);
  v3 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v7, v9, v2, 1);
  v5 = v3;
  if ( v3 >= 0 )
  {
    HolographicPositionerTelemetry::SelfActivation(v4);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F1,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  return v5;
}
