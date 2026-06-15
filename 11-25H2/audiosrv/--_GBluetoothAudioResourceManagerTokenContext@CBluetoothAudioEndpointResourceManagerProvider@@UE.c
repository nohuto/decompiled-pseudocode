/*
 * XREFs of ??_GBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@UEAAPEAXI@Z @ 0x1800ECB00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ @ 0x1800EC754 (--1BluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@UEA.c)
 */

CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext *__fastcall CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext::`scalar deleting destructor'(
        CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext *this,
        char a2)
{
  CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext::~BluetoothAudioResourceManagerTokenContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
