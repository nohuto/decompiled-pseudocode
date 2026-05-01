/*
 * XREFs of ?add_TimeOutInfoChanged@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180653300
 * Callers:
 *     <none>
 * Callees:
 *     ?TimeOutInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@56@@Z @ 0x1806513E0 (-TimeOutInfoChanged@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::add_TimeOutInfoChanged(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h]

  v5 = a2;
  *a3 = *(_QWORD *)winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::TimeOutInfoChanged(
                     (a1 - 24) & -(__int64)(a1 != 0),
                     (__int64)&v4);
  return 0LL;
}
