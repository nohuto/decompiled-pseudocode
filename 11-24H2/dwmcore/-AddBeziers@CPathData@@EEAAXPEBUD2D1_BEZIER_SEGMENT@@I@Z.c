/*
 * XREFs of ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x180210830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18017E740 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x1802108B8 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

void __fastcall CPathData::AddBeziers(CPathData *this, const struct D2D1_BEZIER_SEGMENT *a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned int Size; // eax
  FLOAT *p_y; // rbx
  int v8; // xmm1_4
  char v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  v4 = a3;
  Size = Path::Segment::GetSize(5);
  memset_0(v9, 0, Size);
  v9[0] = 5;
  if ( (_DWORD)v4 )
  {
    p_y = &a2->point3.y;
    do
    {
      v8 = *(_DWORD *)p_y;
      v10 = *(_OWORD *)(p_y - 5);
      v11 = *((_DWORD *)p_y - 1);
      v12 = v8;
      CPathData::AppendSegment(this, (struct Path::Segment *)v9);
      p_y += 6;
      --v4;
    }
    while ( v4 );
  }
}
