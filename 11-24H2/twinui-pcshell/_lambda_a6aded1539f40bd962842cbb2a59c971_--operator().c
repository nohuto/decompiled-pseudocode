/*
 * XREFs of _lambda_a6aded1539f40bd962842cbb2a59c971_::operator() @ 0x1801CCD8C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a6aded1539f40bd962842cbb2a59c971___::Run @ 0x180221980 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a6aded1539f40bd962842cbb2a59c971___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_a6aded1539f40bd962842cbb2a59c971_::operator()(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, __int64, __int64 *); // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  result = v3(v2, a1[1], &v6);
  if ( (int)result >= 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 168LL))(v2, v6, 5LL);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
