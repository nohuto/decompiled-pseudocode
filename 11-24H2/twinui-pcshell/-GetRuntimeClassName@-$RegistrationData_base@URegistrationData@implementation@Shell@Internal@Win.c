/*
 * XREFs of ?GetRuntimeClassName@?$RegistrationData_base@URegistrationData@implementation@Shell@Internal@Windows@winrt@@$$V@implementation@Shell@Internal@Windows@winrt@@UEBA?AUhstring@6@XZ @ 0x180640E90
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::RegistrationData_base<winrt::Windows::Internal::Shell::implementation::RegistrationData,>::GetRuntimeClassName(
        __int64 a1,
        winrt::hstring *a2)
{
  winrt::hstring::hstring(a2, L"Windows.Internal.Shell.RegistrationData");
  return a2;
}
