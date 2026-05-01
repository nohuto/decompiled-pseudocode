/*
 * XREFs of ?add@?$event@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x1806531C4
 * Callers:
 *     ?TimeOutInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@56@@Z @ 0x1806513E0 (-TimeOutInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 * Callees:
 *     ?add_agile@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@2@@Z @ 0x1803D4EE8 (-add_agile@-$event@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foun.c)
 *     ??$make_agile_delegate@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x180647164 (--$make_agile_delegate@U-$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@W.c)
 */

PVOID *__fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>::add(
        RTL_SRWLOCK *a1,
        PVOID *a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>(
         &v7,
         a3);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::add_agile(
    a1,
    a2,
    v5);
  return a2;
}
