/*
 * XREFs of ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x1803ED1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801910F0 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ?reset@?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801CEE34 (-reset@-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AX.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x1803ECCE0 (--$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveShellStressTool::HangAsync(
        ImmersiveShellStressTool *this,
        unsigned int a2,
        int a3,
        void *a4)
{
  __int64 v6; // rdi
  _DWORD *v8; // rax
  HANDLE CurrentProcess; // rbx
  HANDLE v10; // rax
  const char *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  const char *v15; // r9
  __int64 result; // rax
  __int128 lpTargetHandle; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v18; // [rsp+50h] [rbp-48h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+60h] [rbp-38h] BYREF
  __int64 v21; // [rsp+68h] [rbp-30h]
  __int64 v22; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    v6 = a2;
    lpTargetHandle = 0LL;
    if ( a4 )
    {
      _reset___shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__QEAAXPEAX_Z(
        &lpTargetHandle,
        0LL);
      if ( !(_QWORD)lpTargetHandle )
      {
        v8 = operator new(0x18uLL);
        v8[2] = 1;
        v8[3] = 1;
        *(_QWORD *)v8 = ___7___Ref_count_obj2_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___std__6B_;
        *((_QWORD *)v8 + 2) = 0LL;
        v18 = v8 + 4;
        v19 = (std::_Ref_count_base *)v8;
        std::shared_ptr<KBViewInfo>::operator=(&lpTargetHandle, (__int64 *)&v18);
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
      }
      CurrentProcess = GetCurrentProcess();
      v10 = GetCurrentProcess();
      if ( !DuplicateHandle(v10, a4, CurrentProcess, (LPHANDLE)lpTargetHandle, 0, 1, 2u) )
        wil::details::in1diag3::_Throw_GetLastError(
          retaddr,
          (void *)0x24,
          (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
          v11);
    }
    if ( (_DWORD)v6 )
    {
      v12 = *((_QWORD *)&lpTargetHandle + 1);
      do
      {
        v13 = *((_QWORD *)this + 2);
        v14 = *((_DWORD *)this + 6);
        v20 = a3;
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          v12 = *((_QWORD *)&lpTargetHandle + 1);
        }
        v21 = lpTargetHandle;
        v22 = v12;
        CreationThreadDispatcher::RunAsync<_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_>(v13, &v20, v14);
        --v6;
      }
      while ( v6 );
    }
    std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>((__int64)&lpTargetHandle);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x35,
                           (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
                           v15);
  }
  return result;
}
