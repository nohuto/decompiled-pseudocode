/*
 * XREFs of ?QueryInterface@CCompSwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D12D0
 * Callers:
 *     ?QueryInterface@CDDASwapChain@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D12E0 (-QueryInterface@CDDASwapChain@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompSwapChain::QueryInterface(__int64 this, _QWORD *a2, _QWORD *a3)
{
  return CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
