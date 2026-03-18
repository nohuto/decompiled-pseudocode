/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180044974
 * Callers:
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180045678 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180042470 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180044384 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180044C3C (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180044F10 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ @ 0x18010E8F0 (-GetFragmentIterator@CRenderingTechnique@@AEBA-AVCFragmentIterator@@XZ.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180202758 (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$b_ea_180202758.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x18020DE34 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 i; // r8
  _DWORD *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // esi
  _QWORD *v12; // rdi
  CRenderingTechniqueFragment *v13; // rsi
  int EffectShaderBody; // edi
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  char *v23; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v24; // [rsp+68h] [rbp-98h]
  char *v25; // [rsp+70h] [rbp-90h]
  _BYTE v26[48]; // [rsp+78h] [rbp-88h] BYREF
  char v27; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE *v28; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v29; // [rsp+B8h] [rbp-48h]
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  _BYTE v31[128]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+148h] [rbp+48h] BYREF

  v1 = *((unsigned int *)this + 65);
  v23 = v26;
  v22 = 0LL;
  v24 = v26;
  v2 = 0;
  v25 = &v27;
  if ( v1 )
  {
    v4 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
           &v23,
           0LL,
           (unsigned int)v1);
    *(_QWORD *)v4 = v22;
    *(_DWORD *)(v4 + 8) = 0;
    v5 = (unsigned __int64)(12 * v1 - 12) >> 2;
    v6 = (_DWORD *)(v4 + 12);
    while ( v5 )
    {
      *v6 = *(_DWORD *)v4;
      v4 += 4LL;
      ++v6;
      --v5;
    }
  }
  else
  {
    v19 = (__int64)((unsigned __int128)(0 * (__int128)(__int64)0xD555555555555555uLL) >> 64) >> 1;
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
      &v23,
      0LL,
      v19 + (v19 >> 63));
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 65); v8[v9 + 2] = v11 )
  {
    v8 = v23;
    v9 = 3 * i;
    v10 = (unsigned int)i;
    i = (unsigned int)(i + 1);
    v11 = *((_DWORD *)this + 11 * v10 + 22);
    *(_QWORD *)&v23[4 * v9] = *(_QWORD *)((char *)this + 44 * v10 + 80);
  }
  v28 = v31;
  v29 = v31;
  v30 = &v32;
  CRenderingTechnique::GetFragmentIterator(this, &v20);
  while ( 1 )
  {
    v12 = (_QWORD *)v20;
    if ( *((_QWORD *)&v20 + 1) == (_QWORD)v20 )
      break;
    v13 = *(CRenderingTechniqueFragment **)(*((_QWORD *)&v20 + 1) - 16LL);
    if ( *(_QWORD *)v13 )
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateEffectShaderBody(v13, (_QWORD **)&v28, (__int64 *)&v23);
      v2 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
      {
        v18 = 503;
        goto LABEL_24;
      }
    }
    else
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody(v13, &v28, &v23);
      v2 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
      {
        v18 = 508;
LABEL_24:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v18, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectShaderBody, 0x149u, 0LL);
        v12 = (_QWORD *)v20;
        break;
      }
    }
    v2 = EffectShaderBody;
    *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 &v28,
                 (v29 - v28) >> 3) = v13;
    v12 = (_QWORD *)v20;
    v15 = *((_QWORD *)&v20 + 1) - 16LL;
    *((_QWORD *)&v20 + 1) = v15;
    if ( v15 == (_QWORD)v20 )
      break;
    ++*(_DWORD *)(v15 - 8);
    CFragmentIterator::FindFirst((CFragmentIterator *)&v20);
  }
  if ( v12 )
  {
    std::_Deallocate<16,0>(v12, (v21 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL);
    v21 = 0LL;
    v20 = 0LL;
  }
  v16 = (v29 - v28) >> 3;
  if ( v16 )
    v29 -= 8 * v16;
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v28);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v24 - v23) >> 2) )
    v24 -= 4 * ((v24 - v23) >> 2);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v23);
  return v2;
}
