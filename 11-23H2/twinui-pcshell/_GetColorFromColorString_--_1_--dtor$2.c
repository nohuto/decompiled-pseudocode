/*
 * XREFs of _GetColorFromColorString_::_1_::dtor$2 @ 0x18050FE49
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetColorFromColorString_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 72), a2);
}
