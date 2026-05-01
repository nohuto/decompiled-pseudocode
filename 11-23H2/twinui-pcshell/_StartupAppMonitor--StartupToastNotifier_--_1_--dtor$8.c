/*
 * XREFs of _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$8 @ 0x180640745
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupAppMonitor::StartupToastNotifier_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 432), a2);
}
