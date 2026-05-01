/*
 * XREFs of _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::subscribe_to_services_::_1_::dtor$1 @ 0x1802B3A94
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::subscribe_to_services_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
