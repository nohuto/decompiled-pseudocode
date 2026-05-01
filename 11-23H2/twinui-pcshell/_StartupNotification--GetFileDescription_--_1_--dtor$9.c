/*
 * XREFs of _StartupNotification::GetFileDescription_::_1_::dtor$9 @ 0x180644658
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupNotification::GetFileDescription_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 96), a2);
}
