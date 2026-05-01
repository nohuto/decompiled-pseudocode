/*
 * XREFs of ??$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x1802C50DC
 * Callers:
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A2A30 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AAE64 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806ACDF8 (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806AD568 (-StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x1806AD6A0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall wil::com_weak_query_failfast<VirtualDesktopSwitcherHost *>(
        __int64 *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(a1);
  *a1 = 0LL;
  v4 = *v3;
  v8 = 0LL;
  v5 = (*v4)(v3, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v8);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, a1);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7A0,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v5,
      1);
  return a1;
}
