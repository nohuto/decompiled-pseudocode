/*
 * XREFs of _GamingOverlayExperienceManager::GetNonServiceProcessListAndIds_::_1_::dtor$1 @ 0x1803FED53
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GamingOverlayExperienceManager::GetNonServiceProcessListAndIds_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 80), a2);
}
