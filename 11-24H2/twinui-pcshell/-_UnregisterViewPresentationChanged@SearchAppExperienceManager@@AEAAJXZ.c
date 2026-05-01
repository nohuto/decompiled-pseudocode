/*
 * XREFs of ?_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x1803AD4F0
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803AC8B0 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 *     ?_RegisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x1803AD1AC (-_RegisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppExperienceManager@@AEAAJAEAV?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1803AA540 (--$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppEx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::_UnregisterViewPresentationChanged(SearchAppExperienceManager *this)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 56);
  if ( v1 )
  {
    *((_QWORD *)this + 56) = 0LL;
    v7 = 0LL;
    v2 = SearchAppExperienceManager::_GetViewWrapperAs<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64)this,
           &v7);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1230LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
      return v3;
    }
    v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 88LL))(v7, v1);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1231LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  }
  return 0LL;
}
