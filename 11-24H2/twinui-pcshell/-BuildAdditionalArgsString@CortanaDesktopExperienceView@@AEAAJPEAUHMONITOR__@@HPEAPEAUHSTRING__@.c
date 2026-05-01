/*
 * XREFs of ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1803D7A60
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803D8E48 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@ZAEAW42@AEAJ@Z @ 0x18028CA38 (--0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x180365D60 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     ?GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x1803CF5C4 (-GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1803CF76C (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     _lambda_784ca26717ac27efef440615a0eafc39_::operator() @ 0x1803D72C4 (_lambda_784ca26717ac27efef440615a0eafc39_--operator().c)
 *     ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1803D9C64 (-GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803DA180 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180682848 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CortanaDesktopExperienceView::BuildAdditionalArgsString(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        HMONITOR a3,
        HSTRING *a4)
{
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  HSTRING Reserved1; // rbx
  HRESULT v10; // eax
  __int64 v11; // rdx
  CortanaDesktopExperienceView *v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r9d
  unsigned int v15; // ebx
  bool ColorPrevalenceEnabled; // al
  const wchar_t *v17; // rcx
  unsigned int v18; // r8d
  HSTRING_HEADER *v19; // rax
  HRESULT v20; // eax
  _QWORD *v21; // rax
  int v22; // eax
  const wchar_t *v23; // rax
  unsigned int v24; // r8d
  HSTRING_HEADER *v25; // rax
  HRESULT v26; // eax
  HRESULT StuckPlace; // eax
  __int64 v28; // rdx
  unsigned int v29; // r8d
  HSTRING v30; // rbx
  HRESULT v31; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  __int64 v33; // rdx
  const wchar_t *v34; // rax
  unsigned int v35; // r8d
  HSTRING_HEADER *v36; // rax
  HMONITOR v37; // rax
  HRESULT v38; // eax
  __int64 v39; // rdx
  const wchar_t *v40; // rax
  unsigned int v41; // r8d
  HSTRING_HEADER *v42; // rax
  __int64 v43; // rdx
  SearchAppDesktopExperienceView *v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // r9d
  bool AppsUseLightTheme; // al
  const wchar_t *v48; // rcx
  unsigned int v49; // r8d
  HSTRING_HEADER *v50; // rax
  HRESULT v51; // eax
  unsigned int v52; // r9d
  __int64 v53; // rdx
  int BOOLWithREGSAM; // eax
  unsigned int v55; // r8d
  int v56; // ecx
  const wchar_t *v57; // rax
  HSTRING_HEADER *v58; // rax
  bool v60[8]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v62; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string2; // [rsp+48h] [rbp-B8h] BYREF
  int v64[2]; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v65; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v66; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING v67; // [rsp+68h] [rbp-98h] BYREF
  HSTRING v68; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v69; // [rsp+78h] [rbp-88h] BYREF
  HSTRING string; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER v71; // [rsp+88h] [rbp-78h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING string1; // [rsp+C0h] [rbp-40h]
  WCHAR sourceString[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v75[76]; // [rsp+D4h] [rbp-2Ch] BYREF
  WCHAR v76[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v77[76]; // [rsp+124h] [rbp+24h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  *a4 = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, (int)a2, a3);
  *(_DWORD *)sourceString = 0;
  memset_0(v75, 0, 0x40uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, sourceString, v8)[1].Reserved.Reserved1;
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&SpeechTextInputHeight=", 0x18u, 0x17u);
  v10 = WindowsConcatString(string1, Reserved1, &string);
  v15 = v10;
  if ( v10 >= 0 )
  {
    newString = 0LL;
    ColorPrevalenceEnabled = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v12, v11, v13, v14);
    v17 = L"&ColorPrevalenceEnabled=true";
    if ( !ColorPrevalenceEnabled )
      v17 = L"&ColorPrevalenceEnabled=false";
    *(_QWORD *)v64 = v17;
    WindowsDeleteString(newString);
    newString = 0LL;
    v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, (const WCHAR **)v64, v18);
    v20 = WindowsConcatString(string, (HSTRING)v19[1].Reserved.Reserved1, &newString);
    v15 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x615,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v20);
LABEL_7:
      WindowsDeleteString(newString);
LABEL_52:
      newString = 0LL;
      goto LABEL_53;
    }
    v62 = 0LL;
    *(_QWORD *)v64 = a2;
    v60[0] = 0;
    v21 = _lambda_3de5d145e6ce0c9b4d563a35329ea675_::_lambda_3de5d145e6ce0c9b4d563a35329ea675_(
            &hstringHeader,
            (__int64)this,
            (__int64)v64,
            (__int64)v60);
    v22 = lambda_784ca26717ac27efef440615a0eafc39_::operator()((__int64)v21);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x71D,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v22);
    v23 = L"&PersonaOnlySupported=true";
    if ( !v60[0] )
      v23 = L"&PersonaOnlySupported=false";
    *(_QWORD *)v64 = v23;
    WindowsDeleteString(v62);
    v62 = 0LL;
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, (const WCHAR **)v64, v24);
    v26 = WindowsConcatString(newString, (HSTRING)v25[1].Reserved.Reserved1, &v62);
    v15 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v26);
LABEL_14:
      WindowsDeleteString(v62);
      v62 = 0LL;
      goto LABEL_7;
    }
    string2 = 0LL;
    v69 = 0;
    StuckPlace = CortanaDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v69);
    v15 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v28 = 1567LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)StuckPlace);
LABEL_18:
      WindowsDeleteString(string2);
      string2 = 0LL;
      goto LABEL_14;
    }
    *(_DWORD *)v76 = 0;
    memset_0(v77, 0, 0x40uLL);
    _o__itow_s(v69, v76, 34LL, 10LL);
    WindowsDeleteString(string2);
    string2 = 0LL;
    v30 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, v76, v29)[1].Reserved.Reserved1;
    string1 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&TaskbarOrientation=", 0x15u, 0x14u);
    StuckPlace = WindowsConcatString(string1, v30, &string2);
    v15 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v28 = 1570LL;
      goto LABEL_17;
    }
    v65 = 0LL;
    WindowsDeleteString(0LL);
    v65 = 0LL;
    v31 = WindowsConcatString(v62, string2, &v65);
    v15 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x625,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v31);
LABEL_23:
      WindowsDeleteString(v65);
      v65 = 0LL;
      goto LABEL_18;
    }
    v66 = 0LL;
    v60[0] = 0;
    IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, a2, v60);
    v15 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v33 = 1578LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)IsTraySearchBoxVisible);
LABEL_27:
      WindowsDeleteString(v66);
      v66 = 0LL;
      goto LABEL_23;
    }
    v34 = L"&SearchBoxInTaskbar=true";
    if ( !v60[0] )
      v34 = L"&SearchBoxInTaskbar=false";
    *(_QWORD *)v64 = v34;
    WindowsDeleteString(v66);
    v66 = 0LL;
    v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, (const WCHAR **)v64, v35);
    IsTraySearchBoxVisible = WindowsConcatString(v65, (HSTRING)v36[1].Reserved.Reserved1, &v66);
    v15 = IsTraySearchBoxVisible;
    if ( IsTraySearchBoxVisible < 0 )
    {
      v33 = 1580LL;
      goto LABEL_26;
    }
    v67 = 0LL;
    *(_QWORD *)v64 = 0LL;
    v37 = MonitorFromPoint(0LL, 1u);
    v60[0] = 0;
    v38 = CortanaDesktopExperienceView::IsTraySearchBoxVisible(this, v37, v60);
    v15 = v38;
    if ( v38 >= 0 )
    {
      v40 = L"&SearchBoxInTaskbarPrimaryMonitor=true";
      if ( !v60[0] )
        v40 = L"&SearchBoxInTaskbarPrimaryMonitor=false";
      *(_QWORD *)v64 = v40;
      WindowsDeleteString(v67);
      v67 = 0LL;
      v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, (const WCHAR **)v64, v41);
      v38 = WindowsConcatString(v66, (HSTRING)v42[1].Reserved.Reserved1, &v67);
      v15 = v38;
      if ( v38 >= 0 )
      {
        v68 = 0LL;
        AppsUseLightTheme = SearchAppDesktopExperienceView::GetAppsUseLightTheme(v44, v43, v45, v46);
        v48 = L"&AppsUseLightTheme=true";
        if ( !AppsUseLightTheme )
          v48 = L"&AppsUseLightTheme=false";
        *(_QWORD *)v64 = v48;
        WindowsDeleteString(v68);
        v50 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, (const WCHAR **)v64, v49);
        v51 = WindowsConcatString(v67, (HSTRING)v50[1].Reserved.Reserved1, &v68);
        v15 = v51;
        if ( v51 >= 0 )
        {
          v64[0] = 0;
          BOOLWithREGSAM = SHRegGetBOOLWithREGSAM(
                             HKEY_CURRENT_USER,
                             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
                             L"HideFileExt",
                             v52,
                             v64);
          v56 = v64[0];
          if ( BOOLWithREGSAM < 0 )
            v56 = 0;
          v57 = L"&HideFileExtensions=true";
          if ( !v56 )
            v57 = L"&HideFileExtensions=false";
          *(_QWORD *)v64 = v57;
          v58 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, (const WCHAR **)v64, v55);
          v51 = WindowsConcatString(v68, (HSTRING)v58[1].Reserved.Reserved1, a4);
          v15 = v51;
          if ( v51 >= 0 )
          {
            WindowsDeleteString(v68);
            v68 = 0LL;
            WindowsDeleteString(v67);
            v67 = 0LL;
            WindowsDeleteString(v66);
            v66 = 0LL;
            WindowsDeleteString(v65);
            v65 = 0LL;
            WindowsDeleteString(string2);
            string2 = 0LL;
            WindowsDeleteString(v62);
            v62 = 0LL;
            WindowsDeleteString(newString);
            v15 = 0;
            goto LABEL_52;
          }
          v53 = 1598LL;
        }
        else
        {
          v53 = 1594LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v53,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v51);
        WindowsDeleteString(v68);
        v68 = 0LL;
        goto LABEL_35;
      }
      v39 = 1589LL;
    }
    else
    {
      v39 = 1587LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v38);
LABEL_35:
    WindowsDeleteString(v67);
    v67 = 0LL;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x610,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
LABEL_53:
  WindowsDeleteString(string);
  return v15;
}
