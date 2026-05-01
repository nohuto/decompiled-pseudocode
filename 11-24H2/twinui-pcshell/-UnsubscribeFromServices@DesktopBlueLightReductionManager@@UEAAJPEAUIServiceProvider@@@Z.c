/*
 * XREFs of ?UnsubscribeFromServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180312E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DesktopBlueLightReductionManager::UnsubscribeFromServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2,
        __int64 a3,
        const char *a4)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  struct IServiceProviderVtbl *lpVtbl; // rax
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v9; // eax
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    if ( *((_QWORD *)this + 16) )
    {
      if ( *((_DWORD *)this + 38) )
      {
        v13 = 0LL;
        QueryService = a2->lpVtbl->QueryService;
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v13);
        if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
               a2,
               &IID_IImmersiveWindowMessageService,
               &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
               &v13) >= 0 )
        {
          if ( *((_DWORD *)this + 38) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
          *((_DWORD *)this + 38) = 0;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      }
      if ( *((_DWORD *)this + 39) )
      {
        lpVtbl = a2->lpVtbl;
        v13 = 0LL;
        if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
               a2,
               &SID_IImmersiveMonitorService,
               &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
               &v13) >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, *((unsigned int *)this + 39));
          *((_DWORD *)this + 39) = 0;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      }
      if ( *((_DWORD *)this + 40) )
      {
        v13 = 0LL;
        v8 = a2->lpVtbl->QueryService;
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v13);
        if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
               a2,
               &IID_IImmersiveSessionIdleDetector,
               &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
               &v13) >= 0 )
        {
          if ( *((_DWORD *)this + 40) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
          *((_DWORD *)this + 40) = 0;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, _QWORD))(**((_QWORD **)this + 16) + 48LL))(
             *((_QWORD *)this + 16),
             a2,
             0LL);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC0,
          (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v9,
          v11);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC4,
                           (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           a4);
  }
  return result;
}
