/*
 * XREFs of ??_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1400EEFC0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1400EF080 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CShapeVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CVisualMarshaler *Buffer,
        char a2)
{
  *(_QWORD *)Buffer = &DirectComposition::CShapeVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
