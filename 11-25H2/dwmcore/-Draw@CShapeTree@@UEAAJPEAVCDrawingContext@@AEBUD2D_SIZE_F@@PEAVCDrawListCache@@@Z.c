/*
 * XREFs of ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180177340
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800149A0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18017741C (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 */

__int64 __fastcall CShapeTree::Draw(
        CShapeTree *this,
        const void **a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax

  if ( *((_DWORD *)a2 + 80) && (v8 = *((_DWORD *)a2 + 80)) != 0 && *((_BYTE *)a2[39] + (unsigned int)(v8 - 1))
    || !*((_DWORD *)a2 + 163) && *((_DWORD *)a2 + 114)
    || CDrawingContext::IsHDRTarget((CDrawingContext *)a2) )
  {
    v11 = CContent::Draw(this, a2, a3, a4);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x16u, 0LL);
  }
  else
  {
    v9 = CShapeTree::DrawShapes((__m128 *)this, (struct CDrawingContext *)a2, a3);
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1Au, 0LL);
  }
  return v10;
}
