/*
 * XREFs of ?_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180070150
 * Callers:
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006F8AC (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180026624 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall HolographicPositioner::_IsPropertySetCallerProcessExplorer(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  HRESULT v2; // eax
  int v3; // edx
  __int64 v4; // r8
  bool v5; // bl
  int v7; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v8; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF

  v7 = 0;
  v8 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  string = 0LL;
  v2 = WindowsCreateStringReference(L"AAMShim.CallingProcessId", 0x18u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2, v3, v4);
    JUMPOUT(0x180070208LL);
  }
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v8, (__int64)string, v4, &v7) < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    return 0;
  }
  else
  {
    v5 = v7 == GetCurrentProcessId();
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    return v5;
  }
}
