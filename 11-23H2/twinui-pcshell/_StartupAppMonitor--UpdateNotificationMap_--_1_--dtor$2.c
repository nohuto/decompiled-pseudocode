/*
 * XREFs of _StartupAppMonitor::UpdateNotificationMap_::_1_::dtor$2 @ 0x18064090E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupAppMonitor::UpdateNotificationMap_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 64), a2);
}
