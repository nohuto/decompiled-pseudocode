/*
 * XREFs of ?AddKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x18054EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x18021E508 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::AddKey(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3)
{
  unsigned __int8 v4; // dl
  __int64 v5; // rcx
  HKEY v7; // rbx
  HKEY *v8; // rax
  unsigned int KeyW; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HKEY v12; // [rsp+48h] [rbp+20h] BYREF

  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(this, a2) )
    return 0LL;
  v12 = 0LL;
  v7 = *(HKEY *)(v5 + 8LL * v4 + 16);
  v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v12);
  KeyW = RegCreateKeyW(v7, a3, v8);
  if ( KeyW )
    v10 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0xA3,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
            (const char *)KeyW);
  else
    v10 = 0;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v12);
  return v10;
}
