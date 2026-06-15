/*
 * XREFs of ??_GAudioDeviceModule@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140077550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioDeviceModule@Devices@Media@Windows@@MEAA@XZ @ 0x140076E2C (--1AudioDeviceModule@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::AudioDeviceModule *__fastcall Windows::Media::Devices::AudioDeviceModule::`scalar deleting destructor'(
        Windows::Media::Devices::AudioDeviceModule *this,
        char a2)
{
  Windows::Media::Devices::AudioDeviceModule::~AudioDeviceModule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
