/*
 * XREFs of ?AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180049054 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180418F60 (--4-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041E8B8 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@U_ea_18041E8B8.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1804206D0 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180421CDC (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowEventDispatcher::AppViewConsolidateRequested(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewRequestEventArgs *a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  int v6; // eax
  RTL_SRWLOCK *v7; // rdi
  __int64 *CachedView; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 *v10; // rax
  RTL_SRWLOCK *v11; // rcx
  const char *v12; // r9
  __int64 result; // rax
  RTL_SRWLOCK *v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v16; // [rsp+30h] [rbp-28h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v17; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v18[2]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // [rsp+70h] [rbp+18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  v22 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 48);
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x575,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5,
        (int)v14);
    v20 = 0;
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v22 + 48LL))(
           v22,
           &v20);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x578,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        (int)v14);
    v17 = 0LL;
    if ( !IsComponentAppViewAndGetKindAndModel(
            v22,
            (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)&v21,
            &v17) )
    {
      v21 = 0LL;
      *(_OWORD *)v18 = 0LL;
      Microsoft::WRL::Wrappers::SRWLock::LockShared(&v14, this + 57);
      v7 = this - 2;
      CachedView = (__int64 *)WindowEventDispatcher::GetCachedView(&this[-2], &v15, v20);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)&v21, CachedView);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
      v9 = v21;
      if ( v21 )
      {
        v10 = (__int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *))(*v21)[33])(
                           v21,
                           &v15);
        std::shared_ptr<KBViewInfo>::operator=(v18, v10);
        if ( v16 )
          std::_Ref_count_base::_Decref(v16);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
      if ( v9 )
      {
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
          &v21,
          &v15);
        v11 = (RTL_SRWLOCK *)*((_QWORD *)v18[0] + 3);
        v14 = v11;
        if ( v11 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v11->Ptr + 1))(v11);
        WindowEventDispatcher::RaiseViewEvent(v7, v15, 35LL, &v14, v14);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
      }
      if ( v18[1] )
        std::_Ref_count_base::_Decref(v18[1]);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x594,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v12);
  }
  return result;
}
