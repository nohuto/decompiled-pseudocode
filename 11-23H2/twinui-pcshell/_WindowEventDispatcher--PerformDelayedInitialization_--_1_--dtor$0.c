/*
 * XREFs of _WindowEventDispatcher::PerformDelayedInitialization_::_1_::dtor$0 @ 0x1804C73BB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::PerformDelayedInitialization_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 104));
}
