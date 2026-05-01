/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IVectorView_winrt::Windows::Foundation::Collections::IVectorView_winrt::hstring__winrt::hstring_::GetAt_::_1_::dtor$0 @ 0x1802BFC4B
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView_winrt::Windows::Foundation::Collections::IVectorView_winrt::hstring__winrt::hstring_::GetAt_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::hstring::~hstring(*(void ***)(a2 + 72));
  }
}
