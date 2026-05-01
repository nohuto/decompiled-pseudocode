/*
 * XREFs of _PinHistory::HandlePinRejected_::_1_::dtor$1 @ 0x1806D4E1D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PinHistory::HandlePinRejected_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 192));
}
