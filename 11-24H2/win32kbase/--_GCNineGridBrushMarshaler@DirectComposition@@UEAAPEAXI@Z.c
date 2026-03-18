/*
 * XREFs of ??_GCNineGridBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140110BE0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

DirectComposition::CNineGridBrushMarshaler *__fastcall DirectComposition::CNineGridBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CNineGridBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CNineGridBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
