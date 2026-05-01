/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IMap_winrt::Windows::Foundation::Collections::IMap_unsigned___int64_winrt::hstring__unsigned___int64_winrt::hstring_::TryLookup_::_1_::dtor$0 @ 0x1807022ED
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$optional@Uhstring@winrt@@@std@@QEAA@XZ @ 0x1802D0D78 (--1-$optional@Uhstring@winrt@@@std@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap_winrt::Windows::Foundation::Collections::IMap_unsigned___int64_winrt::hstring__unsigned___int64_winrt::hstring_::TryLookup_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::optional<winrt::hstring>::~optional<winrt::hstring>(*(_QWORD *)(a2 + 120));
  }
}
