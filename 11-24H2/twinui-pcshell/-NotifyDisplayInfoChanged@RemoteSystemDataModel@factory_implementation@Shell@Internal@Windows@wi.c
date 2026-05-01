/*
 * XREFs of ?NotifyDisplayInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@0@Z @ 0x18064ECE8
 * Callers:
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x1806610CC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDisplayInfoChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemDisplayInfoChangedEventArgs@4561@@Z @ 0x180644324 (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDi.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::NotifyDisplayInfoChanged(
        RTL_SRWLOCK *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v6 = operator new(0x28uLL);
  v6[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemDisplayInfoChangedEventArgs>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v6[1] = 1LL;
  *v6 = &winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(v6 + 3), a2);
  winrt::hstring::hstring((winrt::hstring *)(v6 + 4), a3);
  *v6 = &winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::`vftable';
  v7 = v6 + 2;
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>(
    this + 26,
    (__int64)this,
    (__int64)&v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
}
