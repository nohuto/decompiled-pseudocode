/*
 * XREFs of ??_GSpatialAudioDevicePropertyWriter@@UEAAPEAXI@Z @ 0x180123290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialAudioDevicePropertyWriter@@UEAA@XZ @ 0x180123240 (--1SpatialAudioDevicePropertyWriter@@UEAA@XZ.c)
 */

SpatialAudioDevicePropertyWriter *__fastcall SpatialAudioDevicePropertyWriter::`scalar deleting destructor'(
        SpatialAudioDevicePropertyWriter *this,
        char a2)
{
  SpatialAudioDevicePropertyWriter::~SpatialAudioDevicePropertyWriter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x278);
  return this;
}
