/*
 * XREFs of ?CheckIndependentFlipSupport@CLegacySwapChain@@UEBA_NXZ @ 0x1802C9BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckIndependentFlipSupport(CLegacySwapChain *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 5) + 620LL) >= 1300;
}
