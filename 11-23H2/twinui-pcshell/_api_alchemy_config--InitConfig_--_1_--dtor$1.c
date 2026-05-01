/*
 * XREFs of _api_alchemy_config::InitConfig_::_1_::dtor$1 @ 0x1806E2D81
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall api_alchemy_config::InitConfig_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 192), a2);
}
