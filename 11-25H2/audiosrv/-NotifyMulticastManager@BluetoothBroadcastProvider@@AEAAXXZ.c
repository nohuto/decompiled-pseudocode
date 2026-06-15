/*
 * XREFs of ?NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ @ 0x1800E1774
 * Callers:
 *     _lambda_01de1b5ef4ca3e46b34c9c5607c760ef_::operator() @ 0x1800DF920 (_lambda_01de1b5ef4ca3e46b34c9c5607c760ef_--operator().c)
 *     ?OnBluetoothBroadcastCapabilityChanged@BluetoothBroadcastProvider@@AEAAJAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z @ 0x1800E1790 (-OnBluetoothBroadcastCapabilityChanged@BluetoothBroadcastProvider@@AEAAJAEBW4BluetoothLEAudioSup.c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z @ 0x1800E1D08 (-OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z.c)
 *     _lambda_5376a2af323ddc5a5b83ae59d60facbc_::operator() @ 0x1800F68B0 (_lambda_5376a2af323ddc5a5b83ae59d60facbc_--operator().c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@DummyBroadcastProvider@@AEAAJPEBG@Z @ 0x1800F79F8 (-OnMulticastChildSessionDescriptorKeyChanged@DummyBroadcastProvider@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BluetoothBroadcastProvider::NotifyMulticastManager(BluetoothBroadcastProvider *this)
{
  (*(void (__fastcall **)(_QWORD, BluetoothBroadcastProvider *))(**((_QWORD **)this + 14) + 24LL))(
    *((_QWORD *)this + 14),
    this);
}
