/*
 * XREFs of ?GetVBlankDuration@CLegacyRemotingSwapChain@@UEBA_KXZ @ 0x1802CC2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __fastcall CLegacyRemotingSwapChain::GetVBlankDuration(CLegacyRemotingSwapChain *this)
{
  return g_qpcFrequency.QuadPart * *((unsigned int *)this + 27) / *((unsigned int *)this + 26);
}
