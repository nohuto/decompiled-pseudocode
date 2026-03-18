/*
 * XREFs of ?WaitForVBlank@CLegacyRemotingSwapChain@@UEBAJXZ @ 0x1802CCDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRemotingSwapChain::WaitForVBlank(CLegacyRemotingSwapChain *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 48LL))(*((_QWORD *)this + 11));
}
