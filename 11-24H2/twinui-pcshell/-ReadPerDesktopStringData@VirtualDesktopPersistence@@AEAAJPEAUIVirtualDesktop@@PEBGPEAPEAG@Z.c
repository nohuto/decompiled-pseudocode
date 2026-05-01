/*
 * XREFs of ?ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z @ 0x1800951C4
 * Callers:
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180094530 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x180095290 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualDesktopPersistence::ReadPerDesktopStringData(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4)
{
  int VirtualDesktopRegKeyName; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned __int16 **v10; // rdx
  unsigned __int16 *v11; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int16 v13[49]; // [rsp+50h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v12 = 0LL;
  v11 = 0LL;
  VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
                               this,
                               a2,
                               (unsigned __int16 (*)[49])v13);
  v8 = VirtualDesktopRegKeyName;
  if ( VirtualDesktopRegKeyName >= 0 )
  {
    v10 = &v11;
    LOBYTE(v10) = 1;
    result = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **, unsigned __int16 *, const unsigned __int16 *, int, unsigned __int16 **, __int64 *))(**((_QWORD **)this + 2) + 24LL))(
               *((_QWORD *)this + 2),
               v10,
               v13,
               a3,
               1,
               &v11,
               &v12);
    if ( (int)result >= 0 )
    {
      *a4 = v11;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)VirtualDesktopRegKeyName);
    return v8;
  }
  return result;
}
