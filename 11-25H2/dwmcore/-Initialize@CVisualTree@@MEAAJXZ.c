/*
 * XREFs of ?Initialize@CVisualTree@@MEAAJXZ @ 0x1801ABE30
 * Callers:
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1802963E0 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 * Callees:
 *     ?AddVisualTree@CComposition@@QEAAXPEAVCVisualTree@@@Z @ 0x1801ABE70 (-AddVisualTree@CComposition@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1801ABF24 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CVisualTree::Initialize(CVisualTree *this)
{
  CVisual *v1; // rbx

  v1 = (CVisual *)*((_QWORD *)this + 9);
  CVisual::SetVisualTreeNoRef(v1, this);
  *((_BYTE *)v1 + 96) |= 1u;
  CComposition::AddVisualTree(*((CComposition **)this + 3), this);
  return 0LL;
}
