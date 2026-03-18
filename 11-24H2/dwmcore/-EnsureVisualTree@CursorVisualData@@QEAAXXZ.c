/*
 * XREFs of ?EnsureVisualTree@CursorVisualData@@QEAAXXZ @ 0x18025A9C8
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18019E0EC (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022FE0C (-AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180039A04 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180097238 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CursorVisualData::EnsureVisualTree(struct CVisualTree **this)
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
