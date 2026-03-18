/*
 * XREFs of ?IsValid@CDummyRemotingSwapChain@@UEBAJXZ @ 0x1802D0400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyRemotingSwapChain::IsValid(CDummyRemotingSwapChain *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 6) + 1112LL) != 0 ? 0x8898008D : 0;
}
