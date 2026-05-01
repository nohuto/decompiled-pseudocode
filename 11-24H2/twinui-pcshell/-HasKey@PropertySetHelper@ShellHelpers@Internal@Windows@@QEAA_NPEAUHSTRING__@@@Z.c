/*
 * XREFs of ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1800CD78C
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18006E9E0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006F8AC (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 *     ?IsVoiceActivation@PositionerPropertySetHelpers@@YAJV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z @ 0x1800CD6D8 (-IsVoiceActivation@PositionerPropertySetHelpers@@YAJV-$ComPtr@UIPropertySet@Collections@Foundati.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180245020 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18040D068 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2)
{
  char v4; // di
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  char v11; // [rsp+40h] [rbp+20h] BYREF
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  v11 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  if ( !*(_QWORD *)this )
  {
LABEL_4:
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v4;
  }
  v5 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this)(
         *(_QWORD *)this,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v12);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v5);
    goto LABEL_4;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v12 + 64LL))(v12, a2, &v11);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (int)"onecore\\internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  }
  else
  {
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v11 )
      return 1;
  }
  return v4;
}
