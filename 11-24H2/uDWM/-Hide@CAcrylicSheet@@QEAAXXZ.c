/*
 * XREFs of ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x1800A21FC
 * Callers:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800690A0 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x1800EC788 (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 */

void __fastcall CAcrylicSheet::Hide(CAcrylicSheet *this)
{
  CVisual::SetOpacity(this, 0.0);
  CVisual::SetSize(this, 0, 0);
}
