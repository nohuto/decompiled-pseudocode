/*
 * XREFs of ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18001C920
 * Callers:
 *     ?PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ @ 0x1801D0B60 (-PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RemoveCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18001CC0C (-RemoveCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18001F010 (--$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QE.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18002387C (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180049054 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18017C6C0 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_18017C6C0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowRemoved(
        UwpWindowEventDispatcher *this,
        const struct Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextRemovedEventArgs *a2)
{
  RTL_SRWLOCK *v4; // rbx
  char *v5; // r14
  struct IUnknown **v6; // rax
  struct IUnknown *v7; // rdi
  const char *v8; // r9
  __int64 *v9; // rax
  __int64 v10; // r15
  std::_Ref_count_base *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v18; // [rsp+38h] [rbp-50h] BYREF
  std::_Ref_count_base *v19; // [rsp+40h] [rbp-48h]
  __int128 v20; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v22; // [rsp+98h] [rbp+10h] BYREF
  void *v23; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+20h] BYREF

  try
  {
    v4 = (RTL_SRWLOCK *)((char *)this + 472);
    v5 = (char *)this - 16;
    if ( *((_BYTE *)a2 + 4) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 59);
      v23 = v4;
      UwpWindowEventDispatcher::GetCachedView(v5, &v22, *(unsigned int *)a2);
      v16 = v22;
      if ( v22 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 216LL))(v22);
        v16 = v22;
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
    }
    else
    {
      v23 = 0LL;
      AcquireSRWLockExclusive((PSRWLOCK)this + 59);
      v24 = (__int64)v4;
      v6 = (struct IUnknown **)UwpWindowEventDispatcher::RemoveCachedView(v5, &v22, *(unsigned int *)a2);
      v7 = *v6;
      *v6 = 0LL;
      v23 = v7;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      if ( (unsigned int)SHIsSameObject(v7, *((struct IUnknown **)this + 57)) )
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((char *)this + 456);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      if ( v7 )
      {
        v20 = 0LL;
        AcquireSRWLockShared(v4);
        v22 = (__int64)v4;
        v9 = (__int64 *)((__int64 (__fastcall *)(struct IUnknown *, __int64 **))v7->lpVtbl[11].QueryInterface)(v7, &v18);
        v10 = *v9;
        v11 = (std::_Ref_count_base *)v9[1];
        *v9 = 0LL;
        v9[1] = 0LL;
        *(_QWORD *)&v20 = v10;
        *((_QWORD *)&v20 + 1) = v11;
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
        if ( v4 )
          ReleaseSRWLockShared(v4);
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
          &v23,
          &v17);
        v12 = *(_QWORD *)(v10 + 24);
        v22 = v12;
        if ( v12 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          v12 = v22;
        }
        v18 = &v22;
        v13 = v17;
        v24 = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        UwpWindowEventDispatcher::RaiseViewEventWithPropertySet(v5, v13, 4LL);
        Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v22);
        v14 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v7->lpVtbl[12].QueryInterface)(v7, &v22);
        v24 = ((__int64 (__fastcall *)(struct IUnknown *))v7->lpVtbl[11].AddRef)(v7);
        ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned short const *,unsigned int>(
          &v24,
          v14);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
      }
      if ( v7 )
        ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x324,
                     (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                     v8);
    return (unsigned int)v22;
  }
  return result;
}
