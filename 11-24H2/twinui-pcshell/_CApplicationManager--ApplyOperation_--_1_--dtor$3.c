/*
 * XREFs of _CApplicationManager::ApplyOperation_::_1_::dtor$3 @ 0x1806D375E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ApplyOperation_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 240));
}
