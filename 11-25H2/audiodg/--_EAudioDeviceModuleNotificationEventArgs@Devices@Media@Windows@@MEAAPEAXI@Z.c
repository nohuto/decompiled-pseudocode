/*
 * XREFs of ??_EAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140079A50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ @ 0x140079368 (--1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *__fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vector deleting destructor'(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        char a2)
{
  Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::~AudioDeviceModuleNotificationEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
