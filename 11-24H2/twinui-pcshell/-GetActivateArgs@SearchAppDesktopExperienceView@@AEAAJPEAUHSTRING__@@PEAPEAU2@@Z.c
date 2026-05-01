/*
 * XREFs of ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803CF340
 * Callers:
 *     ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803D0660 (-MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803D2F90 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x1803D34C0 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B2D20 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1803CDFF0 (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1803CFD98 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::GetActivateArgs(
        SearchAppDesktopExperienceView *this,
        HSTRING string1,
        HSTRING *newString)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rax
  ExperienceManagerUtils *v9; // rsi
  unsigned int v10; // ebx
  int SearchBoxHeight; // r14d
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  const wchar_t *StringRawBuffer; // rax
  HMONITOR v16; // r8
  const wchar_t *v17; // rbx
  HMONITOR v18; // r8
  HSTRING newStringa; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  UINT32 length; // [rsp+30h] [rbp-20h] BYREF
  RECT rc; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  *newString = 0LL;
  v6 = *((float *)this + 45);
  rc.left = (int)v6;
  v7 = *((float *)this + 46);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 47));
  rc.bottom = (int)(float)(v7 + *((float *)this + 48));
  v8 = MonitorFromRect(&rc, 0);
  v9 = (ExperienceManagerUtils *)v8;
  if ( v8 )
  {
    SearchBoxHeight = SearchAppDesktopExperienceView::GetSearchBoxHeight(this, v8);
    WindowsDeleteString(0LL);
    string2 = 0LL;
    v12 = SearchAppDesktopExperienceView::BuildAdditionalArgsString(
            this,
            (HMONITOR)v9,
            (HMONITOR)(unsigned int)SearchBoxHeight,
            &string2);
    v10 = v12;
    if ( v12 >= 0 )
    {
      WindowsDeleteString(0LL);
      newStringa = 0LL;
      v13 = WindowsConcatString(string1, string2, &newStringa);
      v10 = v13;
      if ( v13 >= 0 )
      {
        v13 = WindowsDuplicateString(newStringa, newString);
        v10 = v13;
        if ( v13 >= 0 )
        {
          length = 0;
          StringRawBuffer = WindowsGetStringRawBuffer(newStringa, &length);
          v17 = StringRawBuffer;
          if ( StringRawBuffer )
            *((_BYTE *)this + 201) = wcsstr(StringRawBuffer, L"&QuerySource=StartButton") != 0LL;
          *((float *)this + 43) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                           (ExperienceManagerUtils *)0x140,
                                           v9,
                                           v16);
          if ( !wcsstr(v17, L"StartMode=QFSearchBox") && !wcsstr(v17, L"StartMode=NotificationAnimation") )
            SearchBoxHeight = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x290, v9, v18);
          *((float *)this + 44) = (float)SearchBoxHeight;
          WindowsDeleteString(newStringa);
          newStringa = 0LL;
          v10 = 0;
          goto LABEL_16;
        }
        v14 = 1227LL;
      }
      else
      {
        v14 = 1226LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v13);
      WindowsDeleteString(newStringa);
      newStringa = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
    }
LABEL_16:
    WindowsDeleteString(string2);
    return v10;
  }
  v10 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4C3,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL);
  return v10;
}
