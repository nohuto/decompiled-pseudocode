/*
 * XREFs of _lambda_d374574b1346a533c716a06f322522fa_::operator() @ 0x1803CDAC0
 * Callers:
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1803CFD98 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1803CF840 (-GetEdgeUIManager@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803D0564 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d374574b1346a533c716a06f322522fa_::operator()(__int64 a1)
{
  HMONITOR *v2; // rsi
  int IsTraySearchBoxVisible; // eax
  unsigned int v4; // ebx
  int EdgeUIManager; // eax
  __int64 v7; // rdx
  bool v8; // [rsp+20h] [rbp-30h] BYREF
  struct IEdgeUiManager *v9; // [rsp+28h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v8 = 0;
  v2 = *(HMONITOR **)(a1 + 8);
  IsTraySearchBoxVisible = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(
                             *(SearchAppDesktopExperienceView **)a1,
                             *v2,
                             &v8);
  v4 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible);
    return v4;
  }
  if ( v8 )
  {
    v10 = 0LL;
    v9 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
    EdgeUIManager = SearchAppDesktopExperienceView::GetEdgeUIManager(*(SearchAppDesktopExperienceView **)a1, *v2, &v9);
    v4 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v7 = 1759LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)EdgeUIManager);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
      return v4;
    }
    EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, __int128 *))(*(_QWORD *)v9 + 112LL))(v9, &v10);
    v4 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v7 = 1760LL;
      goto LABEL_9;
    }
    **(_DWORD **)(a1 + 16) = HIDWORD(v10) - DWORD1(v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  }
  return 0LL;
}
