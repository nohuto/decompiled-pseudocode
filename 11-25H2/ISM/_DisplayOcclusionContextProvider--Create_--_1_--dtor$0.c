/*
 * XREFs of _DisplayOcclusionContextProvider::Create_::_1_::dtor$0 @ 0x1801CC23D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayOcclusionContextProvider::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
