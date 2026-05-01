/*
 * XREFs of ?SwitchDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@@Z @ 0x180568500
 * Callers:
 *     ?SwitchDesktop@VirtualDesktopSwitchAnimator@@WBA@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@@Z @ 0x180568560 (-SwitchDesktop@VirtualDesktopSwitchAnimator@@WBA@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@@Z0W4VirtualDesktopSwitchDirection@@0@Z @ 0x180567110 (--$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopMa.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::SwitchDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 184) )
    return 0LL;
  v5 = VirtualDesktopSwitchAnimator::AnimateOperation<IVirtualDesktop *>(
         a1 - 8,
         (__int64 (__fastcall *)(_QWORD, __int64)) IVirtualDesktopManagerPrivate::`vcall'{392,{flat}},
         a3,
         a4,
         a2);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
