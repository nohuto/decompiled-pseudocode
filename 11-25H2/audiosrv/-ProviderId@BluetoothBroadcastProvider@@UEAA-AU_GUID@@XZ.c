/*
 * XREFs of ?ProviderId@BluetoothBroadcastProvider@@UEAA?AU_GUID@@XZ @ 0x1800E1F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall BluetoothBroadcastProvider::ProviderId(
        BluetoothBroadcastProvider *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)BLUETOOTH_AUDIO_BROADCAST_PROVIDER;
  return result;
}
