/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x140106A90
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ @ 0x140106B08 (--1CRegionGeometryMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CRegionGeometryMarshaler *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`scalar deleting destructor'(
        DirectComposition::CRegionGeometryMarshaler *Buffer,
        char a2)
{
  *(_QWORD *)Buffer = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::`vftable';
  DirectComposition::CRegionGeometryMarshaler::~CRegionGeometryMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
