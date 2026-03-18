/*
 * XREFs of ?QueryInterface@CLegacyRemotingSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D0650
 * Callers:
 *     ?QueryInterface@CLegacyRemotingSwapChain@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D0660 (-QueryInterface@CLegacyRemotingSwapChain@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacyRemotingSwapChain::QueryInterface(__int64 this, _QWORD *a2, _QWORD *a3)
{
  return CMILCOMBaseT<ILegacyRemotingSwapChain,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
