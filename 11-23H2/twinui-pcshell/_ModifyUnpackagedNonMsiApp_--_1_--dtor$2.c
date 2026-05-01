/*
 * XREFs of _ModifyUnpackagedNonMsiApp_::_1_::dtor$2 @ 0x180634A72
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ModifyUnpackagedNonMsiApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 136), a2);
}
