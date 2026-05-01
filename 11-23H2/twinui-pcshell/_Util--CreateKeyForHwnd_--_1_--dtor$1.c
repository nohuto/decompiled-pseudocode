/*
 * XREFs of _Util::CreateKeyForHwnd_::_1_::dtor$1 @ 0x1807102F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Util::CreateKeyForHwnd_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 96), a2);
}
