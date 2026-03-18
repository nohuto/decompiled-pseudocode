/*
 * XREFs of ?Release@CCompSwapChain@@UEAAKXZ @ 0x18025BB60
 * Callers:
 *     ?Release@CCompSwapChain@@W7EAAKXZ @ 0x1802D12F0 (-Release@CCompSwapChain@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompSwapChain::Release(__int64 this)
{
  return CMILRefCountBaseT<ISwapChain,CMilObjectDeleter>::InternalRelease(this);
}
