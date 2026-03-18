/*
 * XREFs of ?SetColorSpace@CLegacyStereoSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802CAD70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetColorSpace@CLegacySwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802C9E50 (-SetColorSpace@CLegacySwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyStereoSwapChain::SetColorSpace(CLegacyStereoSwapChain *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 19) != a2 )
  {
    v4 = *((_QWORD *)this + 61);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 144LL))(v4 + 16);
    CLegacySwapChain::SetColorSpace(this, a2);
  }
}
