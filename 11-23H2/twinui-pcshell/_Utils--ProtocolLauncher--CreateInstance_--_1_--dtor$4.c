/*
 * XREFs of _Utils::ProtocolLauncher::CreateInstance_::_1_::dtor$4 @ 0x1802E9F3D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Utils::ProtocolLauncher::CreateInstance_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
