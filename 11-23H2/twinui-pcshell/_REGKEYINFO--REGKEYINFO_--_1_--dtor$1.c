/*
 * XREFs of _REGKEYINFO::REGKEYINFO_::_1_::dtor$1 @ 0x1802B98D3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall REGKEYINFO::REGKEYINFO_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 64) + 48LL),
    a2);
}
