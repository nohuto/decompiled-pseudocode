/*
 * XREFs of ?draw_gray_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401A7FA0
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x140121B88 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?vOrNonAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1401842C0 (-vOrNonAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 *     ?vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x14018AD60 (-vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 *     ?vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x140194020 (-vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall draw_gray_nf_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned __int64 v9; // rdx
  POINTL *p_ptl; // rsi
  unsigned __int64 v11; // rdi
  struct _GLYPHBITS *v12; // rbx

  v9 = 3LL * a2;
  if ( a1 < &a1[v9 / 3] )
  {
    p_ptl = &a1->ptl;
    v11 = (8 * v9 - 1) / 0x18 + 1;
    do
    {
      v12 = **(struct _GLYPHBITS ***)&p_ptl[-1];
      (*(&funcs_1401A805D[2 * ((LOBYTE(v12->ptlOrigin.x) + LOBYTE(p_ptl->x) - (_BYTE)a4) & 1u)]
       + (v12->sizlBitmap.cx & 1)))(
        v12,
        (unsigned int)(v12->sizlBitmap.cx + 1) >> 1,
        &a3[a5 * (__int64)(int)(v12->ptlOrigin.y + p_ptl->y - a7) + (v12->ptlOrigin.x + p_ptl->x - a4) / 2],
        a5);
      p_ptl += 3;
      --v11;
    }
    while ( v11 );
  }
}
