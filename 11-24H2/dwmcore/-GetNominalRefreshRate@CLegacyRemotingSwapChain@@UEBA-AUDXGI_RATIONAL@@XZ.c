/*
 * XREFs of ?GetNominalRefreshRate@CLegacyRemotingSwapChain@@UEBA?AUDXGI_RATIONAL@@XZ @ 0x1802CC060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DXGI_RATIONAL __fastcall CLegacyRemotingSwapChain::GetNominalRefreshRate(
        CLegacyRemotingSwapChain *this,
        _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 13);
  return (struct DXGI_RATIONAL)a2;
}
