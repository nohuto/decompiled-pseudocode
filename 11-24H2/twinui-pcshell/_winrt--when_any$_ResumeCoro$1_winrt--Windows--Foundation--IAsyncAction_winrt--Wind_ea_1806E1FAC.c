/*
 * XREFs of _winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction__::_1_::dtor$3 @ 0x1806E1FAC
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::when_any__ResumeCoro_1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction__::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 40) + 64LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 104));
}
