/*
 * XREFs of ?OnShellTrackedWindowPosChanged@KioskPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1804F2990
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z @ 0x1804F21F0 (-IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F2428 (-IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F24AC (-IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KioskPositioner::OnShellTrackedWindowPosChanged(
        KioskPositioner *this,
        HWND a2,
        struct IApplicationView *a3,
        __int64 a4,
        unsigned int a5)
{
  bool IsViewManaged; // al
  GamingPosturePositioner *v9; // rcx
  const char *v10; // r9
  KioskPositioner *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a5 & 0xFFFFFFFD) == 0 && a3 )
  {
    try
    {
      IsViewManaged = KioskPositioner::IsViewManaged((KioskPositioner *)((char *)this - 152), a3);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x3B6,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        v10);
      return;
    }
    if ( IsViewManaged
      && GamingPosturePositioner::IsWin32ApplicationView(v9, a3)
      && !KioskPositioner::IsOwnedAppWindow(v11, a2) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10), a2);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B4,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v12);
    }
  }
}
