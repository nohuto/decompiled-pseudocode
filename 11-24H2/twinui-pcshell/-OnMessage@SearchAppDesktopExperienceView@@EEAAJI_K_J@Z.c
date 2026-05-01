/*
 * XREFs of ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1803D0E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x1803CF5C4 (-GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1803CF76C (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x1803D0428 (-IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D0D9C (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 *     ?OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803D109C (-OnTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnMessage(
        SearchAppDesktopExperienceView *this,
        int a2,
        char *a3,
        const WCHAR *a4)
{
  char *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rdx
  CortanaDesktopExperienceView *v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r9d
  char ColorPrevalenceEnabled; // bl
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  SearchAppDesktopExperienceView *v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r9d
  __int64 v23; // rdx
  char AppsUseLightTheme; // bl
  unsigned int v25; // r8d
  HSTRING_HEADER *v26; // rax
  __int64 v27; // r8
  __int64 v28; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v31; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  if ( a2 != 1025 )
  {
    if ( a2 != 26 || !CImmersiveColor::IsColorSchemeChangeMessage(26, a4) )
      return 0LL;
    v29 = 0LL;
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v31,
           (__int64 *)&v29);
    v7 = v9;
    if ( v9 >= 0 )
    {
      Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
        v29);
      ColorPrevalenceEnabled = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v11, v10, v12, v13);
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const WCHAR **)&off_18075D290,
              v15);
      v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
              &v28,
              (__int64)v16[1].Reserved.Reserved1,
              v17,
              ColorPrevalenceEnabled);
      v7 = v18;
      if ( v18 >= 0 )
      {
        AppsUseLightTheme = SearchAppDesktopExperienceView::GetAppsUseLightTheme(v20, v19, v21, v22);
        v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)&off_18075D2A8,
                v25);
        v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                &v28,
                (__int64)v26[1].Reserved.Reserved1,
                v27,
                AppsUseLightTheme);
        v7 = v18;
        if ( v18 >= 0 )
        {
          v18 = SearchAppDesktopExperienceView::NotifyView(
                  (SearchAppDesktopExperienceView *)((char *)this - 32),
                  L"NotifyThemeChange",
                  v29);
          v7 = v18;
          if ( v18 >= 0 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
            return 0LL;
          }
          v23 = 688LL;
        }
        else
        {
          v23 = 686LL;
        }
      }
      else
      {
        v23 = 685LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2AA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    return v7;
  }
  v5 = (char *)this - 32;
  if ( a3 == v5 )
  {
    v6 = SearchAppDesktopExperienceView::OnTargetedMessage(v5, (unsigned __int16)a4, (unsigned __int64)a4 >> 16);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  return 0LL;
}
