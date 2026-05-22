/*
 * XREFs of _CompliantHapticInterface::CompliantHapticInterface_::_1_::dtor$0 @ 0x1801D8469
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CompliantHapticInterface::CompliantHapticInterface_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(*(void ***)(a2 + 64));
}
