/*
 * XREFs of ??1COverlayContext@@QEAA@XZ @ 0x18024CB74
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801E4CCC (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x1802750D4 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800F0F14 (--1-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverlayC.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x180188FFC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x18024CBCC (--1CDirectFlipInfo@@QEAA@XZ.c)
 */

void __fastcall COverlayContext::~COverlayContext(void **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  CCachedVisualImage *v4; // rcx

  COverlayContext::Reset((COverlayContext *)this);
  CDirectFlipInfo::~CDirectFlipInfo((CDirectFlipInfo *)(this + 2425));
  v4 = (CCachedVisualImage *)this[2403];
  if ( v4 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4, v2, v3);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>(this + 1585);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>(this + 798);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>(this + 11);
}
