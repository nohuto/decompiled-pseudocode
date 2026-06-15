/*
 * XREFs of ?OnBidirectionalModeChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800D5B10
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_f54142638d21adc8792a19c40bc87039_@@X$$V@std@@EEAAXXZ @ 0x1800D8DE0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_f54142638d21adc8792a19c40bc87039_@@X$$V@std@@EEAAXXZ.c)
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::OnBidirectionalModeChanged(
        __int64 a1)
{
  __int64 v2; // r8
  int v3; // eax
  __int128 v4; // [rsp+28h] [rbp-58h] BYREF
  __int64 v5[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v6; // [rsp+48h] [rbp-38h]
  __int64 *v7; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  GetSerialWorkQueue();
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v4, (_QWORD *)(a1 + 152));
  v5[0] = (__int64)&std::_Func_impl_no_alloc<_lambda_0a995b81b0906751d8a46178506a57bb_,void,>::`vftable';
  v5[1] = a1;
  v6 = v4;
  v4 = 0LL;
  v7 = v5;
  v3 = CSerialWorkQueue::QueueWorkItem(v2, v5);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      374LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v3);
}
