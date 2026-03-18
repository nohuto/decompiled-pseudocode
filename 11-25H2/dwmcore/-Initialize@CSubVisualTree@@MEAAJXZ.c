/*
 * XREFs of ?Initialize@CSubVisualTree@@MEAAJXZ @ 0x18022CF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubVisualTree::Initialize(CSubVisualTree *this, __int64 a2, __int64 a3)
{
  return CVisual::CalcRootBounds(*((CVisual **)this + 9), (float *)this + 20, a3);
}
