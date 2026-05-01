/*
 * XREFs of ?DisplayName@RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180667AB0
 * Callers:
 *     ?get_DisplayName@?$produce@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDisplayInfoChangedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180667AE0 (-get_DisplayName@-$produce@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Interna.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::DisplayName(
        __int64 a1,
        winrt::hstring *a2)
{
  winrt::hstring::hstring(a2, (const struct winrt::hstring *)(a1 + 32));
  return a2;
}
