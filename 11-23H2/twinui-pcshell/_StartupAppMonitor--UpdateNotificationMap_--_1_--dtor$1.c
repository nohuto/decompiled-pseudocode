/*
 * XREFs of _StartupAppMonitor::UpdateNotificationMap_::_1_::dtor$1 @ 0x180640902
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall StartupAppMonitor::UpdateNotificationMap_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 32));
}
