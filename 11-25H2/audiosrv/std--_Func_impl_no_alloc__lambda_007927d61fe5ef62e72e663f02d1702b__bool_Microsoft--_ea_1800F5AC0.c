/*
 * XREFs of std::_Func_impl_no_alloc__lambda_007927d61fe5ef62e72e663f02d1702b__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&_::_Do_call @ 0x1800F5AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_007927d61fe5ef62e72e663f02d1702b__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  const WCHAR *v4; // rbx
  const WCHAR *v5; // rax
  char v6; // di

  if ( **(_DWORD **)(a1 + 8) != (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 200LL))(*a2) )
    return 0;
  v4 = **(const WCHAR ***)(a1 + 16);
  v5 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 192LL))(*a2);
  v6 = 1;
  if ( CompareStringOrdinal(v5, -1, v4, -1, 1) != 2 )
    return 0;
  return v6;
}
