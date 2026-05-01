/*
 * XREFs of _lambda_d9a9f05661a01a904c3494cc92e5b6ff_::operator() @ 0x1801AF3A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x180201640 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d9a9f05661a01a904c3494cc92e5b6ff_::operator()(__int64 *a1)
{
  __int64 v2; // rsi
  void (__fastcall *v3)(__int64, __int64, __int64 *); // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64, __int64, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v7 = 0LL;
  if ( a1[1] )
  {
    v6 = *(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    v6(v2, a1[1], &v7);
  }
  else if ( a1[2] )
  {
    v3 = *(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    v3(v2, a1[2], &v7);
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 144LL))(v2, v7);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
