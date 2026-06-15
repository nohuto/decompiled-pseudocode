/*
 * XREFs of std::_Func_impl_no_alloc__lambda_87eef03b40d5bb222c8cf5623be8d594__void_::_Do_call @ 0x1800E7A20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnBluetoothBroadcastCapabilityChanged@BluetoothBroadcastProvider@@AEAAJAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z @ 0x1800E61F0 (-OnBluetoothBroadcastCapabilityChanged@BluetoothBroadcastProvider@@AEAAJAEBW4BluetoothLEAudioSup.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_87eef03b40d5bb222c8cf5623be8d594__void_::_Do_call(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = BluetoothBroadcastProvider::OnBluetoothBroadcastCapabilityChanged(
         *(BluetoothBroadcastProvider **)(a1 + 8),
         (const enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState *)(a1 + 16));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      164LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
      (const char *)(unsigned int)v1);
}
