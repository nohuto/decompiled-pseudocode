/*
 * XREFs of ?CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180553130
 * Callers:
 *     ?CreateDesktopW@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1805531B0 (-CreateDesktopW@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?CreateDesktopW@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1805531C0 (-CreateDesktopW@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180552FA0 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::CreateDesktopW(CVirtualDesktopManager *this, struct IVirtualDesktop **a2)
{
  int DesktopInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v8);
  DesktopInternal = CVirtualDesktopManager::CreateDesktopInternal(this, a2);
  v5 = DesktopInternal;
  if ( DesktopInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)DesktopInternal);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  return v5;
}
