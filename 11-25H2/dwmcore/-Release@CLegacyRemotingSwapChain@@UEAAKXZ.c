/*
 * XREFs of ?Release@CLegacyRemotingSwapChain@@UEAAKXZ @ 0x1802D0670
 * Callers:
 *     ?Release@CLegacyRemotingSwapChain@@W7EAAKXZ @ 0x1802D0680 (-Release@CLegacyRemotingSwapChain@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacyRemotingSwapChain::Release(__int64 this)
{
  return CMILRefCountBaseT<ILegacyRemotingSwapChain,CMilObjectDeleter>::InternalRelease(this);
}
