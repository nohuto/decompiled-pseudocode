/*
 * XREFs of ?GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ @ 0x18009B068
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800497FC (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CImmersiveState::GetTopBackgroundWindow(CImmersiveState *this)
{
  return (struct CWindowData *)*((_QWORD *)this + 6);
}
