/*
 * XREFs of ?Release@CLegacyRemotingSwapChain@@UEAAKXZ @ 0x1802C73F0
 * Callers:
 *     ?Release@CLegacyRemotingSwapChain@@W7EAAKXZ @ 0x1802C7400 (-Release@CLegacyRemotingSwapChain@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacyRemotingSwapChain::Release(__int64 this)
{
  return CMILRefCountBaseT<ILegacyRemotingSwapChain,CMilObjectDeleter>::InternalRelease(this);
}
