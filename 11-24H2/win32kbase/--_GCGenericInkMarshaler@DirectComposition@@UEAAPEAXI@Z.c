/*
 * XREFs of ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14006FFE0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140070018 (--1CGenericInkMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CGenericInkMarshaler *__fastcall DirectComposition::CGenericInkMarshaler::`scalar deleting destructor'(
        DirectComposition::CGenericInkMarshaler *Buffer,
        char a2)
{
  DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
