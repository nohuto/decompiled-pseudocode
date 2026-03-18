/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801E5120
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18028CCA8 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3,
        __int64 a4)
{
  float v4; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v8[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 59) )
  {
    v4 = *((float *)this + 133);
    v5 = *((float *)this + 132);
    v6 = *((float *)this + 134);
    v8[0] = *((float *)this + 131);
    v8[1] = v5;
    v8[2] = v4;
    v8[3] = v6;
    if ( v4 > v8[0] && v6 > v5 && v4 >= v8[0] && v6 >= v5 )
      COcclusionContext::AddOcclusionRect(a2, v8, 0LL, a4);
  }
  return 0LL;
}
