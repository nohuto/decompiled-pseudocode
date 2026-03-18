/*
 * XREFs of ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18010FDE0
 * Callers:
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x1801859C0 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801865D0 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18003BA50 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1800E7528 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180110070 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801100F0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180250038 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CVisual::OnLayoutChanged(CVisual *this)
{
  __int64 v1; // rdi
  CProjectedShadowReceiver ****v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // rcx
  _BYTE *v9; // rdx
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

  v1 = *((_QWORD *)this + 43);
  v2 = 0LL;
  v4 = (*((_QWORD *)this + 44) - v1) >> 4;
  if ( v4 )
  {
    v5 = 16 * v4;
    v6 = v5 + v1;
    while ( v1 != v6 )
    {
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v1 + 8);
      v1 += 16LL;
    }
    *((_QWORD *)this + 44) -= v5;
  }
  v7 = *((_QWORD *)this + 29);
  if ( *(int *)v7 < 0 )
  {
    v8 = *(unsigned int *)(v7 + 4);
    v9 = (_BYTE *)(v7 + 8);
    for ( i = 0; i < (unsigned int)v8; ++v9 )
    {
      if ( *v9 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v8 )
      v11 = 0LL;
    else
      v11 = (_QWORD ***)(v8 + 15 + v7 + 8LL * i - (((_BYTE)v8 + 15) & 7));
    v12 = *v11;
    if ( v12 )
    {
      for ( j = *v12; j != v12; j = (_QWORD *)*j )
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(j - 42);
    }
  }
  if ( (**((_DWORD **)this + 29) & 0x80000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
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
      v2 = (CProjectedShadowReceiver ****)((char *)v14 + v15 + 8LL * m - (((_BYTE)v15 + 15) & 7) + 15);
    v18 = (*v2)[1];
    for ( n = **v2; n != v18; ++n )
      CProjectedShadowReceiver::InvalidateMaskContent(*n);
  }
}
