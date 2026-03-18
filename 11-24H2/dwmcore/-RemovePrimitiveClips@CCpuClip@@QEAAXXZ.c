/*
 * XREFs of ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ @ 0x180285834
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800D85C0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 */

void __fastcall CCpuClip::RemovePrimitiveClips(CRectanglesShape **this)
{
  if ( *((_BYTE *)this + 108) )
  {
    CShapePtr::~CShapePtr(this + 2);
    *((_BYTE *)this + 108) = 0;
  }
}
