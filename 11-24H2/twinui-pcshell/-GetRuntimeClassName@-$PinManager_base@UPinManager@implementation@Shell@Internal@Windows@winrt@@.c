/*
 * XREFs of ?GetRuntimeClassName@?$PinManager_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManagerInterop3@@Uimmersive_shell_component@6@@implementation@Shell@Internal@Windows@winrt@@UEBA?AUhstring@6@XZ @ 0x1805E6880
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::GetRuntimeClassName(
        __int64 a1,
        winrt::hstring *a2)
{
  winrt::hstring::hstring(a2, L"Windows.Internal.Shell.PinManager");
  return a2;
}
