/*
 * XREFs of ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180075D8C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_d59dcad96ba54600a1284eacbd3c7034_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800D8D40 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_d59dcad96ba54600a1284eacbd3c7034_@@X_N@std@@EEAAX$$QEA_.c)
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0V_lambda_1d5316dfea7a7918102eba328e746dc2_@@$0A@@?$function@$$A6AXXZ@std@@QEAA@$$QEAV_lambda_1d5316dfea7a7918102eba328e746dc2_@@@Z @ 0x1800D1280 (--$-0V_lambda_1d5316dfea7a7918102eba328e746dc2_@@$0A@@-$function@$$A6AXXZ@std@@QEAA@$$QEAV_lambd.c)
 *     ??0_lambda_1d5316dfea7a7918102eba328e746dc2_@@QEAA@QEAV?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEBV?$shared_ptr@Voperation_guard@wil@@@std@@@Z @ 0x1800D1FD4 (--0_lambda_1d5316dfea7a7918102eba328e746dc2_@@QEAA@QEAV-$BluetoothControl@VIMuteControlHandler@@.c)
 *     ??1_lambda_0a995b81b0906751d8a46178506a57bb_@@QEAA@XZ @ 0x1800D2440 (--1_lambda_0a995b81b0906751d8a46178506a57bb_@@QEAA@XZ.c)
 */

void __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::OnStreamStateChanged(
        __int64 a1,
        char a2)
{
  char v3; // al
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // r10
  int v7; // eax
  int v8[6]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v9[80]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v3 = *(_BYTE *)(a1 + 113);
  *(_BYTE *)(a1 + 113) = a2;
  if ( v3 != a2 )
  {
    GetSerialWorkQueue();
    v4 = _lambda_1d5316dfea7a7918102eba328e746dc2_::_lambda_1d5316dfea7a7918102eba328e746dc2_(v8, a1, a1 + 152);
    v5 = (__int64 *)std::function<void (void)>::function<void (void)>(v9, v4);
    v7 = CSerialWorkQueue::QueueWorkItem(v6, v5);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x193,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v7,
        v8[0]);
    _lambda_0a995b81b0906751d8a46178506a57bb_::~_lambda_0a995b81b0906751d8a46178506a57bb_((_lambda_0a995b81b0906751d8a46178506a57bb_ *)v8);
  }
}
