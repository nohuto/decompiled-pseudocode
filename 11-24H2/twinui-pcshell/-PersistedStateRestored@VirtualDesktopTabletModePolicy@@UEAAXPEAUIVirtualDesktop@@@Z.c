/*
 * XREFs of ?PersistedStateRestored@VirtualDesktopTabletModePolicy@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x1802340A0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktopTabletModePolicy::PersistedStateRestored(
        VirtualDesktopTabletModePolicy *this,
        struct IVirtualDesktop *a2)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, char *); // rdi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 24) == 1 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a2);
    v3 = *((_QWORD *)this + 7);
    v4 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 432LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
    v5 = v4(v3, (char *)this + 88);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
        (const char *)(unsigned int)v5);
  }
}
