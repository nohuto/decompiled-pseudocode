/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive_::_1_::dtor$1 @ 0x18061F040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 40), a2);
}
