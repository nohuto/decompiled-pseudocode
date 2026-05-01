/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppMetadata_::_1_::dtor$0 @ 0x18061DA3A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppMetadata_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 80), a2);
}
