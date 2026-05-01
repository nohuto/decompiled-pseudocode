/*
 * XREFs of ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1801CD0C4
 * Callers:
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x18005F694 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800B1898 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1801CD1A8 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 */

__int64 __fastcall ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride(_DWORD *a1, __int64 a2)
{
  int v2; // esi
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  if ( !v2 )
    return 2147947423LL;
  v5 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(a1, a2, 1LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *a1 = v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (int)"Desktop\\internal\\Shell\\inc\\private\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
