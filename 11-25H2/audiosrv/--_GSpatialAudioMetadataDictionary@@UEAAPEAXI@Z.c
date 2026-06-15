/*
 * XREFs of ??_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z @ 0x1801249C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialAudioMetadataDictionary@@UEAA@XZ @ 0x180124968 (--1SpatialAudioMetadataDictionary@@UEAA@XZ.c)
 */

SpatialAudioMetadataDictionary *__fastcall SpatialAudioMetadataDictionary::`scalar deleting destructor'(
        SpatialAudioMetadataDictionary *this,
        char a2)
{
  SpatialAudioMetadataDictionary::~SpatialAudioMetadataDictionary(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
