/*
 * XREFs of ??_ECMonitorNotification@CMonitor@@UEAAPEAXI@Z @ 0x18011C750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ @ 0x1800F1764 (--1BluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@UEA.c)
 */

CMonitor::CMonitorNotification *__fastcall CMonitor::CMonitorNotification::`vector deleting destructor'(
        CMonitor::CMonitorNotification *this,
        char a2)
{
  CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext::~BluetoothAudioResourceManagerTokenContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
