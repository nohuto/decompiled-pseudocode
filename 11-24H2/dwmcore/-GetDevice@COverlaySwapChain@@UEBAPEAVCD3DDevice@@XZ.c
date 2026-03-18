/*
 * XREFs of ?GetDevice@COverlaySwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1801E17C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall COverlaySwapChain::GetDevice(COverlaySwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this + 5);
}
