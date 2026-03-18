/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801EF380
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180298118 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  float v3; // xmm3_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v7[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 59) )
  {
    v3 = *((float *)this + 133);
    v4 = *((float *)this + 132);
    v5 = *((float *)this + 134);
    v7[0] = *((float *)this + 131);
    v7[1] = v4;
    v7[2] = v3;
    v7[3] = v5;
    if ( v3 > v7[0] && v5 > v4 && v3 >= v7[0] && v5 >= v4 )
      COcclusionContext::AddOcclusionRect(a2, v7, 0LL);
  }
  return 0LL;
}
