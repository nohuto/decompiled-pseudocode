/*
 * XREFs of ??1?$lambda_call@V_lambda_87ad533e566f4a65e2c0d4bd35404b17_@@@details@wil@@QEAA@XZ @ 0x1800D260C
 * Callers:
 *     _BluetoothControls::BluetoothControl_IVolumeControlHandler_BluetoothControls::BluetoothVolume_::RuntimeClassInitialize_::_1_::dtor$6 @ 0x18016E3F0 (_BluetoothControls--BluetoothControl_IVolumeControlHandler_BluetoothControls--Bluet_ea_18016E3F0.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800D9720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call<_lambda_87ad533e566f4a65e2c0d4bd35404b17_>::~lambda_call<_lambda_87ad533e566f4a65e2c0d4bd35404b17_>(
        _BYTE *a1)
{
  char IsEnabled; // al
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx

  if ( a1[8] )
  {
    a1[8] = 0;
    if ( *(_BYTE *)(*(_QWORD *)a1 + 148LL) )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl);
      v3 = *(__int64 **)(*(_QWORD *)a1 + 136LL);
      v4 = *v3;
      v5 = *(unsigned int *)(*(_QWORD *)a1 + 144LL);
      if ( IsEnabled )
        (*(void (__fastcall **)(__int64 *, __int64))(v4 + 48))(v3, v5);
      else
        (*(void (__fastcall **)(__int64 *, __int64))(v4 + 32))(v3, v5);
    }
  }
}
