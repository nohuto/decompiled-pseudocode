/*
 * XREFs of _Utils::ProtocolLauncher::CreateInstance_::_1_::dtor$0 @ 0x1802E9F0D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Utils::ProtocolLauncher::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
