/*
 * XREFs of _CVirtualDesktopComponent::SubscribeToServices_::_1_::dtor$12 @ 0x1806F277A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopComponent::SubscribeToServices_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 280));
}
