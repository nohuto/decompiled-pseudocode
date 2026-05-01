/*
 * XREFs of ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18055DE10
 * Callers:
 *     wil::details::ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___::_ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___ @ 0x18055CAC8 (wil--details--ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___--_ScopeExitFn__lambda_3d7c.c)
 *     ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18055DCE0 (-CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?CancelTouchSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18055DD80 (-CancelTouchSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18055F830 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18055F920 (-FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18056105C (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@QEAAXPEAVVirtualDesktopGestureContext@@@Z @ 0x1801520F4 (-reset@-$unique_ptr@VVirtualDesktopGestureContext@@U-$default_delete@VVirtualDesktopGestureConte.c)
 *     ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x1805637DC (-Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktopGestureHandler::Cleanup(VirtualDesktopGestureHandler *this, int a2)
{
  VirtualDesktopGestureContext **v2; // rbx
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (VirtualDesktopGestureContext **)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  if ( v3 && (!a2 || a2 == *(_DWORD *)(v3 + 180)) )
  {
    v6 = 0LL;
    v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
    v5 = *v4;
    v6 = 0LL;
    (*v5)(v4, &GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d, &v6);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 328LL))(v6, 0LL);
    VirtualDesktopGestureContext::Uninitialize(*v2);
    wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::reset(v2, 0LL);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
  }
}
