/*
 * XREFs of ?GetChildAt@CContainerVectorShape@@UEBAPEAVCVectorShape@@I@Z @ 0x180135810
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180135248 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     <none>
 */

struct CVectorShape *__fastcall CContainerVectorShape::GetChildAt(CContainerVectorShape *this, unsigned int a2)
{
  return *(struct CVectorShape **)(*((_QWORD *)this + 13) + 8LL * a2);
}
