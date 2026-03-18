/*
 * XREFs of ?SyncLock@CLegacyRenderTarget@@UEAAXI@Z @ 0x1801F8960
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800584AC (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     ?UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ @ 0x180058890 (-UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::SyncLock(CLegacyRenderTarget *this, unsigned int a2)
{
  __int64 v3; // rdi
  CLegacyRenderTarget *v4; // rcx
  __int64 (*v5)(void); // rax
  char v6; // al
  __int64 v7; // rcx

  v3 = a2;
  if ( *((_DWORD *)this + 8304) )
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
                *((_DWORD *)this + 8294),
                v6) >= 0 )
    {
      *((_DWORD *)this + 8304) += v3;
      ++*((_DWORD *)this + 8305);
      v7 = *((_QWORD *)this + 4145);
      if ( v7 )
      {
        *((_QWORD *)this + 4145) = v7 + *((_QWORD *)this + 4146) * v3;
        *((_DWORD *)this + 8294) += v3;
      }
    }
  }
}
