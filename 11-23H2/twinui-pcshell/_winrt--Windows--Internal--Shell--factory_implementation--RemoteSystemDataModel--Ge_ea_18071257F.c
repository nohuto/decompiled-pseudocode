/*
 * XREFs of _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetLaunchUri_::_1_::dtor$7 @ 0x18071257F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetLaunchUri_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 64), a2);
}
