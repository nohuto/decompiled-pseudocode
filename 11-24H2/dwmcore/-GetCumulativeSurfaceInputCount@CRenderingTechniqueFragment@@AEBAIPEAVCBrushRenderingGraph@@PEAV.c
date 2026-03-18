/*
 * XREFs of ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800469B4
 * Callers:
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x180046858 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800469B4 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x18022BF8C (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800447B8 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800469B4 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1801D97DC (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1801D97DC.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v8; // rbp
  CRenderingTechniqueFragment *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]

  v3 = 0;
  v4 = 0;
  v5 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  if ( (_DWORD)v5 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(CRenderingTechniqueFragment **)(*((_QWORD *)this + 4) + v8 + 8);
      if ( v9 )
      {
        v3 += CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v9);
      }
      else
      {
        v15 = 0LL;
        v16 = 0;
        CRenderingTechniqueFragment::GetSurfaceDescription(
          this,
          a2,
          v4,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v15);
        a2 = (const struct CBrushRenderingGraph *)a3[1];
        v10 = *a3;
        LOBYTE(v11) = BYTE1(v16);
        while ( (const struct CBrushRenderingGraph *)v10 != a2
             && (*(_DWORD *)v10 != (_DWORD)v15 || *(_BYTE *)(v10 + 4) != BYTE4(v15) || *(_WORD *)(v10 + 8) != (_WORD)v16) )
          v10 += 12LL;
        if ( a2 == (const struct CBrushRenderingGraph *)v10 )
        {
          v13 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
                  a3,
                  0xAAAAAAAAAAAAAAABuLL * (((__int64)a2 - *a3) >> 2),
                  v10,
                  v11);
          ++v3;
          v14 = v16;
          *(_QWORD *)v13 = v15;
          *(_DWORD *)(v13 + 8) = v14;
        }
      }
      ++v4;
      v8 += 16LL;
    }
    while ( v4 < (unsigned int)v5 );
  }
  return v3;
}
