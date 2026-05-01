/*
 * XREFs of _lambda_ed6e4afdce009112f6d3449055a9dabd_::operator() @ 0x1801F1D80
 * Callers:
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180483588 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180482F44 (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180483DF0 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 */

__int64 __fastcall lambda_ed6e4afdce009112f6d3449055a9dabd_::operator()(__int64 a1)
{
  HMONITOR *v2; // rsi
  int IsTraySearchBoxVisible; // eax
  unsigned int v4; // ebx
  int EdgeUIManager; // eax
  __int64 v7; // rdx
  bool v8; // [rsp+20h] [rbp-38h] BYREF
  struct IEdgeUiManager *v9; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v10[4]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+34h] [rbp-24h]
  int v12; // [rsp+3Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(HMONITOR **)(a1 + 8);
  IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                             *(CortanaDesktopExperienceView **)a1,
                             *v2,
                             &v8);
  v4 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible);
    return v4;
  }
  if ( v8 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
    EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(*(CortanaDesktopExperienceView **)a1, *v2, &v9);
    v4 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v7 = 2388LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)EdgeUIManager);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
      return v4;
    }
    EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, _BYTE *))(*(_QWORD *)v9 + 112LL))(v9, v10);
    v4 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v7 = 2389LL;
      goto LABEL_9;
    }
    **(_DWORD **)(a1 + 16) = v12 - v11;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  }
  return 0LL;
}
