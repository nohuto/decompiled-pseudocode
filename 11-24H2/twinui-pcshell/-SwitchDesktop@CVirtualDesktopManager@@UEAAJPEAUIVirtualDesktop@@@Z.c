/*
 * XREFs of ?SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805573E0
 * Callers:
 *     ?SwitchDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@@Z @ 0x180557480 (-SwitchDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z @ 0x180557490 (-SwitchDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180557F60 (-SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805577C4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::SwitchDesktop(CVirtualDesktopManager *this, struct IVirtualDesktop *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v8);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 32LL))(
         *((_QWORD *)this + 12),
         a2) )
  {
    v5 = CVirtualDesktopManager::SwitchDesktopInternalPrivate((char *)this - 8, a2, 0LL);
    v4 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x230,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v4 = -2147024809;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  return v4;
}
