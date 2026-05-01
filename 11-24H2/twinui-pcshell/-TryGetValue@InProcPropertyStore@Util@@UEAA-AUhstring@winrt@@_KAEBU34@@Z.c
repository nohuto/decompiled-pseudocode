/*
 * XREFs of ?TryGetValue@InProcPropertyStore@Util@@UEAA?AUhstring@winrt@@_KAEBU34@@Z @ 0x180651430
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x1801944F0 (--1-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180361AC4 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x1806475E0 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ?TryOpenKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x180652190 (-TryOpenKeyForHwnd@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall Util::InProcPropertyStore::TryGetValue(
        __int64 a1,
        winrt::hstring *a2,
        __int64 a3,
        winrt::hstring *a4)
{
  const WCHAR *v6; // rax
  const WCHAR *v7; // rax
  const unsigned __int16 *v8; // rbx
  unsigned int ValueW; // eax
  DWORD pcbData; // [rsp+40h] [rbp-40h] BYREF
  DWORD pdwType[3]; // [rsp+44h] [rbp-3Ch] BYREF
  HKEY hkey; // [rsp+50h] [rbp-30h] BYREF
  PVOID pvData; // [rsp+58h] [rbp-28h] BYREF
  int v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+68h] [rbp-18h]

  Util::TryOpenKeyForHwnd(&hkey, a3);
  if ( !hkey
    || (pcbData = 0,
        pdwType[0] = 0,
        v6 = winrt::hstring::c_str(a4),
        RegGetValueW(hkey, 0LL, v6, 2u, pdwType, 0LL, &pcbData)) )
  {
    winrt::hstring::hstring(a2, &::pvData);
  }
  else
  {
    std::make_unique<unsigned short [0],0>(&pvData, ++pcbData);
    v15 = 0;
    v16 = 0LL;
    v7 = winrt::hstring::c_str(a4);
    v8 = (const unsigned __int16 *)pvData;
    ValueW = RegGetValueW(hkey, 0LL, v7, 2u, 0LL, pvData, &pcbData);
    winrt::check_win32<unsigned long>((winrt::impl *)ValueW);
    v8[pcbData - 1] = 0;
    winrt::hstring::hstring(a2, v8);
    std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(&pvData);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
  return a2;
}
