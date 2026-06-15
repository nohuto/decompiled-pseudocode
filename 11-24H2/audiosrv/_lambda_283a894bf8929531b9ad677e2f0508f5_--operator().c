/*
 * XREFs of _lambda_283a894bf8929531b9ad677e2f0508f5_::operator() @ 0x1800F96A8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_283a894bf8929531b9ad677e2f0508f5__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&_::_Do_call @ 0x1800FABC0 (std--_Func_impl_no_alloc__lambda_283a894bf8929531b9ad677e2f0508f5__bool_Microsoft--_ea_1800FABC0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_283a894bf8929531b9ad677e2f0508f5_::operator()(__int64 a1, _QWORD *a2)
{
  __int64 (*v5)(void); // rax
  int v6; // eax
  _DWORD *v7; // rcx
  char v8; // bl
  _DWORD *v9; // rax

  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 200LL))(*a2) != **(_DWORD **)a1 )
    return 0;
  v5 = *(__int64 (**)(void))(*(_QWORD *)*a2 + 128LL);
  if ( **(_DWORD **)(a1 + 8) == 3 )
  {
    v6 = v5();
    v7 = *(_DWORD **)(a1 + 16);
    v8 = 0;
    if ( v6 == *v7 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2) )
      return v8;
  }
  else if ( (unsigned int)v5() != **(_DWORD **)(a1 + 16) )
  {
    v9 = *(_DWORD **)(a1 + 8);
    v8 = 0;
    if ( *v9 != 2 || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2) )
      return v8;
  }
  return 1;
}
