/*
 * XREFs of ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800690A0
 * Callers:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x180067DFC (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18006821C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x180068EC4 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A1FB8 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A230C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x1800EC788 (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180069148 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180069230 (-UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x1800A21FC (-Hide@CAcrylicSheet@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::StopAnimations(CAcrylicSheet *this)
{
  CTimelineBase *v2; // rcx
  CTimelineBase *v3; // rcx

  v2 = (CTimelineBase *)*((_QWORD *)this + 61);
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)this + 61) = 0LL;
  }
  if ( *((_QWORD *)this + 63)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 125) - 0.0) & _xmm) <= 0.0000011920929 )
  {
    CAcrylicSheet::Hide(this);
  }
  v3 = (CTimelineBase *)*((_QWORD *)this + 63);
  if ( v3 )
  {
    CTimelineBase::Release(v3);
    *((_QWORD *)this + 63) = 0LL;
  }
  CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    0);
  CAcrylicSheet::UnRegisterGlobalTimer(this);
  return 0LL;
}
