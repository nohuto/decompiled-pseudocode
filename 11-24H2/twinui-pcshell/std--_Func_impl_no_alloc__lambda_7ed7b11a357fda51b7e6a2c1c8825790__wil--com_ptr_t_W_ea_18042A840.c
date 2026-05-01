/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7ed7b11a357fda51b7e6a2c1c8825790__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId_::_Copy @ 0x18042A840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_7ed7b11a357fda51b7e6a2c1c8825790__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  *a2 = off_18073C7F0;
  v4 = *(_QWORD *)(a1 + 8);
  a2[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
