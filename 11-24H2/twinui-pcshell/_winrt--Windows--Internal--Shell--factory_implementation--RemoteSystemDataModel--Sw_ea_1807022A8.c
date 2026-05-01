/*
 * XREFs of _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SwitchToRemoteDesktop_::_1_::dtor$24 @ 0x1807022A8
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SwitchToRemoteDesktop_::_1_::dtor_24(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 208) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 208) &= ~2u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 48));
  }
}
