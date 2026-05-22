/*
 * XREFs of ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800A9424
 * Callers:
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_e811ed625de1c9f36d6dae6db721db2b_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180086390 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UAppViewWatcher@WindowManagement@Appl.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@V_lambda_60bc5d93aa36c864d5d47e476cd7d1f3_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800863C0 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowManagement@Appli.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_8796a88b72841d6ebf3a72c1da83edbf_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800863F0 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowMan_ea_1800863F0.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_be02bfc96701eec5f3a0245d87020f54_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800AB330 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowMana.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::QueryInterface @ 0x1800DC000 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--WorkItemHandler_ea_1800DC000.c)
 * Callees:
 *     ?increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800A9174 (-increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_base::query_interface(
        winrt::impl::implements_delegate_base *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5)
{
  if ( *a2 == *a5 && a2[1] == a5[1]
    || *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> && a2[1] == 0x46000000000000C0LL
    || *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> && a2[1] == 0x905B8FCA64EEFFC0uLL )
  {
    *a3 = a4;
    winrt::impl::implements_delegate_base::increment_reference(a1);
    return 0LL;
  }
  else if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> && a2[1] == 0x46000000000000C0LL )
  {
    return winrt::impl::make_marshaler(a4, a3);
  }
  else
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
}
