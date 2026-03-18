/*
 * XREFs of ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140224BD0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140070B10 (--1CInkMarshaler@DirectComposition@@UEAA@XZ.c)
 */

char **__fastcall DirectComposition::CInkMarshaler::`vector deleting destructor'(char **Buffer, char a2)
{
  DirectComposition::CInkMarshaler::~CInkMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
