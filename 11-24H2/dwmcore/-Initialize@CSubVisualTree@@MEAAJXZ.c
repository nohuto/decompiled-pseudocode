/*
 * XREFs of ?Initialize@CSubVisualTree@@MEAAJXZ @ 0x180221B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubVisualTree::Initialize(CSubVisualTree *this)
{
  return CVisual::CalcRootBounds(*((struct D2D_SIZE_F **)this + 9), (float *)this + 20);
}
