/*
 * XREFs of ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x18017CE28
 * Callers:
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017C67C (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18017C860 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x18017CC38 (-UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x18017CE7C (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1801127EC (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 */

void __fastcall ControllerProcessor::UpdateManipulationInjectionRect(ControllerProcessor *this)
{
  bool v1; // al

  v1 = *((_DWORD *)this + 80) - *((_DWORD *)this + 78) >= 80 && *((_DWORD *)this + 81) - *((_DWORD *)this + 79) >= 80;
  *((_BYTE *)this + 1265) = v1;
  if ( v1 )
    ManipulationInjector::SetInjectionRect((struct tagRECT *)this + 28, (const struct tagRECT *)((char *)this + 312));
}
