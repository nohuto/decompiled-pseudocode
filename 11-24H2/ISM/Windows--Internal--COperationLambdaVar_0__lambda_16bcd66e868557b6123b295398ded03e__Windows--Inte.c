/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_16bcd66e868557b6123b295398ded03e__Windows::Internal::CNoResult_::Run @ 0x180170F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA?AV?$AsyncDeferral@VCNoResult@Internal@Windows@@@12@AEAVCNoResult@12@@Z @ 0x180169538 (--$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA-AV-$AsyncDeferra.c)
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18016D72C (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_16bcd66e868557b6123b295398ded03e__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = a3;
  if ( a3 >= 0 )
    v4 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && v4 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = Windows::Internal::CResultBase::GetDeferral<Windows::Internal::CNoResult>(a4, v12, a4);
    MPCConstantManagerClient::CreateHRPrincipal(v6, &v11, v7);
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 248LL);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8);
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v9 + 8) + 40LL))(
           v9 + 8,
           *(unsigned int *)(a1 + 16),
           v11);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v11);
  }
  return (unsigned int)v4;
}
