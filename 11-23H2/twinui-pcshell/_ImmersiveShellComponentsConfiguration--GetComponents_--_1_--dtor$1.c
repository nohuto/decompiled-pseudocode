/*
 * XREFs of _ImmersiveShellComponentsConfiguration::GetComponents_::_1_::dtor$1 @ 0x18048A6DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ImmersiveShellComponentsConfiguration::GetComponents_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 152), a2);
}
