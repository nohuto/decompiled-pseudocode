/*
 * XREFs of _UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor$20 @ 0x1802B7A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor_20(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 60) &= ~2u;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 80));
  }
}
