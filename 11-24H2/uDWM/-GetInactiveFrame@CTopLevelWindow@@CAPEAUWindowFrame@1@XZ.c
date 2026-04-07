/*
 * XREFs of ?GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ @ 0x18007F914
 * Callers:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180022998 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CTopLevelWindow::WindowFrame *CTopLevelWindow::GetInactiveFrame(void)
{
  return *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
}
