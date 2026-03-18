/*
 * XREFs of ?WaitForVBlank@CDummyRemotingSwapChain@@UEBAJXZ @ 0x1802D0690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyRemotingSwapChain::WaitForVBlank(CDummyRemotingSwapChain *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 48LL))(
           *((_QWORD *)this + 7),
           0LL,
           0LL);
}
