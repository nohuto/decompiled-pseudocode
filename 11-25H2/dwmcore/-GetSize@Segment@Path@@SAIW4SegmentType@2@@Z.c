/*
 * XREFs of ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18005CD70
 * Callers:
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18005B568 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18005B878 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18005B8B4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18005C06C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18005C390 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18005CD20 (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x18012B430 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18021C1B0 (-BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x18021C230 (-AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18021C2B8 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall Path::Segment::GetSize(char a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( a1 )
  {
    case 0:
      return 16LL;
    case 1:
      return 8LL;
    case 2:
      return 16LL;
    case 3:
      return 28LL;
    case 4:
      return 24LL;
  }
  if ( a1 != 5 )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  return 32LL;
}
