/*
 * XREFs of ?GetChildrenCount@CContainerVectorShape@@UEBAIXZ @ 0x1801357D0
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180135248 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContainerVectorShape::GetChildrenCount(CContainerVectorShape *this)
{
  return (__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 3;
}
