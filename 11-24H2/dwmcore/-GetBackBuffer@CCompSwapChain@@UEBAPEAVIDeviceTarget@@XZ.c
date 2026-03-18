/*
 * XREFs of ?GetBackBuffer@CCompSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1802C79F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CCompSwapChain::GetBackBuffer(CCompSwapChain *this)
{
  return (struct IDeviceTarget *)((*((_QWORD *)this + 10) + 16LL) & -(__int64)(*((_QWORD *)this + 10) != 0LL));
}
