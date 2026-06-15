/*
 * XREFs of wistd::__function::__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl(enum_Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState_const_&)_::operator() @ 0x1800E4F50
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_735ddb5d5b78506d8297ba52162f5331__void___cdecl_enum_Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState_const____::operator()(
        __int64 a1,
        _WORD *a2)
{
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int128 v6; // [rsp+20h] [rbp-58h]
  __int64 (__fastcall **v7)(); // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+38h] [rbp-40h]
  __int64 (__fastcall ***v9)(); // [rsp+68h] [rbp-10h]

  SerialWorkQueue = GetSerialWorkQueue();
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 8);
  WORD4(v6) = *a2;
  v7 = off_18017C290;
  v9 = &v7;
  v8 = v6;
  return CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v7);
}
