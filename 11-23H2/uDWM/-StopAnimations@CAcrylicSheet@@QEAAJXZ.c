/*
 * XREFs of ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800A3698
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180048EE0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18006B7BE (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A2310 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A330C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x1800A3508 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800A394C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18005007C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x1800A2FB8 (-Hide@CAcrylicSheet@@QEAAXXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C02C (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::StopAnimations(CAcrylicSheet *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al
  __int64 v5; // rax
  char v6; // al

  v2 = *((_QWORD *)this + 67);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    CDesktopManager::s_fTimelineDirty = v4;
    *((_QWORD *)this + 67) = 0LL;
  }
  if ( *((_QWORD *)this + 69)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 137) - 0.0) & _xmm) <= 0.0000011920929 )
  {
    CAcrylicSheet::Hide(this);
  }
  v5 = *((_QWORD *)this + 69);
  if ( v5 )
  {
    v3 = (*(_DWORD *)(v5 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v6 = 1;
    CDesktopManager::s_fTimelineDirty = v6;
    *((_QWORD *)this + 69) = 0LL;
  }
  CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
    0);
  if ( *((_BYTE *)this + 464) )
  {
    *((_BYTE *)this + 464) = 0;
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  }
  return 0LL;
}
