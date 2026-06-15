/*
 * XREFs of ??_GCBluetoothVolumeInterceptor@BluetoothControls@@UEAAPEAXI@Z @ 0x1800D2A50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBluetoothVolumeInterceptor@BluetoothControls@@UEAA@XZ @ 0x1800D2794 (--1CBluetoothVolumeInterceptor@BluetoothControls@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall BluetoothControls::CBluetoothVolumeInterceptor::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  BluetoothControls::CBluetoothVolumeInterceptor::~CBluetoothVolumeInterceptor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
