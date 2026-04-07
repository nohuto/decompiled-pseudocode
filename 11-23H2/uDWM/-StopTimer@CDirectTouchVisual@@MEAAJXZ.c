/*
 * XREFs of ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180053F40
 * Callers:
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180053D6C (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180053EDC (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x18006C890 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18006C8C0 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x1800B67D4 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B68E8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180021E9C (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180053F90 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CDirectTouchVisual::StopTimer(CDirectTouchVisual *this)
{
  __int64 v2; // rax
  bool v3; // al
  __int64 v4; // rcx
  bool v6; // zf

  CDirectTouchVisual::StopDownTimeline(this);
  v2 = *((_QWORD *)this + 49);
  if ( v2 )
  {
    v6 = (*(_DWORD *)(v2 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v6 )
      v3 = 1;
    *((_QWORD *)this + 49) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  else
  {
    v3 = CDesktopManager::s_fTimelineDirty;
  }
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
  {
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      v3 = 1;
    *((_QWORD *)this + 50) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
