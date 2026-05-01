/*
 * XREFs of ?IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4LocalCapabilities@3456@@Z @ 0x1806673B4
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x18064F958 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
        winrt::Windows::Internal::Shell::implementation::LaunchUriData *this,
        const enum winrt::Windows::Internal::Shell::LocalCapabilities *a2)
{
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      return *((_BYTE *)this + 24);
    case 1:
      return *((_BYTE *)this + 25);
    case 2:
      return *((_BYTE *)this + 26);
    case 3:
      return *((_BYTE *)this + 28);
    case 4:
      return *((_BYTE *)this + 27);
    case 5:
      return *((_BYTE *)this + 29);
  }
  return 0;
}
