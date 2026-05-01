/*
 * XREFs of ?UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x18064263C
 * Callers:
 *     ?UpdateCloudPCInfo@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@@Z @ 0x180642610 (-UpdateCloudPCInfo@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRe.c)
 * Callees:
 *     ?UpdateDataForWindow@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUWindowId@UI@56@@Z @ 0x180652504 (-UpdateDataForWindow@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUW.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::UpdateCloudPCInfo(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::UpdateDataForWindow(a2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x92,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v2);
  }
}
