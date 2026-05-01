/*
 * XREFs of ?UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180424C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x1802CFC10 (-Shutdown@ConnectedStandbyHelper@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::UnsubscribeFromServices(
        WindowEventDispatcher *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  ConnectedStandbyHelper *v5; // rcx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v7; // eax
  int v8; // eax
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-28h]
  std::_Ref_count_base *v14[2]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 23);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    v5 = (ConnectedStandbyHelper *)*((_QWORD *)this + 28);
    if ( v5 )
    {
      ConnectedStandbyHelper::Shutdown(v5);
      *(_OWORD *)v14 = 0LL;
      std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 28, (__int64 *)v14);
      if ( v14[1] )
        std::_Ref_count_base::_Decref(v14[1]);
    }
    if ( *((_DWORD *)this + 85) )
    {
      v16 = 0LL;
      QueryService = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v16);
      v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
             a2,
             &IID_IImmersiveSessionIdleDetector,
             &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
             &v16);
      if ( v7 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, *((unsigned int *)this + 85));
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xCF,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v8);
        *((_DWORD *)this + 85) = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xCD,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v7);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    }
    if ( *((_DWORD *)this + 84) )
    {
      lpVtbl = a2->lpVtbl;
      v16 = 0LL;
      v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
              a2,
              &SID_ImmersiveShellHookService,
              &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
              &v16);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xD7,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v10,
          v13);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 32LL))(v16, *((unsigned int *)this + 84));
      *((_DWORD *)this + 84) = 0;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    }
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 24);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDF,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v11);
  }
  return result;
}
