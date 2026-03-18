/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18018E4C8
 * Callers:
 *     ?reserve_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSourceCVI@CVisualSurface@@_K0@Z @ 0x18018E354 (-reserve_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurf.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z @ 0x18018E490 (--$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@Z @ 0x1801CC6C4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J.c)
 */

void __fastcall detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 **v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 **v5; // r14
  LPVOID v6; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  LPVOID v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rcx
  bool v15; // zf
  __int64 v16; // rdi
  __int64 *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h]

  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 8);
  if ( (v8 - v9) >> 4 < a2 )
  {
    v10 = (v9 - *(_QWORD *)a1) >> 4;
    if ( v10 + a2 < v10 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_9;
    }
    v3 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v8 - *(_QWORD *)a1) >> 4),
           (v8 - *(_QWORD *)a1) >> 4,
           v10 + a2);
    v11 = operator new[](saturated_mul(v3, 0x10uLL));
    v5 = *(__int64 ***)(a1 + 8);
    v2 = *(__int64 ***)a1;
    *(_QWORD *)&v18 = v11;
    *((_QWORD *)&v18 + 1) = v10;
    v4 = 0LL;
    v6 = v11;
    v12 = ((__int64)v5 - *(_QWORD *)a1) >> 4;
    v19 = v18;
    v20 = 0LL;
    v13 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(&v19, v12)
        - (_QWORD)v2;
    while ( v2 != v5 )
    {
LABEL_9:
      v17 = *v2;
      *v2 = v4;
      *(__int64 **)((char *)v2 + v13) = v17;
      *(__int64 **)((char *)v2 + v13 + 8) = v2[1];
      v2 += 2;
    }
    detail::destruct_range<CVisualSurface::SourceCVI>(*(__int64 **)a1, *(__int64 **)(a1 + 8));
    v14 = *(__int64 **)a1;
    v15 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v6;
    if ( v15 )
      v14 = v4;
    operator delete(v14);
    v16 = *(_QWORD *)a1 + 16 * v10;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 16 * v3;
    *(_QWORD *)(a1 + 8) = v16;
  }
}
