/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::BootDisconnectedState::Execute_::_1_::dtor$1 @ 0x18072F615
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::BootDisconnectedState::Execute_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 128), a2);
}
