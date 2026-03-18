/*
 * XREFs of ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x18022BF8C
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800467B0 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800468FC (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800469B4 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x18024F11C (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

_QWORD *__fastcall CRenderingTechniqueFragment::RemoveLargestInputFragment(
        __int64 a1,
        _QWORD *a2,
        const struct CBrushRenderingGraph *a3,
        int a4)
{
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rdi
  CRenderingTechniqueFragment *v13; // rcx
  unsigned int CumulativeSurfaceInputCount; // eax
  __int64 v15; // rbx
  CRenderingTechniqueFragment *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r8
  _BYTE *v23; // [rsp+30h] [rbp-128h] BYREF
  _BYTE *v24; // [rsp+38h] [rbp-120h]
  __int64 *v25; // [rsp+40h] [rbp-118h]
  _BYTE v26[192]; // [rsp+48h] [rbp-110h] BYREF
  __int64 v27; // [rsp+108h] [rbp-50h] BYREF

  v5 = 0;
  v6 = 0;
  v23 = v26;
  v7 = a4;
  v10 = (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 4;
  v24 = v26;
  v25 = &v27;
  v11 = v10;
  if ( (_DWORD)v10 )
  {
    v12 = 0LL;
    do
    {
      v13 = *(CRenderingTechniqueFragment **)(v12 + *(_QWORD *)(a1 + 32) + 8);
      if ( v13 )
      {
        CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
                                        v13,
                                        a3,
                                        (__int64 *)&v23);
        if ( CumulativeSurfaceInputCount > v5 )
        {
          v5 = CumulativeSurfaceInputCount;
          v11 = v6;
        }
      }
      ++v6;
      v12 += 16LL;
    }
    while ( v6 < (unsigned int)v10 );
    v7 = a4;
  }
  v15 = *(_QWORD *)(a1 + 32) + 16LL * v11;
  v16 = *(CRenderingTechniqueFragment **)(v15 + 8);
  *(_BYTE *)(v15 + 4) = 1;
  *(_DWORD *)v15 = v7;
  CRenderingTechniqueFragment::ClearConsumerUVClampingRequirement(v16);
  v18 = *(_QWORD *)(v15 + 8);
  *(_QWORD *)(v15 + 8) = 0LL;
  v19 = (v24 - v23) >> 2;
  *a2 = v18;
  v20 = 0xAAAAAAAAAAAAAAABuLL * v19;
  if ( v20 )
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v23,
      v17,
      v20);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v23);
  return a2;
}
