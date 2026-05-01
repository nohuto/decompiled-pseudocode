/*
 * XREFs of _ImmersiveShellComponentsConfiguration::GetComponents_::_1_::dtor$3 @ 0x18048A6F5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ImmersiveShellComponentsConfiguration::GetComponents_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 120), a2);
}
