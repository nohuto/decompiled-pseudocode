/*
 * XREFs of ?GetFrameMaximizedClipMargins@CTopLevelWindow@@AEAA?AU_MARGINS@@XZ @ 0x18009B178
 * Callers:
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180002F8C (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 * Callees:
 *     <none>
 */

struct _MARGINS *__fastcall CTopLevelWindow::GetFrameMaximizedClipMargins(
        CTopLevelWindow *this,
        struct _MARGINS *__return_ptr retstr)
{
  struct _MARGINS *result; // rax

  result = retstr;
  *retstr = *(struct _MARGINS *)((char *)this + 636);
  return result;
}
