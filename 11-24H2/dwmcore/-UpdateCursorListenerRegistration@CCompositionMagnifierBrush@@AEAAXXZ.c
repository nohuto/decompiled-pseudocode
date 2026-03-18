/*
 * XREFs of ?UpdateCursorListenerRegistration@CCompositionMagnifierBrush@@AEAAXXZ @ 0x1802973A8
 * Callers:
 *     ?ProcessSetShowCursor@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETSHOWCURSOR@@@Z @ 0x1802972D4 (-ProcessSetShowCursor@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSI.c)
 *     ?ProcessSetTrackCursor@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETTRACKCURSOR@@@Z @ 0x180297314 (-ProcessSetTrackCursor@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOS.c)
 * Callees:
 *     ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022FE0C (-AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?UnregisterCursorListener@CCompositionMagnifierBrush@@AEAAXXZ @ 0x180297380 (-UnregisterCursorListener@CCompositionMagnifierBrush@@AEAAXXZ.c)
 */

void __fastcall CCompositionMagnifierBrush::UpdateCursorListenerRegistration(CCompositionMagnifierBrush *this)
{
  char v2; // al

  v2 = *((_BYTE *)this + 205) || *((_BYTE *)this + 204);
  if ( v2 != *((_BYTE *)this + 206) )
  {
    if ( v2 )
    {
      CComposition::AddCursorVisualListener(this, this);
      *((_BYTE *)this + 206) = 1;
    }
    else
    {
      CCompositionMagnifierBrush::UnregisterCursorListener(this);
    }
  }
}
