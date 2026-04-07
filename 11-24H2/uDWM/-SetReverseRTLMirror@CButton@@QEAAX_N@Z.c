/*
 * XREFs of ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x18008BABC
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180030618 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CButton::SetReverseRTLMirror(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 240) & 0x20) != 0) != a2 )
  {
    *((_BYTE *)this + 240) = (32 * a2) | *((_BYTE *)this + 240) & 0xDF;
    CVisual::SetDirtyFlags(this, 0x8000);
  }
}
