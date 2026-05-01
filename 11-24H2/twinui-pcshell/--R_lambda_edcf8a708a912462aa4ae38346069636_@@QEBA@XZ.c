/*
 * XREFs of ??R_lambda_edcf8a708a912462aa4ae38346069636_@@QEBA@XZ @ 0x1801EF62C
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180221000 (-Run@-$CTaskWrapper@V_lambda_edcf8a708a912462aa4ae38346069636_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_edcf8a708a912462aa4ae38346069636_::operator()(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, __int64, __int64 *); // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 56LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  result = v3(v2, a1[1], &v6);
  if ( (int)result >= 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 136LL))(v2, v6, 0LL);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
