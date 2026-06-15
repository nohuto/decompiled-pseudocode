/*
 * XREFs of ?ProviderFinalRelease@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x1800D5DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800D9720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1800D97A4 (-close_and_wait@operation_guard@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::ProviderFinalRelease(
        __int64 a1)
{
  char IsEnabled; // al
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx

  if ( *(_BYTE *)(a1 + 148) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl);
    v3 = *(__int64 **)(a1 + 136);
    v4 = *(unsigned int *)(a1 + 144);
    v5 = *v3;
    if ( IsEnabled )
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 48))(v3, v4);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 32))(v3, v4);
  }
  wil::operation_guard::close_and_wait(*(wil::operation_guard **)(a1 + 152));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 32LL))(*(_QWORD *)(a1 + 120));
  if ( *(_BYTE *)(a1 + 112) )
  {
    v6 = *(_QWORD *)(a1 + 104);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  }
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(a1 + 104));
  return wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(a1 + 128));
}
