/*
 * XREFs of _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowValidForGroupInclusion_::_1_::dtor$3 @ 0x180649135
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowValidForGroupInclusion_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
