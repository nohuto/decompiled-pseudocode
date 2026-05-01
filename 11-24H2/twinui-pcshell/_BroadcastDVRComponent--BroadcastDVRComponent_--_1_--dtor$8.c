/*
 * XREFs of _BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor$8 @ 0x1806DEB58
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(*(_QWORD *)(a2 + 48) + 400LL));
}
