/*
 * XREFs of ?GetDevice@CLegacyRemotingSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x180232B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacyRemotingSwapChain::GetDevice(CLegacyRemotingSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this + 7);
}
