/*
 * XREFs of ?GetOutstandingPresentCount@CLegacyRenderTarget@@UEBAI_K@Z @ 0x180276A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetOutstandingPresentCount(CLegacyRenderTarget *this, LARGE_INTEGER a2)
{
  return CTargetStats::GetOutstandingPresents((CLegacyRenderTarget *)((char *)this + 32968), a2);
}
