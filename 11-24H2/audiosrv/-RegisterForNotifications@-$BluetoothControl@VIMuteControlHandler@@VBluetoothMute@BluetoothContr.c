/*
 * XREFs of ?RegisterForNotifications@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAJXZ @ 0x1800D6140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration@@@details@wil@@QEAA_NXZ @ 0x1800D96E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RegisterForNotifications(
        __int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_BluetoothControl_DeferOnNotifyUntilRegistration>::GetImpl'::`2'::impl) )
    *(_BYTE *)(a1 + 168) = 1;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 72LL))(*(_QWORD *)(a1 + 120));
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 112) && (v5 = *(_QWORD *)(a1 + 104)) != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 72LL))(v5);
    else
      return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
