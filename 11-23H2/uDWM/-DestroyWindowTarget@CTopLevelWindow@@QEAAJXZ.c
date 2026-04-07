/*
 * XREFs of ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E5330
 * Callers:
 *     wil::details::lambda_call__lambda_85f3225b710f422e24871280d0146166___::_lambda_call__lambda_85f3225b710f422e24871280d0146166___ @ 0x1800E4ED8 (wil--details--lambda_call__lambda_85f3225b710f422e24871280d0146166___--_lambda_call__lambda_85f3.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E51F0 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180109CA0 (-DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::DestroyWindowTarget(CTopLevelWindow *this)
{
  __int64 v2; // rcx
  struct CVisual *v3; // rdx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    v3 = (struct CVisual *)*((_QWORD *)this + 103);
    if ( v3 )
      VisualCollection::Remove((VisualCollection *)(v2 + 32), v3);
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 103);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 103) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 104);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 104) = 0LL;
  }
  return 0LL;
}
