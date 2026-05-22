/*
 * XREFs of _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$1 @ 0x1801D6B88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::MPCFocusTarget_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 88LL));
}
