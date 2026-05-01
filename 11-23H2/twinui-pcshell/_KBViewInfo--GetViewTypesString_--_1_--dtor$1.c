/*
 * XREFs of _KBViewInfo::GetViewTypesString_::_1_::dtor$1 @ 0x180511242
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KBViewInfo::GetViewTypesString_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 48), a2);
}
