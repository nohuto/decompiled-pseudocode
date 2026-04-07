/*
 * XREFs of ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x1800120B0
 * Callers:
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x18001205C (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800123F8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180085D3C (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 * Callees:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800120E0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::Stop(CDirectTouchVisual *this)
{
  CDirectTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
