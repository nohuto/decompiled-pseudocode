/*
 * XREFs of ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18001C298
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001C258 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18002D020 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::ForceDisconnectClientArea(CBaseObject **this)
{
  struct CVisual *v2; // rdx
  CContainerVisual *v3; // rcx
  CBaseObject *v4; // rcx

  if ( (*((_BYTE *)this + 201) & 2) != 0 )
    CTopLevelWindow::ReleaseHolographicSlate((CTopLevelWindow *)this);
  v2 = this[60];
  if ( v2 )
  {
    v3 = (CContainerVisual *)*((_QWORD *)v2 + 3);
    if ( v3 )
      CContainerVisual::RemoveChild(v3, v2);
    v4 = this[60];
    if ( v4 )
    {
      CBaseObject::Release(v4);
      this[60] = 0LL;
    }
  }
}
