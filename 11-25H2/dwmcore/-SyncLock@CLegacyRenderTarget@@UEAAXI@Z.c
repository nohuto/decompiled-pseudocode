/*
 * XREFs of ?SyncLock@CLegacyRenderTarget@@UEAAXI@Z @ 0x180084850
 * Callers:
 *     <none>
 * Callees:
 *     ?UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ @ 0x180085CE0 (-UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x180085CF0 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::SyncLock(CLegacyRenderTarget *this, unsigned int a2)
{
  __int64 v3; // rdi
  CLegacyRenderTarget *v4; // rcx
  __int64 (*v5)(void); // rax
  char v6; // al
  __int64 v7; // rcx

  v3 = a2;
  if ( *((_DWORD *)this + 8400) )
  {
    v4 = (CLegacyRenderTarget *)((char *)this - 160);
    v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 216LL);
    if ( (char *)v5 == (char *)CLegacyRenderTarget::UseLegacyPresent )
      v6 = CLegacyRenderTarget::UseLegacyPresent(v4);
    else
      v6 = v5();
    if ( (int)COverlayContext::SyncLock(
                (CLegacyRenderTarget *)((char *)this + 56),
                (struct IOverlaySwapChain *)((*((_QWORD *)this + 5) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 5) >> 64)),
                v3,
                *((_DWORD *)this + 8390),
                v6) >= 0 )
    {
      *((_DWORD *)this + 8400) += v3;
      ++*((_DWORD *)this + 8401);
      v7 = *((_QWORD *)this + 4193);
      if ( v7 )
      {
        *((_QWORD *)this + 4193) = v7 + *((_QWORD *)this + 4194) * v3;
        *((_DWORD *)this + 8390) += v3;
      }
    }
  }
}
