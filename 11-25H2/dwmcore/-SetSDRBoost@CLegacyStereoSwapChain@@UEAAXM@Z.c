/*
 * XREFs of ?SetSDRBoost@CLegacyStereoSwapChain@@UEAAXM@Z @ 0x1802D4080
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSDRBoost@CLegacySwapChain@@UEAAXM@Z @ 0x1802D3270 (-SetSDRBoost@CLegacySwapChain@@UEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyStereoSwapChain::SetSDRBoost(CLegacyStereoSwapChain *this, float a2)
{
  __int64 v3; // rcx

  if ( *((float *)this + 24) != a2 )
  {
    v3 = *((_QWORD *)this + 61);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 160LL))(v3 + 16);
    CLegacySwapChain::SetSDRBoost(this, a2);
  }
}
