/*
 * XREFs of ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x18008829C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800D2250 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_.c)
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180060820 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::OnStreamStateChanged(
        __int64 a1,
        char a2)
{
  char v3; // al
  __int64 v4; // r8
  int v5; // eax
  __int128 v6; // [rsp+28h] [rbp-58h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v8; // [rsp+48h] [rbp-38h]
  __int64 *v9; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v3 = *(_BYTE *)(a1 + 113);
  *(_BYTE *)(a1 + 113) = a2;
  if ( v3 != a2 )
  {
    GetSerialWorkQueue();
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v6, (_QWORD *)(a1 + 152));
    v7[0] = (__int64)&std::_Func_impl_no_alloc<_lambda_b461a9ffe5f5cec38e175d7dd8469474_,void,>::`vftable';
    v7[1] = a1;
    v8 = v6;
    v6 = 0LL;
    v9 = v7;
    v5 = CSerialWorkQueue::QueueWorkItem(v4, v7);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x120,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v5,
        a1);
  }
}
