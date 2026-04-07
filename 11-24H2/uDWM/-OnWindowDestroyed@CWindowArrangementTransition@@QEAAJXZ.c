/*
 * XREFs of ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x1800EC788
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FC80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800690A0 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x1800A21FC (-Hide@CAcrylicSheet@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowDestroyed(CWindowArrangementTransition *this)
{
  CAcrylicSheet *v2; // rbx

  v2 = *(CAcrylicSheet **)(*(_QWORD *)this + 536LL);
  if ( v2 )
  {
    CAcrylicSheet::StopAnimations(*(CAcrylicSheet **)(*(_QWORD *)this + 536LL));
    CAcrylicSheet::Hide(v2);
  }
  *((_QWORD *)this + 1) = 0LL;
  return 0LL;
}
