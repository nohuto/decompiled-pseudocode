/*
 * XREFs of _Util::FileMappingHelpers::CreateFileMappingName_::_1_::dtor$0 @ 0x1807100F1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Util::FileMappingHelpers::CreateFileMappingName_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 64), a2);
}
