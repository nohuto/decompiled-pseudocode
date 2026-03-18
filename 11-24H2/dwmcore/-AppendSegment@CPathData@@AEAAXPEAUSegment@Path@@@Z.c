/*
 * XREFs of ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x1802108B8
 * Callers:
 *     ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1802107B0 (-BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x180210830 (-AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z @ 0x1802B6170 (-AddArc@CPathData@@EEAAXPEBUD2D1_ARC_SEGMENT@@@Z.c)
 *     ?AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z @ 0x1802B61F0 (-AddBezier@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@@Z.c)
 *     ?AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z @ 0x1802B6240 (-AddLine@CPathData@@EEAAXUD2D_POINT_2F@@@Z.c)
 *     ?AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1802B6290 (-AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z @ 0x1802B6300 (-AddQuadraticBezier@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@@Z.c)
 *     ?AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z @ 0x1802B6360 (-AddQuadraticBeziers@CPathData@@EEAAXPEBUD2D1_QUADRATIC_BEZIER_SEGMENT@@I@Z.c)
 *     ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x1802B63D0 (-EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18017E740 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPathData::AppendSegment(CPathData *this, struct Path::Segment *a2)
{
  char v4; // al
  unsigned int Size; // eax
  gsl::details *v6; // rcx
  size_t v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_BYTE *)a2 )
    v4 = *((_BYTE *)this + 65);
  else
    v4 = 0;
  *((_BYTE *)a2 + 1) = v4;
  *((_BYTE *)this + 65) = 0;
  Size = Path::Segment::GetSize(*(_BYTE *)a2);
  gsl::details::extent_type<-1>::extent_type<-1>(v7, Size);
  if ( v7[0] == -1LL || (v6 = (CPathData *)((char *)this + 16), a2 > (struct Path::Segment *)((char *)a2 + v7[0])) )
    `gsl::details::get_terminate_handler'::`2'::handler(v6);
  std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(
    (__int64)v6,
    *((_BYTE **)this + 3),
    a2,
    v7[0]);
}
