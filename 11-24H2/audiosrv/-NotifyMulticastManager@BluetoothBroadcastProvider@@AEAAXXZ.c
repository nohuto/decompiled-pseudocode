/*
 * XREFs of ?NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ @ 0x1800E61D4
 * Callers:
 *     _lambda_2123d8e56b275a4b963be45688bccc2c_::operator() @ 0x1800E4324 (_lambda_2123d8e56b275a4b963be45688bccc2c_--operator().c)
 *     ?OnBluetoothBroadcastCapabilityChanged@BluetoothBroadcastProvider@@AEAAJAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z @ 0x1800E61F0 (-OnBluetoothBroadcastCapabilityChanged@BluetoothBroadcastProvider@@AEAAJAEBW4BluetoothLEAudioSup.c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z @ 0x1800E6768 (-OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BluetoothBroadcastProvider::NotifyMulticastManager(BluetoothBroadcastProvider *this)
{
  (*(void (__fastcall **)(_QWORD, BluetoothBroadcastProvider *))(**((_QWORD **)this + 14) + 24LL))(
    *((_QWORD *)this + 14),
    this);
}
