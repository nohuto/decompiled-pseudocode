/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A081C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x1802012F0 (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x18028B020 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 *     ??0CSceneVisual@@QEAA@PEAVCComposition@@@Z @ 0x18028E390 (--0CSceneVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CCursorVisual@@IEAA@PEAVCComposition@@@Z @ 0x18028F9A8 (--0CCursorVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTextVisual@@QEAA@PEAVCComposition@@@Z @ 0x1802A7B5C (--0CTextVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180032D1C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18009F978 (-clear@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A0C10 (--0CTreeData@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  char *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rbx
  void *v8; // rcx
  __int64 v10; // rbx

  v2 = (char *)this + 328;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 28) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 29) = &_pfnDefaultDliFailureHook2;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  CTreeData::CTreeData((CVisual *)((char *)this + 328));
  *(_QWORD *)v2 = &CDesktopTreeData::`vftable';
  *((_BYTE *)this + 106) |= 0x40u;
  *((_QWORD *)v2 + 31) = this;
  *((_WORD *)v2 + 6) = 257;
  *((_QWORD *)v2 + 26) = 0LL;
  *((_QWORD *)v2 + 27) = 0LL;
  *((_QWORD *)v2 + 28) = 0LL;
  *((_QWORD *)v2 + 29) = 0LL;
  *((_QWORD *)v2 + 9) = 0LL;
  *((_QWORD *)v2 + 10) = 0LL;
  *((_QWORD *)v2 + 11) = 0LL;
  *((_QWORD *)v2 + 12) = 0LL;
  *((_QWORD *)v2 + 13) = 0LL;
  *((_QWORD *)v2 + 15) = 0LL;
  *((_DWORD *)v2 + 34) = 16843008;
  detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear(
    (__int64)(v2 + 176),
    v4,
    v5);
  v6 = *((_QWORD *)v2 + 18);
  v7 = (*((_QWORD *)v2 + 19) - v6) >> 3;
  if ( v7 )
  {
    v10 = 8 * v7;
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
      v6,
      v10 + v6);
    *((_QWORD *)v2 + 19) -= v10;
  }
  v8 = (void *)*((_QWORD *)v2 + 34);
  *((_QWORD *)v2 + 34) = 0LL;
  if ( v8 )
    operator delete(v8, 0x10uLL);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 32LL))(v2);
  return this;
}
