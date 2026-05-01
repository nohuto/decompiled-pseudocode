/*
 * XREFs of ??$?4UIVirtualDesktopManagerInternal@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@UIVirtualDesktopManagerInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@UIVirtualDesktopManagerInternal@@Uerr_returncode_policy@wil@@@1@@Z @ 0x18018CE64
 * Callers:
 *     ?GetTombstonedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1801C1CD0 (-GetTombstonedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr.c)
 *     ?GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1802591F8 (-GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IVirtualDesktopManagerInternal,wil::err_exception_policy>::operator=<IVirtualDesktopManagerInternal,wil::err_returncode_policy,void>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi

  v3 = *a2;
  v4 = *a1;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
