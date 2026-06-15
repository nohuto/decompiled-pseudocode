/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6e5b4fa4f358ed3d32c63bb205c3c34c__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x18009C5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_6e5b4fa4f358ed3d32c63bb205c3c34c__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rcx

  v3 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a2 + 112LL);
  EnterCriticalSection(v3);
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 152LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 272LL))(v4);
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
