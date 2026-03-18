/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x180032710
 * Callers:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800324F0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800325B4 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x180033150 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?UnLink@CVisualTreeData@@MEAAXXZ @ 0x1800327A0 (-UnLink@CVisualTreeData@@MEAAXXZ.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180032CD4 (-clear@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x180032D54 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18009F978 (-clear@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180110070 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTreeData::Clear(CTreeData *this)
{
  void (*v2)(void); // rax
  __int64 v3; // rdx
  void *v4; // rcx

  v2 = *(void (**)(void))(*(_QWORD *)this + 40LL);
  if ( (char *)v2 == (char *)CVisualTreeData::UnLink )
    CVisualTreeData::UnLink(this);
  else
    v2();
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear((char *)this + 16);
  CCpuClippingData::Clear((CTreeData *)((char *)this + 72));
  detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear(
    (char *)this + 176,
    v3);
  *((_QWORD *)this + 31) = 0LL;
  detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear((char *)this + 144);
  v4 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v4 )
    operator delete(v4, 0x10uLL);
}
