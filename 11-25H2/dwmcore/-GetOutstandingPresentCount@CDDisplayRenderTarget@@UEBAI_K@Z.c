/*
 * XREFs of ?GetOutstandingPresentCount@CDDisplayRenderTarget@@UEBAI_K@Z @ 0x1802816B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetOutstandingPresentCount(CDDisplayRenderTarget *this, LARGE_INTEGER a2)
{
  return CTargetStats::GetOutstandingPresents((CDDisplayRenderTarget *)((char *)this + 33368), a2);
}
