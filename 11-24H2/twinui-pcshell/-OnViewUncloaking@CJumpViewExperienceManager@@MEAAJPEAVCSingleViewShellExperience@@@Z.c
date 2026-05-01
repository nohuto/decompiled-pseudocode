/*
 * XREFs of ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180242690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180165044 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801F538C (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x1801FED08 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802B8504 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAA_NXZ @ 0x1803963BC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewUncloaking(HSTRING *this, ExperienceManagerUtils **a2)
{
  HWND v3; // rdi
  HSTRING v4; // r8
  __int64 v5; // rdx
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SSFJVTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SSFJVTest>::GetImpl'::`2'::impl) )
  {
    if ( !SetPropA(v3, "AttachToDesktop", HANDLE_FLAG_INHERIT) )
    {
      v5 = 633LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    if ( !SetPropA(v3, "NoWindowCallbacks", HANDLE_FLAG_INHERIT) )
    {
      v5 = 634LL;
      goto LABEL_4;
    }
  }
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       (Microsoft::WRL::Wrappers::Details *)this[45],
                       0LL,
                       v4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[45], 0LL);
    if ( !SetWindowTextW(v3, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x27E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        v8);
  }
  if ( this[14] )
    CSingleViewShellExperience::SetWindowBand((__int64)(this + 11));
  v9 = *((_DWORD *)this + 108);
  v10 = 92;
  if ( v9 )
  {
    v11 = v9 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          v10 = 90;
      }
      else
      {
        v10 = 88;
      }
    }
    else
    {
      v10 = 91;
    }
  }
  else
  {
    v10 = 89;
  }
  CSingleViewShellExperience::ShowBorder((__int64)(this + 11), 0);
  if ( *((_DWORD *)this + 109) == 3 )
  {
    v13 = DwmpBeginTransitionRequest(64LL);
    if ( v13 >= 0 )
    {
      v13 = DwmpEndTransitionRequest(64LL);
      if ( v13 >= 0 )
        goto LABEL_26;
      v14 = 672LL;
    }
    else
    {
      v14 = 670LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_26:
    v15 = CExperienceManagerAnimationHelper::Begin(this + 46, this[14], v10 | 0x200000u);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2A3,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
  }
  return 0LL;
}
