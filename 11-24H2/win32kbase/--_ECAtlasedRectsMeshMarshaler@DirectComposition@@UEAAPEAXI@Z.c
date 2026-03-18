/*
 * XREFs of ??_ECAtlasedRectsMeshMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022CE80
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA@XZ @ 0x14022CBC4 (--1CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CAtlasedRectsMeshMarshaler *__fastcall DirectComposition::CAtlasedRectsMeshMarshaler::`vector deleting destructor'(
        DirectComposition::CAtlasedRectsMeshMarshaler *Buffer,
        char a2)
{
  DirectComposition::CAtlasedRectsMeshMarshaler::~CAtlasedRectsMeshMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
