/*
 * XREFs of ?GetVBlankDuration@CDummyRemotingSwapChain@@UEBA_KXZ @ 0x1802D0090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __fastcall CDummyRemotingSwapChain::GetVBlankDuration(CDummyRemotingSwapChain *this)
{
  return g_qpcFrequency.QuadPart * *((unsigned int *)this + 24) / *((unsigned int *)this + 23);
}
