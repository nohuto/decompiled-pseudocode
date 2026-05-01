/*
 * XREFs of ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1804209D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180049054 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?IsValidWindow@@YA_NPEAUHWND__@@@Z @ 0x1801B3EE0 (-IsValidWindow@@YA_NPEAUHWND__@@@Z.c)
 *     ??4?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180418F60 (--4-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18041E830 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18041FE70 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180421CDC (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x180425B3C (-WindowWrapperFromWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall WindowEventDispatcher::OnShellHookMessage(
        RTL_SRWLOCK *this,
        unsigned __int64 a2,
        HWND a3,
        const char *a4)
{
  RTL_SRWLOCK **v7; // rcx
  __int64 result; // rax
  int PropW; // ebx
  __int64 *CachedView; // rax
  __int64 v11; // rbx
  int v12; // ebx
  __int64 *v13; // rax
  std::_Ref_count_base *v14; // rbx
  RTL_SRWLOCK *v15; // rcx
  __int64 *v16; // rax
  std::_Ref_count_base *v17[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v19; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v22; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v23; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    if ( a2 > 0x1A )
    {
      if ( a2 != 27 )
      {
        if ( a2 != 34 )
        {
          if ( ((a2 - 36) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
          {
            v21 = 0LL;
            Microsoft::WRL::Wrappers::SRWLock::LockShared(&v23, this + 49);
            v16 = (__int64 *)WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v22, a3);
            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)&v21, v16);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
            if ( v21 )
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), unsigned __int64))(*v21)[41])(
                v21,
                a2);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
          }
          goto LABEL_11;
        }
        wil::AcquireSRWLockExclusive(&v22, this + 49);
        WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v21, a3);
        if ( v21 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[42])(v21);
        goto LABEL_15;
      }
    }
    else if ( a2 != 26 )
    {
      if ( a2 == 17 )
      {
        PropW = (unsigned int)GetPropW(a3, L"Microsoft.Windows.WindowFactory.ViewId");
        if ( PropW )
        {
          *(_OWORD *)v17 = 0LL;
          v21 = 0LL;
          wil::AcquireSRWLockExclusive(&v23, this + 49);
          CachedView = WindowEventDispatcher::GetCachedView((__int64)&this[-10], (__int64 *)&v22, PropW);
          v11 = *wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=(
                   (__int64 *)&v21,
                   CachedView);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
          if ( v11 )
          {
            v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[32])(v21);
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HWND))(*v21)[26])(v21, a3);
            if ( ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v21)[32])(v21) != v12 )
            {
              v13 = (__int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), _BYTE *))(*v21)[33])(
                                 v21,
                                 v18);
              std::shared_ptr<KBViewInfo>::operator=(v17, v13);
              if ( v19 )
                std::_Ref_count_base::_Decref(v19);
            }
          }
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
          v14 = v17[0];
          if ( v17[0] )
          {
            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
              &v21,
              &v23);
            v15 = (RTL_SRWLOCK *)*((_QWORD *)v14 + 3);
            v22 = v15;
            if ( v15 )
              (*((void (__fastcall **)(RTL_SRWLOCK *))v15->Ptr + 1))(v15);
            WindowEventDispatcher::RaiseViewEvent(&this[-10], v23, 6LL, &v22, v17[0]);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
          if ( v17[1] )
            std::_Ref_count_base::_Decref(v17[1]);
        }
        goto LABEL_11;
      }
      if ( a2 != 18 )
      {
        if ( a2 != 19 && a2 != 23 && a2 != 25 )
          goto LABEL_11;
        goto LABEL_9;
      }
      if ( IsValidWindow(a3) )
        goto LABEL_11;
      wil::AcquireSRWLockExclusive(&v22, this + 49);
      WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v21, a3);
      if ( v21 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), _QWORD))(*v21)[26])(v21, 0LL);
LABEL_15:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
      v7 = &v22;
      goto LABEL_10;
    }
LABEL_9:
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v21, this + 49);
    WindowEventDispatcher::HandleForegroundWindow((WindowEventDispatcher *)&this[-10], a3);
    v7 = (RTL_SRWLOCK **)&v21;
LABEL_10:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v7);
LABEL_11:
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x190,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                     a4);
    return (unsigned int)v21;
  }
  return result;
}
