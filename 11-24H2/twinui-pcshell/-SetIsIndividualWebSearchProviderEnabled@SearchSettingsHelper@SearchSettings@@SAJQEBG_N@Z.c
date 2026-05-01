/*
 * XREFs of ?SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z @ 0x1803BFA84
 * Callers:
 *     _lambda_d3a26e949cca22f756fde8979863d6a4_::operator() @ 0x1803B6938 (_lambda_d3a26e949cca22f756fde8979863d6a4_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z @ 0x1803C0CCC (-TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchSettings::SearchSettingsHelper::SetIsIndividualWebSearchProviderEnabled(
        LPCWSTR lpValueName,
        char a2)
{
  HKEY *v3; // rax
  int HKCU; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int lpData; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int Data; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(Data) = a2;
  hKey = 0LL;
  v3 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  HKCU = SearchSettings::SearchSettingsHelper::TryGetHKCU(v3);
  if ( HKCU < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x230,
      (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
      (const char *)(unsigned int)HKCU,
      lpData);
  Data = 1;
  v5 = RegSetKeyValueW(
         hKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
         lpValueName,
         4u,
         &Data,
         4u);
  if ( v5 )
  {
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x233,
           (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
           (const char *)v5);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return v6;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return 0LL;
  }
}
