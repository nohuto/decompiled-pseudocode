/*
 * XREFs of ?SystemId@RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x18033E53C
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 *     ?get_SystemId@?$produce@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDisplayInfoChangedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803400C0 (-get_SystemId@-$produce@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@W.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::SystemId(
        __int64 a1,
        winrt::hstring *a2)
{
  winrt::hstring::hstring(a2, (const struct winrt::hstring *)(a1 + 24));
  return a2;
}
