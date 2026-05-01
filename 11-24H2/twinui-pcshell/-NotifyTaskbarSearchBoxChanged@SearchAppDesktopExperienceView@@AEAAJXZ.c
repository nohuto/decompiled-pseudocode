/*
 * XREFs of ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D0A70
 * Callers:
 *     ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803D1000 (-OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18038C020 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1803CFD98 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1803D0058 (-GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803D0564 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D0D9C (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Win.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180682848 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchAppDesktopExperienceView::NotifyTaskbarSearchBoxChanged(SearchAppDesktopExperienceView *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  ExperienceManagerUtils *v4; // rax
  HMONITOR v5; // r8
  HMONITOR v6; // rsi
  unsigned int SearchBoxHeight; // eax
  HMONITOR v8; // r8
  int StuckPlace; // ebx
  __int64 v10; // rdx
  HMONITOR v12; // rax
  int v13; // eax
  unsigned int v14; // r8d
  HSTRING_HEADER *v15; // rax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // r8
  int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // rdx
  HSTRING_HEADER *v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v22; // r8d
  HSTRING_HEADER *v23; // rax
  __int64 v24; // r8
  unsigned int v25; // r8d
  HSTRING_HEADER *v26; // rax
  __int64 v27; // r8
  bool v28; // [rsp+20h] [rbp-60h] BYREF
  bool v29; // [rsp+21h] [rbp-5Fh] BYREF
  POINT pt; // [rsp+28h] [rbp-58h] BYREF
  int v31; // [rsp+30h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v32; // [rsp+38h] [rbp-48h] BYREF
  RECT rc; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v35; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = *((float *)this + 45);
  rc.left = (int)v2;
  v3 = *((float *)this + 46);
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 47));
  rc.bottom = (int)(float)(v3 + *((float *)this + 48));
  v4 = (ExperienceManagerUtils *)MonitorFromRect(&rc, 0);
  v6 = (HMONITOR)v4;
  if ( v4 )
  {
    SearchBoxHeight = SearchAppDesktopExperienceView::GetSearchBoxHeight(this, v4, v5);
    ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)SearchBoxHeight, (int)v6, v8);
    v31 = 0;
    StuckPlace = SearchAppDesktopExperienceView::GetStuckPlace(this, v6, (enum EDGEUI_TRAYSTUCKPLACE *)&v31);
    if ( StuckPlace < 0 )
    {
      v10 = 2120LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
      return (unsigned int)StuckPlace;
    }
    v28 = 0;
    StuckPlace = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v6, &v28);
    if ( StuckPlace < 0 )
    {
      v10 = 2124LL;
      goto LABEL_4;
    }
    pt = 0LL;
    v12 = MonitorFromPoint(0LL, 1u);
    v29 = 0;
    StuckPlace = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v12, &v29);
    if ( StuckPlace < 0 )
    {
      v10 = 2130LL;
      goto LABEL_4;
    }
    v32 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v13 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v35,
            (__int64 *)&v32);
    StuckPlace = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x855,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v13);
LABEL_23:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      return (unsigned int)StuckPlace;
    }
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
      v32);
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D2A0,
            v14);
    v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            (HSTRING)v15[1].Reserved.Reserved1,
            v16);
    StuckPlace = v17;
    if ( v17 < 0 )
    {
      v19 = 2136LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pt);
      goto LABEL_23;
    }
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D238,
            v18);
    v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&pt,
            (HSTRING)v20[1].Reserved.Reserved1,
            v21);
    StuckPlace = v17;
    if ( v17 < 0 )
    {
      v19 = 2138LL;
      goto LABEL_22;
    }
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D230,
            v22);
    v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            &pt,
            (__int64)v23[1].Reserved.Reserved1,
            v24,
            v28);
    StuckPlace = v17;
    if ( v17 < 0 )
    {
      v19 = 2140LL;
      goto LABEL_22;
    }
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_18075D248,
            v25);
    v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            &pt,
            (__int64)v26[1].Reserved.Reserved1,
            v27,
            v29);
    StuckPlace = v17;
    if ( v17 < 0 )
    {
      v19 = 2142LL;
      goto LABEL_22;
    }
    v17 = SearchAppDesktopExperienceView::NotifyView(this, L"NotifyTaskbarSearchBoxChange", v32);
    StuckPlace = v17;
    if ( v17 < 0 )
    {
      v19 = 2144LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pt);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  }
  return 0LL;
}
