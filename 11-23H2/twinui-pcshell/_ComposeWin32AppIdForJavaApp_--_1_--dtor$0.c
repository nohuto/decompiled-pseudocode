/*
 * XREFs of _ComposeWin32AppIdForJavaApp_::_1_::dtor$0 @ 0x180628C6A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ComposeWin32AppIdForJavaApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 64), a2);
}
