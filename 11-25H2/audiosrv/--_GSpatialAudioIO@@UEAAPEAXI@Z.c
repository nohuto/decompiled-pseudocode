/*
 * XREFs of ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x180121B60
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x180061A14 (--1SpatialAudioIO@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SpatialAudioIO *__fastcall SpatialAudioIO::`scalar deleting destructor'(SpatialAudioIO *this, char a2)
{
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x220);
  return this;
}
