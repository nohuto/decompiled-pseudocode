/*
 * XREFs of ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x1804417C0
 * Callers:
 *     ?AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x18043F7F0 (-AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x1804413CC (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x180441B70 (-RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804433A4 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Start@I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAI@Z @ 0x1800AAA3C (--$Start@I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA-AV01@$$QEAI@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180195DA0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_180195DA0.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180203F28 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     _lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_ @ 0x180224748 (_lambda_55084e4f2abaab1e6a5f5781ce063f25_--__lambda_55084e4f2abaab1e6a5f5781ce063f25_.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180224770 (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??$Start@I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAI@Z @ 0x1802ABCE8 (--$Start@I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA-AV01@$$QEAI@Z.c)
 *     _lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_ @ 0x1802C49B8 (_lambda_79917a46c0d9777cd1553539ded46aa9_--__lambda_79917a46c0d9777cd1553539ded46aa9_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_872651ef2fbed137a92f03ff9b7f61da_____lambda_872651ef2fbed137a92f03ff9b7f61da___ @ 0x18043AB38 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_872651ef2fbed.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a3222de221babd8ed80f71b88aa5d08_____lambda_9a3222de221babd8ed80f71b88aa5d08___ @ 0x18043AC04 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9a3222de221ba.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall WindowWrapperBase::ReconcileSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  int v2; // eax
  const char *v3; // r9
  HWND v4; // rbx
  bool v5; // cl
  int v6; // eax
  unsigned int v7; // r14d
  volatile signed __int32 **v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  int v11; // r14d
  unsigned int v12; // r14d
  volatile signed __int32 **v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rcx
  int v16; // r14d
  int v17; // [rsp+20h] [rbp-308h]
  volatile signed __int32 *v18; // [rsp+30h] [rbp-2F8h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-2F0h] BYREF
  volatile signed __int32 *v20[2]; // [rsp+40h] [rbp-2E8h] BYREF
  WindowWrapperBase *v21; // [rsp+50h] [rbp-2D8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-2D0h] BYREF
  void **v23; // [rsp+60h] [rbp-2C8h] BYREF
  DWORD v24; // [rsp+68h] [rbp-2C0h]
  void **v25; // [rsp+70h] [rbp-2B8h] BYREF
  _BYTE v26[336]; // [rsp+1C0h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  try
  {
    v2 = (*(__int64 (**)(void))(*(_QWORD *)this + 144LL))();
    v4 = (HWND)*((int *)this + 74);
    v5 = (unsigned int)(v2 - 3) <= 2;
    v6 = *((_DWORD *)this + 45);
    if ( (v6 & 1) != 0 && *((_DWORD *)this + 74) && v5 )
    {
      if ( (v6 & 2) == 0 )
      {
        LODWORD(v18) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::Start<unsigned int>(
          (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v26,
          (int *)&v18);
        dwProcessId = 0;
        if ( !GetWindowThreadProcessId(v4, &dwProcessId) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xAC5,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)0x80070578LL,
            v17);
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          v20,
          (__int64)this);
        v21 = this;
        wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
          &v22,
          (__int64 *)v20);
        v23 = (void **)v4;
        v24 = dwProcessId;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)&v25,
          (__int64)v26);
        v25 = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
        v7 = *((_DWORD *)this + 62);
        v8 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_872651ef2fbed137a92f03ff9b7f61da_____lambda_872651ef2fbed137a92f03ff9b7f61da___(
               &v18,
               (__int64)&v21);
        v9 = *v8;
        *v8 = 0LL;
        v10 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v10);
        }
        v11 = SHTaskPoolQueueTask(3LL, 2LL, v7);
        if ( v9 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xADB,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v11,
            (int)v9);
        lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_((__int64)&v21);
        *((_DWORD *)this + 45) |= 2u;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v20);
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v26);
      }
    }
    else if ( (v6 & 2) != 0 )
    {
      LODWORD(v18) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::Start<unsigned int>(
        (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v26,
        (int *)&v18);
      wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
        &v18,
        (__int64)this);
      v21 = this;
      wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
        &v22,
        (__int64 *)&v18);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)&v23,
        (__int64)v26);
      v23 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
      v12 = *((_DWORD *)this + 62);
      v13 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a3222de221babd8ed80f71b88aa5d08_____lambda_9a3222de221babd8ed80f71b88aa5d08___(
              v20,
              &v21);
      v14 = *v13;
      *v13 = 0LL;
      v15 = v20[0];
      if ( v20[0] )
      {
        v20[0] = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v15);
      }
      v16 = SHTaskPoolQueueTask(3LL, 2LL, v12);
      if ( v14 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAF2,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v16,
          (int)v14);
      lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_((__int64)&v21);
      *((_DWORD *)this + 45) &= ~2u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v26);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xAF7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v3);
  }
}
