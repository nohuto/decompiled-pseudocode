/*
 * XREFs of _Util::TryOpenFileMappingHandleForWindow_::_1_::dtor$1 @ 0x180719957
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Util::TryOpenFileMappingHandleForWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 104), a2);
}
