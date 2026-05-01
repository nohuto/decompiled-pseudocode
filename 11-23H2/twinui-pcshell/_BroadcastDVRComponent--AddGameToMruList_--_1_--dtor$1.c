/*
 * XREFs of _BroadcastDVRComponent::AddGameToMruList_::_1_::dtor$1 @ 0x1803D569C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BroadcastDVRComponent::AddGameToMruList_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 136), a2);
}
