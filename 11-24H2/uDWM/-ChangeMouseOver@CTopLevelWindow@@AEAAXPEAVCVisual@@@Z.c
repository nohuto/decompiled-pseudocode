/*
 * XREFs of ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180021788
 * Callers:
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180020A20 (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180021154 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?MouseLeave@CVisual@@QEAAXXZ @ 0x180021B70 (-MouseLeave@CVisual@@QEAAXXZ.c)
 *     ?MouseEnter@CVisual@@QEAAXXZ @ 0x180021B84 (-MouseEnter@CVisual@@QEAAXXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow::ChangeMouseOver(CTopLevelWindow *this, struct CVisual *a2)
{
  CVisual *v2; // rbx
  CVisual *v4; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 91);
  if ( a2 != v2 )
  {
    *((_QWORD *)this + 91) = a2;
    if ( a2 )
      CMILRefCountBase::AddRef(a2);
    if ( v2 )
      CVisual::MouseLeave(v2);
    v4 = (CVisual *)*((_QWORD *)this + 91);
    if ( v4 )
      CVisual::MouseEnter(v4);
    if ( v2 )
      CBaseObject::Release(v2);
  }
}
