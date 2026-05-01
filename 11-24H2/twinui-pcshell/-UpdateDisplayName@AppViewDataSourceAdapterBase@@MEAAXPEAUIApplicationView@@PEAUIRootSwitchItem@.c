/*
 * XREFs of ?UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18002A0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800298D4 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapterBase::UpdateDisplayName(
        AppViewDataSourceAdapterBase *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        unsigned __int16 **a3)
{
  int ViewTitle; // eax
  WCHAR *v5; // rbx
  __int64 v6; // rdx
  HRESULT v7; // eax
  int v8; // eax
  PCNZWCH sourceString; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING string; // [rsp+78h] [rbp+38h] BYREF

  sourceString = 0LL;
  v10 = -1LL;
  v11 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, (unsigned __int16 **)&sourceString, a3);
  if ( ViewTitle < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF6,
      (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)ViewTitle,
      (int)sourceString);
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = (WCHAR *)sourceString;
  LODWORD(v6) = v10;
  if ( v10 == -1 )
  {
    if ( sourceString )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( sourceString[v6] );
    }
    else
    {
      v6 = 0LL;
    }
    v10 = v6;
  }
  v7 = WindowsCreateString(sourceString, v6, &string);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF8,
      (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v7,
      (int)sourceString);
  v8 = (*((__int64 (__fastcall **)(unsigned __int16 **, HSTRING))*a3 + 6))(a3, string);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF9,
      (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v8,
      (int)sourceString);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v5 )
    CoTaskMemFree(v5);
}
