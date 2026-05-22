/*
 * XREFs of _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$0 @ 0x1801C88C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>((_Mtx_t *)(a2 + 96));
}
