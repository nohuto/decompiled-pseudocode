/*
 * XREFs of ?OverrideNavigationLevelForView@WindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x180420D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180421CDC (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall WindowEventDispatcher::OverrideNavigationLevelForView(RTL_SRWLOCK *a1, void (***a2)(void), int a3)
{
  void (*v6)(void); // rbx
  unsigned __int8 (__fastcall *v7)(__int64, __int64); // rax
  __int64 *v8; // rax
  RTL_SRWLOCK *v9; // rcx
  const char *v10; // r9
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+30h] [rbp-38h]
  char v13; // [rsp+38h] [rbp-30h]
  _BYTE v14[8]; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v15; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  RTL_SRWLOCK *v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v6 = **a2;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v17);
  try
  {
    v6();
    v7 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 312LL);
    if ( a3 == 2 )
    {
      if ( v7(v17, 1LL) )
      {
        v12 = &v17;
        v13 = 1;
        *(_OWORD *)v11 = 0LL;
        Microsoft::WRL::Wrappers::SRWLock::LockShared(&v18, a1 + 54);
        v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 264LL))(v17, v14);
        std::shared_ptr<KBViewInfo>::operator=(v11, v8);
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
        v9 = (RTL_SRWLOCK *)*((_QWORD *)v11[0] + 3);
        v18 = v9;
        if ( v9 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v9->Ptr + 1))(v9);
        WindowEventDispatcher::RaiseViewEvent(&a1[-5], a2, 7LL, &v18, v11[0]);
        if ( v11[1] )
          std::_Ref_count_base::_Decref(v11[1]);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 312LL))(v17, 2LL);
      }
    }
    else
    {
      v7(v17, 0LL);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x813,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v10);
  }
}
