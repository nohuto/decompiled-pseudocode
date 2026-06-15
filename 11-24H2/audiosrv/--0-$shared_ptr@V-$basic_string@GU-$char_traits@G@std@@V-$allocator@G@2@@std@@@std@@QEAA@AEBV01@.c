/*
 * XREFs of ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14
 * Callers:
 *     ??1CPowerReference@@QEAA@XZ @ 0x18000FD18 (--1CPowerReference@@QEAA@XZ.c)
 *     ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180052AB8 (--0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV-$shared_ptr@$$CBUEffe.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180057F0C (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x1800622D0 (-GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z.c)
 *     _lambda_02f5f1fbcf15b576b00898c5b7a1de2a_::_lambda_02f5f1fbcf15b576b00898c5b7a1de2a_ @ 0x1800B6384 (_lambda_02f5f1fbcf15b576b00898c5b7a1de2a_--_lambda_02f5f1fbcf15b576b00898c5b7a1de2a_.c)
 *     std::_Func_impl_no_alloc__lambda_02f5f1fbcf15b576b00898c5b7a1de2a__void_::_Copy @ 0x1800BFB30 (std--_Func_impl_no_alloc__lambda_02f5f1fbcf15b576b00898c5b7a1de2a__void_--_Copy.c)
 *     ??0_lambda_1d5316dfea7a7918102eba328e746dc2_@@QEAA@QEAV?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEBV?$shared_ptr@Voperation_guard@wil@@@std@@@Z @ 0x1800D1FD4 (--0_lambda_1d5316dfea7a7918102eba328e746dc2_@@QEAA@QEAV-$BluetoothControl@VIMuteControlHandler@@.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800D5A6C (-OnBidirectionalModeChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothCon.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800D5B10 (-OnBidirectionalModeChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@Bluetoot.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D6A7C (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D6EA4 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     ?RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D72CC (-RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIC.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_0a995b81b0906751d8a46178506a57bb_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800D8A00 (-_Copy@-$_Func_impl_no_alloc@V_lambda_0a995b81b0906751d8a46178506a57bb_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_0d7505061d5fe897f28fc80eab3d553f_@@X_N@std@@EEBAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x1800D8A40 (-_Copy@-$_Func_impl_no_alloc@V_lambda_0d7505061d5fe897f28fc80eab3d553f_@@X_N@std@@EEBAPEAV-$_Fun.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_1d5316dfea7a7918102eba328e746dc2_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800D8A80 (-_Copy@-$_Func_impl_no_alloc@V_lambda_1d5316dfea7a7918102eba328e746dc2_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_ae8cfa1ab59174a35a5099bfa96ed12c_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800D8AC0 (-_Copy@-$_Func_impl_no_alloc@V_lambda_ae8cfa1ab59174a35a5099bfa96ed12c_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_d59dcad96ba54600a1284eacbd3c7034_@@X_N@std@@EEBAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x1800D8B00 (-_Copy@-$_Func_impl_no_alloc@V_lambda_d59dcad96ba54600a1284eacbd3c7034_@@X_N@std@@EEBAPEAV-$_Fun.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_eb7a3b5b11052349d6949419e1210a70_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800D8B40 (-_Copy@-$_Func_impl_no_alloc@V_lambda_eb7a3b5b11052349d6949419e1210a70_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_f54142638d21adc8792a19c40bc87039_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800D8B80 (-_Copy@-$_Func_impl_no_alloc@V_lambda_f54142638d21adc8792a19c40bc87039_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_f675c08182d1f0d7e2707c37ef5444e8_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800D8BC0 (-_Copy@-$_Func_impl_no_alloc@V_lambda_f675c08182d1f0d7e2707c37ef5444e8_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_::__clone @ 0x1800D95B0 (wistd--__function--__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_--__clone.c)
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800E6500 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800E6630 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_::_Copy @ 0x1800E78E0 (std--_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Copy @ 0x1800E7950 (std--_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_--_Copy.c)
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1800F5688 (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Copy @ 0x1800F8CF0 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_::_Copy @ 0x1800F8D90 (std--_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_--_Copy.c)
 *     ??$_Construct_in_place@V?$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV?$shared_ptr@VEffectPack@@@0@0@Z @ 0x1800FB688 (--$_Construct_in_place@V-$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV-$shared_ptr@VEffect.c)
 *     ??$construct@V?$shared_ptr@VEffectPack@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@1@QEAV?$shared_ptr@VEffectPack@@@1@AEBV31@@Z @ 0x1800FB7D4 (--$construct@V-$shared_ptr@VEffectPack@@@std@@AEBV12@@-$_Default_allocator_traits@V-$allocator@V.c)
 *     ?AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1800FB914 (-AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_a94dfcfc08a8b17bb98eae0a275e2f1b__void_::_Copy @ 0x18010A330 (std--_Func_impl_no_alloc__lambda_a94dfcfc08a8b17bb98eae0a275e2f1b__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_c90e8a76b02d1fc01a85dd002f968322__void_::_Copy @ 0x18010A360 (std--_Func_impl_no_alloc__lambda_c90e8a76b02d1fc01a85dd002f968322__void_--_Copy.c)
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x180136580 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x180137798 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
