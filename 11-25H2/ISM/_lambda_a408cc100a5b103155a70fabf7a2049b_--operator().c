/*
 * XREFs of _lambda_a408cc100a5b103155a70fabf7a2049b_::operator() @ 0x18016B69C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult_::Run @ 0x1801701B0 (Windows--Internal--COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b___ea_1801701B0.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA?AV?$AsyncDeferral@VCNoResult@Internal@Windows@@@12@AEAVCNoResult@12@@Z @ 0x1801686E8 (--$GetDeferral@VCNoResult@Internal@Windows@@@CResultBase@Internal@Windows@@QEAA-AV-$AsyncDeferra.c)
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x18016C89C (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a408cc100a5b103155a70fabf7a2049b_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, PCWSTR, __int64, __int64); // rbx
  PCWSTR StringRawBuffer; // rax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = Windows::Internal::CResultBase::GetDeferral<Windows::Internal::CNoResult>(a2, v10, a2);
  MPCConstantManagerClient::CreateHRPrincipal(v3, &v11, v4);
  v5 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 248LL);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 88LL))(v5) + 8;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, PCWSTR, __int64, __int64))(*(_QWORD *)v6 + 24LL);
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a1[5], 0LL);
  LODWORD(v7) = v7(v6, *((unsigned int *)a1 + 2), StringRawBuffer, (__int64)(a1 + 2), v11);
  WindowsDeleteString((HSTRING)a1[5]);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v11);
  return (unsigned int)v7;
}
