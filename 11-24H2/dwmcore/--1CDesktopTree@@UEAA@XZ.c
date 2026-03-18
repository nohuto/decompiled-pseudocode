/*
 * XREFs of ??1CDesktopTree@@UEAA@XZ @ 0x18028AD60
 * Callers:
 *     ??_GCDesktopTree@@UEAAPEAXI@Z @ 0x180275820 (--_GCDesktopTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800419D4 (-clear@-$vector_facade@PEAVCResponseItemBase@@V-$buffer_impl@PEAVCResponseItemBase@@$01$00Vliber.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18008DE50 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ??1?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800A6424 (--1-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ?clear@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800F7944 (-clear@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800F8AFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ @ 0x180275080 (--1-$unique_ptr@VCComposeTop@@U-$default_delete@VCComposeTop@@@std@@@std@@QEAA@XZ.c)
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18028B15C (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CDesktopTree::~CDesktopTree(CDesktopTree *this)
{
  CVisual **v1; // rdi
  bool v3; // zf
  void **v4; // rcx
  void **v5; // rcx

  v1 = (CVisual **)((char *)this + 2640);
  v3 = *((_QWORD *)this + 330) == 0LL;
  *(_QWORD *)this = &CDesktopTree::`vftable';
  if ( !v3 )
  {
    CDesktopTree::SetRoot(this, 0LL);
    CVisual::SetVisualTreeNoRef(*v1, 0LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v1);
  }
  *((_QWORD *)this + 9) = 0LL;
  detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 653);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v4);
  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 570);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v5);
  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>((__int64)this + 4496);
  std::unique_ptr<CComposeTop>::~unique_ptr<CComposeTop>((_QWORD *)this + 561);
  COcclusionContext::~COcclusionContext((CDesktopTree *)((char *)this + 2648));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v1);
  CVisualTree::~CVisualTree(this);
}
