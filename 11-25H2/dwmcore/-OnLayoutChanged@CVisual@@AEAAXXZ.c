/*
 * XREFs of ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18014BA20
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x180168E00 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18014BCB0 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18014BD30 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180170EBC (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1801B7238 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18025B630 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CVisual::OnLayoutChanged(CVisual *this, _BYTE *a2)
{
  __int64 v2; // rdi
  CProjectedShadowReceiver ****v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int i; // eax
  _QWORD ***v11; // rdi
  _QWORD **v12; // rdi
  _QWORD *j; // rbx
  _DWORD *v14; // r8
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  unsigned int m; // eax
  CProjectedShadowReceiver **v18; // rdi
  CProjectedShadowReceiver **n; // rbx
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v21; // rdi
  CProjectedShadowCaster **k; // rbx

  v2 = *((_QWORD *)this + 43);
  v3 = 0LL;
  v5 = (*((_QWORD *)this + 44) - v2) >> 4;
  if ( v5 )
  {
    v6 = 16 * v5;
    v7 = v6 + v2;
    while ( v2 != v7 )
    {
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v2 + 8);
      v2 += 16LL;
    }
    *((_QWORD *)this + 44) -= v6;
  }
  v8 = *((_QWORD *)this + 29);
  if ( *(int *)v8 < 0 )
  {
    v9 = *(unsigned int *)(v8 + 4);
    a2 = (_BYTE *)(v8 + 8);
    for ( i = 0; i < (unsigned int)v9; ++a2 )
    {
      if ( *a2 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v9 )
    {
      v11 = 0LL;
    }
    else
    {
      a2 = (_BYTE *)(v9 + 15);
      v11 = (_QWORD ***)(v9 + 15 + v8 + 8LL * i - (((_BYTE)v9 + 15) & 7));
    }
    v12 = *v11;
    if ( v12 )
    {
      for ( j = *v12; j != v12; j = (_QWORD *)*j )
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(j - 41);
    }
  }
  if ( (**((_DWORD **)this + 29) & 0x80000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this, a2);
    v21 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( k = *(CProjectedShadowCaster ***)ProjectedShadowCasters; k != v21; ++k )
      CProjectedShadowCaster::InvalidateMaskContent(*k);
  }
  v14 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v14 & 0x40000) != 0 )
  {
    v15 = (unsigned int)v14[1];
    v16 = v14 + 2;
    for ( m = 0; m < (unsigned int)v15; ++v16 )
    {
      if ( *v16 == 14 )
        break;
      ++m;
    }
    if ( m < (unsigned int)v15 )
      v3 = (CProjectedShadowReceiver ****)((char *)v14 + v15 + 8LL * m - (((_BYTE)v15 + 15) & 7) + 15);
    v18 = (*v3)[1];
    for ( n = **v3; n != v18; ++n )
      CProjectedShadowReceiver::InvalidateMaskContent(*n);
  }
}
