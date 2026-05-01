/*
 * XREFs of ?WindowRemoved@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180425900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x180416C34 (--$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     ?GetAppViewStatics@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18041E538 (-GetAppViewStatics@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIAppViewStatics@WindowManagement@A.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18041E830 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::WindowRemoved(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2)
{
  int v4; // eax
  __int64 *AppViewStatics; // rax
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, _QWORD **); // r15
  _QWORD *v8; // rcx
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v14[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h]
  _QWORD *v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0;
  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 80LL))();
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x65F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v4,
        v13);
    v18 = 0LL;
    AppViewStatics = WindowEventDispatcher::GetAppViewStatics((__int64)&this[-2], (__int64 *)v14);
    v6 = *AppViewStatics;
    v7 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, _QWORD **))(*(_QWORD *)*AppViewStatics + 120LL);
    v8 = v18;
    v18 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
    v9 = v7(v6, a2, &v18);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x662,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v14);
    v16 = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD *, int *))(*v18 + 48LL))(v18, &v16);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x665,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v13);
    wil::AcquireSRWLockExclusive(v14, this + 57);
    WindowEventDispatcher::GetCachedView((__int64)&this[-2], &v13, v16);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 224LL))(v13);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_OnWindowRemoved<unsigned int &>(&v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x672,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v11);
  }
  return result;
}
