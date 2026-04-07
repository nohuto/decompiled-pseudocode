/*
 * XREFs of ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x18006C890
 * Callers:
 *     <none>
 * Callees:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180053F40 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::Stop(CDirectTouchVisual *this)
{
  CDirectTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
