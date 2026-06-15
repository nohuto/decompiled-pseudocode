/*
 * XREFs of ??_GCBluetoothAudioEndpointResourceManagerProvider@@UEAAPEAXI@Z @ 0x1800F1BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ @ 0x1800F178C (--1CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ.c)
 */

CBluetoothAudioEndpointResourceManagerProvider *__fastcall CBluetoothAudioEndpointResourceManagerProvider::`scalar deleting destructor'(
        CBluetoothAudioEndpointResourceManagerProvider *this,
        char a2)
{
  CBluetoothAudioEndpointResourceManagerProvider::~CBluetoothAudioEndpointResourceManagerProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
