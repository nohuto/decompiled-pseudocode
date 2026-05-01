/*
 * XREFs of _STARTUPAPPINFO::STARTUPAPPINFO_::_1_::dtor$1 @ 0x1802E89F6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall STARTUPAPPINFO::STARTUPAPPINFO_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 48) + 40LL),
    a2);
}
