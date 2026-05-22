/*
 * XREFs of _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$1 @ 0x1801C88DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>(a2 + 32);
}
