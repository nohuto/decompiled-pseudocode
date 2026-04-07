/*
 * XREFs of ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800DAE40
 * Callers:
 *     wil::details::lambda_call__lambda_85f3225b710f422e24871280d0146166___::_lambda_call__lambda_85f3225b710f422e24871280d0146166___ @ 0x1800DAA5C (wil--details--lambda_call__lambda_85f3225b710f422e24871280d0146166___--_lambda_call__lambda_85f3.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800DACF4 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF2E0 (-DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::DestroyWindowTarget(CTopLevelWindow *this)
{
  CContainerVisual *v2; // rcx
  struct CVisual *v3; // rdx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  v2 = (CContainerVisual *)*((_QWORD *)this + 31);
  if ( v2 )
  {
    v3 = (struct CVisual *)*((_QWORD *)this + 98);
    if ( v3 )
      CContainerVisual::RemoveChild(v2, v3);
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 98);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 98) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 99);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 99) = 0LL;
  }
  return 0LL;
}
