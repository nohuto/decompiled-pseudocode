/*
 * XREFs of ?EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ @ 0x18026594C
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180198818 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180206CD0 (-AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800C529C (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180109514 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

void __fastcall CComposition::CursorVisualData::EnsureVisualTree(struct CVisualTree **this)
{
  CVisual *VisualNoRef; // rax

  if ( CExcludeVisualReference::GetVisualNoRef((CExcludeVisualReference *)this) )
  {
    if ( !this[3] )
    {
      VisualNoRef = CExcludeVisualReference::GetVisualNoRef((CExcludeVisualReference *)this);
      CVisual::GetVisualTree(VisualNoRef, this + 3);
    }
  }
}
