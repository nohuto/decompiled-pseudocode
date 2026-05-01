/*
 * XREFs of _VirtualPinnedAppsHandler::PinView_::_1_::dtor$0 @ 0x1806D8406
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::PinView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)(a2 + 64));
}
