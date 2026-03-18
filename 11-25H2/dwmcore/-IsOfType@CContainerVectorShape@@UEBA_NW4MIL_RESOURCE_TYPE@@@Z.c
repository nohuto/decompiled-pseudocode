/*
 * XREFs of ?IsOfType@CContainerVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007A970
 * Callers:
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180079ED4 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x18007A3C8 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     <none>
 */

bool __fastcall CContainerVectorShape::IsOfType(__int64 a1, int a2)
{
  return (unsigned int)(a2 - 45) <= 1 || a2 == 179;
}
