/*
 * XREFs of ?OnMouseLeave@CButton@@UEAAXXZ @ 0x1800ACAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CButton::OnMouseLeave(CButton *this)
{
  int v1; // eax

  *((_BYTE *)this + 288) &= 0xF1u;
  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x8000) == 0 )
  {
    *((_DWORD *)this + 22) = v1 | 0x8000;
    CVisual::PropagateDirtyChildren(this);
  }
}
