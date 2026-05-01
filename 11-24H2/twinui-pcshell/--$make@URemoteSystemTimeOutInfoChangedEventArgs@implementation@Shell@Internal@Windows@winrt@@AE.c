/*
 * XREFs of ??$make@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@winrt@@YA?A_PAEBUhstring@0@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180646C58
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180652544 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@V?$tuple@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180667C3C (--0-$producers_base@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,winrt::hstring const &,std::chrono::duration<__int64,std::ratio<1,10000000>> const &>(
        _QWORD *a1,
        const struct winrt::hstring *a2,
        _QWORD *a3)
{
  _QWORD *v7; // [rsp+50h] [rbp+8h]

  v7 = operator new(0x28uLL);
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,std::tuple<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>::producers_base<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,std::tuple<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>(v7 + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v7[1] = 1LL;
  *v7 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs>::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(v7 + 3), a2);
  v7[4] = *a3;
  *v7 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs>::`vftable';
  *a1 = v7 + 2;
  return a1;
}
