/*
 * XREFs of ?SetValue@InProcPropertyStore@Util@@UEAAX_KAEBUhstring@winrt@@1@Z @ 0x180650F30
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180361AC4 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?CreateKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x18064B030 (-CreateKeyForHwnd@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6A.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Util::InProcPropertyStore::SetValue(
        Util::InProcPropertyStore *this,
        __int64 a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4)
{
  const WCHAR *v6; // rax
  const BYTE *lpData; // rdx
  DWORD cbData; // r8d
  unsigned int v9; // eax
  const WCHAR *v10; // rax
  HKEY hKey; // [rsp+78h] [rbp+20h] BYREF

  Util::CreateKeyForHwnd(&hKey, a2);
  if ( *(_QWORD *)a4 )
  {
    winrt::hstring::c_str(a4);
    v6 = winrt::hstring::c_str(a3);
    v9 = RegSetValueExW(hKey, v6, 0, 1u, lpData, cbData);
LABEL_5:
    winrt::check_win32<unsigned long>((winrt::impl *)v9);
    goto LABEL_6;
  }
  v10 = winrt::hstring::c_str(a3);
  v9 = RegDeleteValueW(hKey, v10);
  if ( v9 && v9 != 2 )
    goto LABEL_5;
LABEL_6:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
}
