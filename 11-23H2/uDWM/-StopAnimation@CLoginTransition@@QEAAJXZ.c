/*
 * XREFs of ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18002DB6C
 * Callers:
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x180021630 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002D458 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180054FEC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180108BA8 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180055D1C (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 */

__int64 __fastcall CLoginTransition::StopAnimation(CLoginTransition *this)
{
  if ( *((_BYTE *)this + 68) )
  {
    CLoginTransition::_CleanupAnimation(this);
    *((_BYTE *)this + 68) = 0;
  }
  return 0LL;
}
