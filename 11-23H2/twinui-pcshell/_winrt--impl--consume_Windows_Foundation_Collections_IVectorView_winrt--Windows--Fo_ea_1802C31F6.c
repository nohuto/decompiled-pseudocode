/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IVectorView_winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem__winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_::GetAt_::_1_::dtor$0 @ 0x1802C31F6
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView_winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem__winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_::GetAt_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection(*(winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection **)(a2 + 72));
  }
}
