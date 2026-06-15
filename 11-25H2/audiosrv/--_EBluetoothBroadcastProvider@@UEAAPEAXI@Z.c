/*
 * XREFs of ??_EBluetoothBroadcastProvider@@UEAAPEAXI@Z @ 0x1800E0660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BluetoothBroadcastProvider@@UEAA@XZ @ 0x1800DF684 (--1BluetoothBroadcastProvider@@UEAA@XZ.c)
 */

BluetoothBroadcastProvider *__fastcall BluetoothBroadcastProvider::`vector deleting destructor'(
        BluetoothBroadcastProvider *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BluetoothBroadcastProvider::~BluetoothBroadcastProvider(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
