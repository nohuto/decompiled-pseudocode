/*
 * XREFs of ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18004EC5C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18004C9C8 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18004F2E4 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow::ReleaseHolographicSlate(CTopLevelWindow *this)
{
  CBaseObject *v2; // rcx
  unsigned __int64 v3; // rdx
  VisualCollection *v4; // rcx
  CBaseObject *v5; // rcx
  int v6; // [rsp+20h] [rbp-18h]

  v2 = (CBaseObject *)*((_QWORD *)this + 101);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    v3 = *((_QWORD *)this + 65);
    v4 = (VisualCollection *)(*((_QWORD *)this + 102) + 32LL);
    *((_QWORD *)this + 101) = 0LL;
    VisualCollection::InsertRelative(v4, v3, 0LL, 1u, v6);
    v5 = (CBaseObject *)*((_QWORD *)this + 102);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 102) = 0LL;
    }
  }
}
