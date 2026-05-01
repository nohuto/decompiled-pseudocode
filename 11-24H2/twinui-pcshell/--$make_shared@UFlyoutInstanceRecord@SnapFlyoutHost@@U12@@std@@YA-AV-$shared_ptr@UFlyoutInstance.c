/*
 * XREFs of ??$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x1805B0F7C
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B1950 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BII@AA@impl@winrt@@QEAA@$$QEAU012@@Z @ 0x1805B10DC (--0-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B10DC.c)
 */

_QWORD *__fastcall std::make_shared<SnapFlyoutHost::FlyoutInstanceRecord,SnapFlyoutHost::FlyoutInstanceRecord>(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  _QWORD *result; // rax
  __int64 v13; // r8
  __int64 v14; // r9

  v4 = operator new(0x80uLL);
  *(_OWORD *)v4 = 0LL;
  v4[2] = 1;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::`vftable';
  v5 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v4 + 2) = v5;
  v6 = a2[1];
  a2[1] = 0LL;
  *((_QWORD *)v4 + 3) = v6;
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v4 + 8,
    a2 + 2);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v7 + 32,
    a2 + 4);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v8 + 48,
    a2 + 6);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v9 + 64,
    a2 + 8);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v10 + 80,
    a2 + 10);
  __0__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA___QEAU012__Z(
    v11 + 96,
    a2 + 12);
  result = a1;
  *a1 = v13;
  a1[1] = v14;
  return result;
}
