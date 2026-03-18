/*
 * XREFs of ?SetSDRBoost@CConversionSwapChain@@UEAAXM@Z @ 0x1802CB980
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSDRBoost@CLegacySwapChain@@UEAAXM@Z @ 0x1802C9FF0 (-SetSDRBoost@CLegacySwapChain@@UEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConversionSwapChain::SetSDRBoost(CConversionSwapChain *this, float a2)
{
  __int64 v3; // rcx

  CLegacySwapChain::SetSDRBoost(this, a2);
  v3 = *((_QWORD *)this + 62);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 120LL))(v3);
}
