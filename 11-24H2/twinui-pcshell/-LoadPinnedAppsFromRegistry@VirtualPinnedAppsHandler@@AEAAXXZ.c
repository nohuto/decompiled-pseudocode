/*
 * XREFs of ?LoadPinnedAppsFromRegistry@VirtualPinnedAppsHandler@@AEAAXXZ @ 0x1802A6040
 * Callers:
 *     ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x1802A5FD0 (-RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIV.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x1802A60C8 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ??4?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180348A94 (--4-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualPinnedAppsHandler::LoadPinnedAppsFromRegistry(VirtualPinnedAppsHandler *this, __int64 a2)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-38h]
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0LL;
  v6 = 0LL;
  LOBYTE(a2) = 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int128 *))(**((_QWORD **)this + 7) + 48LL))(
         *((_QWORD *)this + 7),
         a2,
         L"PinnedApps",
         &v5);
  if ( (unsigned int)(v3 + 2147024894) > 1 )
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14A,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v3,
        v4);
    std::vector<std::wstring>::operator=((char *)this + 88, &v5);
  }
  std::vector<std::wstring>::_Tidy(&v5);
}
