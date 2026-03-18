/*
 * XREFs of ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x1800C5254
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800764D0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1800C6720 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800C529C (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CExcludeVisualReference::Hide(CExcludeVisualReference *this)
{
  struct CVisual *VisualNoRef; // rax
  char v3; // dl
  __int64 result; // rax

  VisualNoRef = CExcludeVisualReference::GetVisualNoRef(this);
  if ( !VisualNoRef )
    return 2291674884LL;
  v3 = *((_BYTE *)VisualNoRef + 106);
  *((_BYTE *)VisualNoRef + 106) = v3 | 1;
  result = 0LL;
  *((_BYTE *)this + 20) = v3 & 1;
  *((_DWORD *)this + 4) = 2;
  return result;
}
