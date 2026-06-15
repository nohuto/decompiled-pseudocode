/*
 * XREFs of ??_EBluetoothVolumeAndMute@BluetoothControls@@UEAAPEAXI@Z @ 0x1800D2A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BluetoothVolumeAndMute@BluetoothControls@@UEAA@XZ @ 0x1800D2714 (--1BluetoothVolumeAndMute@BluetoothControls@@UEAA@XZ.c)
 */

BluetoothControls::BluetoothVolumeAndMute *__fastcall BluetoothControls::BluetoothVolumeAndMute::`vector deleting destructor'(
        BluetoothControls::BluetoothVolumeAndMute *this,
        struct wil::details::event_watcher_state *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BluetoothControls::BluetoothVolumeAndMute::~BluetoothVolumeAndMute(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
