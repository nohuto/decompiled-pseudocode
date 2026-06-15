/*
 * XREFs of ??_GSpatialAudioStateIO@@UEAAPEAXI@Z @ 0x180121BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x180061A14 (--1SpatialAudioIO@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SpatialAudioStateIO *__fastcall SpatialAudioStateIO::`scalar deleting destructor'(SpatialAudioStateIO *this, char a2)
{
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x238);
  return this;
}
