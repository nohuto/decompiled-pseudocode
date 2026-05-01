/*
 * XREFs of ?RemoveCurrentDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@0W4VirtualDesktopSwitchDirection@@@Z @ 0x180568290
 * Callers:
 *     ?RemoveCurrentDesktop@VirtualDesktopSwitchAnimator@@WBA@EAAJPEAUIVirtualDesktop@@0W4VirtualDesktopSwitchDirection@@@Z @ 0x1805682E0 (-RemoveCurrentDesktop@VirtualDesktopSwitchAnimator@@WBA@EAAJPEAUIVirtualDesktop@@0W4VirtualDeskt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@0@Z0W4VirtualDesktopSwitchDirection@@00@Z @ 0x180567214 (--$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDes.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::RemoveCurrentDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = VirtualDesktopSwitchAnimator::AnimateOperation<IVirtualDesktop *,IVirtualDesktop *>(a1 - 8, a2, a3, a4, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x187,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
