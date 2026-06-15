/*
 * XREFs of ??0BluetoothBroadcastProvider@@QEAA@XZ @ 0x1800DEE60
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800DDD08 (--$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerN.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMulticastProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DEDF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMulticastProvider@@@WRL@Microsoft@@Q.c)
 */

BluetoothBroadcastProvider *__fastcall BluetoothBroadcastProvider::BluetoothBroadcastProvider(
        BluetoothBroadcastProvider *this)
{
  BluetoothBroadcastProvider *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMulticastProvider>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMulticastProvider>((__int64)this);
  *((_BYTE *)this + 16) = 0;
  *(_QWORD *)this = &BluetoothBroadcastProvider::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  *((_QWORD *)this + 8) = 0LL;
  result = this;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
