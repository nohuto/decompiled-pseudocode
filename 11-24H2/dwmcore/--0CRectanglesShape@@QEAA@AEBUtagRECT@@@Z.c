/*
 * XREFs of ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x1801EC3A8
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180079C30 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this, const struct tagRECT *a2)
{
  __int64 v2; // r8
  struct D2D_RECT_F v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = (char *)this + 40;
  *((_QWORD *)this + 4) = (char *)this + 56;
  *((_QWORD *)this + 7) = 0LL;
  do
  {
    *(&v5.left + v2) = (float)*(&a2->left + v2);
    ++v2;
  }
  while ( v2 < 4 );
  CRectanglesShape::SetSingleRect(this, &v5, v2);
  return this;
}
