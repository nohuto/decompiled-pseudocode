/*
 * XREFs of ??_ECMeshGeometry2DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022CF40
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ @ 0x14022CBEC (--1CMeshGeometry2DMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CMeshGeometry2DMarshaler *__fastcall DirectComposition::CMeshGeometry2DMarshaler::`vector deleting destructor'(
        DirectComposition::CMeshGeometry2DMarshaler *Buffer,
        char a2)
{
  DirectComposition::CMeshGeometry2DMarshaler::~CMeshGeometry2DMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
