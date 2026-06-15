/*
 * XREFs of std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Copy @ 0x1800E7950
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??0?$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBluetoothBroadcastProvider@@@Z @ 0x1800E3800 (--0-$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBluetooth.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r11

  *(_QWORD *)a2 = off_18017C230;
  wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>(
    (volatile int **)(a2 + 8),
    *(volatile int **)(a1 + 8));
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>((_QWORD *)(v3 + 16), (_QWORD *)(v2 + 16));
  return v4;
}
