/*
 * XREFs of ?GetOutstandingPresentCount@CLegacyRenderTarget@@UEBAI_K@Z @ 0x1802816D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetOutstandingPresentCount(CLegacyRenderTarget *this, LARGE_INTEGER a2)
{
  return CTargetStats::GetOutstandingPresents((CLegacyRenderTarget *)((char *)this + 33352), a2);
}
