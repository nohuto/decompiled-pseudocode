/*
 * XREFs of ?OnMouseLeftButton@CButton@@UEAAX_N@Z @ 0x1800ACAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CButton::OnMouseLeftButton(CButton *this, char a2)
{
  int v2; // eax

  if ( ((*((_BYTE *)this + 288) & 4) != 0) != a2 )
  {
    v2 = *((_DWORD *)this + 22);
    *((_BYTE *)this + 288) = (4 * a2) | *((_BYTE *)this + 288) & 0xFB;
    if ( (v2 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 22) = v2 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
}
