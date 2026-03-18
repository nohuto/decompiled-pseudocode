/*
 * XREFs of ??_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1400EEF00
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1400EF080 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CCrossChannelChildVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CVisualMarshaler *Buffer,
        char a2)
{
  *(_QWORD *)Buffer = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
