/*
 * XREFs of ?SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18022D6E0
 * Callers:
 *     ?SetAlphaMode@CLegacyStereoSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802D3F90 (-SetAlphaMode@CLegacyStereoSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetAlphaMode@CConversionSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802D4AA0 (-SetAlphaMode@CConversionSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySwapChain::SetAlphaMode(CLegacySwapChain *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 18) != a2 )
  {
    *((_DWORD *)this + 18) = a2;
    v2 = *((_QWORD *)this + 34);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 136LL))(v2 + 16);
  }
}
