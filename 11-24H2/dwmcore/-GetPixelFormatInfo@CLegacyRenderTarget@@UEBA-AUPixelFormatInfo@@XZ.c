/*
 * XREFs of ?GetPixelFormatInfo@CLegacyRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801EEF90
 * Callers:
 *     ?GetPixelFormatInfo@CLegacyRenderTarget@@WFA@EBA?AUPixelFormatInfo@@XZ @ 0x180276AA0 (-GetPixelFormatInfo@CLegacyRenderTarget@@WFA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?GetPixelFormatInfo@COverlaySwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801EEFF0 (-GetPixelFormatInfo@COverlaySwapChain@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void (*v4)(void); // rax

  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)(v2 + 32) + 24LL);
    if ( (char *)v4 == (char *)COverlaySwapChain::GetPixelFormatInfo )
      COverlaySwapChain::GetPixelFormatInfo();
    else
      v4();
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 56);
  }
  return a2;
}
