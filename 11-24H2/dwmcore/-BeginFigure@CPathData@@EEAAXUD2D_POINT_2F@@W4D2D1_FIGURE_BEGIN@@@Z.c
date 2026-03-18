/*
 * XREFs of ?BeginFigure@CPathData@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1802107B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18017E740 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x1802108B8 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

void __fastcall CPathData::BeginFigure(CPathData *this, struct D2D_POINT_2F a2, enum D2D1_FIGURE_BEGIN a3)
{
  unsigned int Size; // eax
  char v7; // al
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  struct D2D_POINT_2F v9; // [rsp+28h] [rbp-20h]

  Size = Path::Segment::GetSize(0);
  memset_0(v8, 0, Size);
  v7 = *((_BYTE *)this + 64);
  v8[0] = 0;
  v9 = a2;
  v8[3] = a3 == D2D1_FIGURE_BEGIN_HOLLOW;
  v8[2] = v7;
  CPathData::AppendSegment(this, (struct Path::Segment *)v8);
  *((_BYTE *)this + 64) = 0;
}
