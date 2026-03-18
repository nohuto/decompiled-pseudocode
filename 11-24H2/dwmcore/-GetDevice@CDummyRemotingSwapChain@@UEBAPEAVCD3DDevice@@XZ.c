/*
 * XREFs of ?GetDevice@CDummyRemotingSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1802767A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDummyRemotingSwapChain::GetDevice(CDummyRemotingSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this + 6);
}
