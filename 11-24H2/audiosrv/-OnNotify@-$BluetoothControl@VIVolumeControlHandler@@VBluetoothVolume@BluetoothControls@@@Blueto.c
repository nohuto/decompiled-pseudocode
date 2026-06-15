/*
 * XREFs of ?OnNotify@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAJKPEBU_GUID@@@Z @ 0x18007AA00
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration@@@details@wil@@QEAA_NXZ @ 0x1800D96E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::OnNotify(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  char IsEnabled; // al
  __int64 v7; // rcx

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration>::GetImpl'::`2'::impl);
  v7 = *(_QWORD *)(a1 + 128);
  if ( v7 )
  {
    if ( !IsEnabled )
    {
LABEL_5:
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 168) )
    {
      v7 = *(_QWORD *)(a1 + 128);
      goto LABEL_5;
    }
  }
  return 0LL;
}
