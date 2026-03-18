/*
 * XREFs of ?GetBackBuffer@CDDASwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x18020E0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CDDASwapChain::GetBackBuffer(CDDASwapChain *this)
{
  return (struct IDeviceTarget *)((*((_QWORD *)this + 8) + 16LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL));
}
