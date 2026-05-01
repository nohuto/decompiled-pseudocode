/*
 * XREFs of ?IsWideAtStartupEnabled@@YAEH@Z @ 0x180390F20
 * Callers:
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x1803905EC (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D1EB0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803DC1E0 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$ActivateInstance@UIUISettings2@ViewManagement@UI@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIUISettings2@ViewManagement@UI@1@@Z @ 0x18038DFCC (--$ActivateInstance@UIUISettings2@ViewManagement@UI@Windows@@@Foundation@Windows@@YAJPEAUHSTRING.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180390554 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall IsWideAtStartupEnabled(int a1)
{
  char v2; // di
  __int64 v3; // rbx
  int v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  double v7; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]

  v2 = 0;
  v6 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.ViewManagement.UISettings",
    0x25u,
    0x24u);
  v3 = v9;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  Windows::Foundation::ActivateInstance<Windows::UI::ViewManagement::IUISettings2>(v3, &v6);
  if ( v6
    && (v7 = DOUBLE_1_0, (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v6 + 48LL))(v6, &v7) >= 0)
    && v7 > 1.25
    || (v5 = 0, (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x38, &v5) >= 0)
    && a1 >= v5
    && (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x37, &v5) >= 0
    && v5 )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  return v2;
}
