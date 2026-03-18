/*
 * XREFs of ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F40D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::Draw(
        CRenderData *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CRenderData::Draw(
           (unsigned __int64 *)this,
           (CRenderDataBounds *)(((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL)),
           0);
}
