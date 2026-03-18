/*
 * XREFs of ?SetAlphaMode@CConversionSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802CB830
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180222270 (-SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CConversionSwapChain::SetAlphaMode(CConversionSwapChain *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx

  CLegacySwapChain::SetAlphaMode(this, a2);
  if ( *((_DWORD *)this + 127) != a2 )
  {
    v4 = *((_QWORD *)this + 62);
    *((_DWORD *)this + 127) = a2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, (unsigned int)a2);
  }
}
