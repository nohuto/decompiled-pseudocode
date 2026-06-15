/*
 * XREFs of ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x18005A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialAudioDevicePropertyReader@@UEAA@XZ @ 0x18005A0EC (--1SpatialAudioDevicePropertyReader@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SpatialAudioDevicePropertyReader *__fastcall SpatialAudioDevicePropertyReader::`vector deleting destructor'(
        SpatialAudioDevicePropertyReader *this,
        char a2)
{
  SpatialAudioDevicePropertyReader::~SpatialAudioDevicePropertyReader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
