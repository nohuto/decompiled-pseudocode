/*
 * XREFs of ?GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800DB188
 * Callers:
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800B409C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800CF454 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualProxy *__fastcall CTopLevelWindow::GetWindowBorderVisualProxy(CTopLevelWindow *this)
{
  struct CVisualProxy *result; // rax

  result = (struct CVisualProxy *)*((_QWORD *)this + 28);
  if ( result )
    return (struct CVisualProxy *)*((_QWORD *)result + 2);
  return result;
}
