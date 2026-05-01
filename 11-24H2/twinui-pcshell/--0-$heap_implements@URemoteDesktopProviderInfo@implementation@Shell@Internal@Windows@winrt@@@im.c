/*
 * XREFs of ??0?$heap_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@0@Z @ 0x18063E54C
 * Callers:
 *     ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEAY00$$CBG@winrt@@YA?A_PAEBUhstring@0@AEAY00$$CBG@Z @ 0x18063CD4C (--$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AE.c)
 *     ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAY00$$CBG@winrt@@YA?A_P$$QEAUhstring@0@AEAY00$$CBG@Z @ 0x180656E48 (--$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAY0.c)
 *     ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@U76@@winrt@@YA?A_P$$QEAUhstring@0@0@Z @ 0x180656EE0 (--$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@U76@@.c)
 * Callees:
 *     ??0RemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@0@Z @ 0x180661538 (--0RemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@0@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>(
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *a1,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo::RemoteDesktopProviderInfo(a1, a2, a3);
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::`vftable';
  return a1;
}
