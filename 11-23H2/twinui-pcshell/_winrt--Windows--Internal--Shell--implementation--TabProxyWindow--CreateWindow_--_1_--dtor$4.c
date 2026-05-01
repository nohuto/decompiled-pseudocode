/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow_::_1_::dtor$4 @ 0x1802BFB0D
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 224) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 224) &= ~2u;
    winrt::hstring::~hstring((void **)(a2 + 128));
  }
}
