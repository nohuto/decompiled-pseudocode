/*
 * XREFs of ?SetAlphaMode@CLegacyStereoSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802CAD20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180222270 (-SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyStereoSwapChain::SetAlphaMode(CLegacyStereoSwapChain *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 18) != a2 )
  {
    v4 = *((_QWORD *)this + 61);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 136LL))(v4 + 16);
    CLegacySwapChain::SetAlphaMode(this, a2);
  }
}
