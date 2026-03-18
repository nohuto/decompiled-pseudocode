/*
 * XREFs of ?UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ @ 0x18018A414
 * Callers:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18018A130 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x18018A47C (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::UpdateAlphaMode(CLegacyRenderTarget *this)
{
  int v2; // edx
  __int64 v3; // rcx

  v2 = 2 * !COverlayContext::OverlaysEnabled((CLegacyRenderTarget *)((char *)this + 216)) + 1;
  if ( *((_DWORD *)this + 33) != v2 )
  {
    v3 = *((_QWORD *)this + 25) + 24LL;
    *((_DWORD *)this + 33) = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3);
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30768);
  }
}
