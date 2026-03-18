/*
 * XREFs of ?GetLiftedOverlayHost@CDesktopTree@@UEBAPEAVILiftedOverlayHost@@XZ @ 0x180021E10
 * Callers:
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z @ 0x180021C9C (-EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

struct ILiftedOverlayHost *__fastcall CDesktopTree::GetLiftedOverlayHost(CDesktopTree *this)
{
  return (struct ILiftedOverlayHost *)*((_QWORD *)this + 569);
}
