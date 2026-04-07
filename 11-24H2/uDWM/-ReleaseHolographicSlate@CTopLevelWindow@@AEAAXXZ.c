/*
 * XREFs of ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18002D020
 * Callers:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18001C298 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x18002CC48 (-UpdateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18002D450 (--1CTopLevelWindow@@EEAA@XZ.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow::ReleaseHolographicSlate(CTopLevelWindow *this)
{
  CContainerVisual *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  struct CVisual *v5; // rdx

  v2 = (CContainerVisual *)*((_QWORD *)this + 97);
  if ( v2 )
  {
    v5 = (struct CVisual *)*((_QWORD *)this + 60);
    if ( v5 )
      CContainerVisual::InsertChildAfter(v2, v5, 0LL);
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 96);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 96) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 97);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 97) = 0LL;
  }
}
