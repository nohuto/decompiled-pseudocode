/*
 * XREFs of ?SwitchDesktopAndMoveForegroundView@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@@Z @ 0x180568570
 * Callers:
 *     ?SwitchDesktopAndMoveForegroundView@VirtualDesktopSwitchAnimator@@WBA@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@@Z @ 0x1805685C0 (-SwitchDesktopAndMoveForegroundView@VirtualDesktopSwitchAnimator@@WBA@EAAJPEAUIVirtualDesktop@@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@@Z0W4VirtualDesktopSwitchDirection@@0@Z @ 0x180567110 (--$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopMa.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::SwitchDesktopAndMoveForegroundView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = VirtualDesktopSwitchAnimator::AnimateOperation<IVirtualDesktop *>(
         a1 - 8,
         (__int64 (__fastcall *)(_QWORD, __int64)) IVirtualDesktopManagerPrivate::`vcall'{400,{flat}},
         a3,
         a4,
         a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x166,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
