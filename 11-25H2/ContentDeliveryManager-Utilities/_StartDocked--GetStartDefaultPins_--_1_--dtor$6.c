/*
 * XREFs of _StartDocked::GetStartDefaultPins_::_1_::dtor$6 @ 0x1800B78A1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StartDocked::GetStartDefaultPins_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 168));
}
