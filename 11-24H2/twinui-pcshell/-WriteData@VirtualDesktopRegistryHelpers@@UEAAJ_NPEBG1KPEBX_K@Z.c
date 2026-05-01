/*
 * XREFs of ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x1801FD0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::WriteData(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        DWORD dwType,
        BYTE *a6,
        unsigned __int64 cbData)
{
  HKEY *v9; // r10
  HKEY *v10; // rax
  HKEY v11; // rbx
  HKEY *v12; // rax
  unsigned int KeyW; // eax
  __int64 v14; // rdx
  unsigned int v15; // ebx
  unsigned int lpData; // [rsp+20h] [rbp-28h]
  HKEY hKey[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 )
  {
    v10 = (HKEY *)((char *)this + 24);
    if ( !*((_QWORD *)this + 3) )
      return 0LL;
    v9 = (HKEY *)((char *)this + 16);
  }
  else
  {
    v9 = (HKEY *)((char *)this + 16);
    if ( !*((_QWORD *)this + 2) )
      return 0LL;
    v10 = (HKEY *)((char *)this + 24);
  }
  if ( !a2 )
    v10 = v9;
  hKey[0] = 0LL;
  v11 = *v10;
  if ( a3 )
  {
    v12 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(hKey);
    KeyW = RegCreateKeyW(v11, a3, v12);
    if ( KeyW )
    {
      v14 = 93LL;
LABEL_14:
      v15 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)v14,
              (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
              (const char *)KeyW,
              lpData);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
      return v15;
    }
    v11 = hKey[0];
  }
  KeyW = RegSetValueExW(v11, a4, 0, dwType, a6, cbData);
  if ( KeyW )
  {
    v14 = 100LL;
    goto LABEL_14;
  }
  if ( hKey[0] )
    RegCloseKey(hKey[0]);
  return 0LL;
}
