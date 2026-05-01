/*
 * XREFs of __lambda_690d2e9773cc08e07279b20ff14abba4_::operator()_::_1_::dtor$2 @ 0x18028A39C
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall _lambda_690d2e9773cc08e07279b20ff14abba4_::operator()_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 136) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 136) &= ~1u;
    winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)(a2 + 32));
  }
}
