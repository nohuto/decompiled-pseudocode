/*
 * XREFs of ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ @ 0x18010E8F0
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800401A0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180044004 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180044974 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x18008A0E4 (-GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18008A2EC (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18008A378 (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180042470 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

CFragmentIterator *__fastcall CRenderingTechnique::GetFragmentIterator(__int64 a1, CFragmentIterator *a2)
{
  __int64 v2; // rax
  SIZE_T size_of; // rax
  _OWORD *v5; // rdi
  void *v6; // rcx
  __int64 v7; // rdx
  size_t v8; // r8
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *(_QWORD *)&v12 = v2;
  DWORD2(v12) = 0;
  size_of = std::_Get_size_of_n<16>(1uLL);
  v5 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v6 = v5;
  *v5 = v12;
  v7 = *(_QWORD *)a2;
  if ( *((_QWORD *)a2 + 1) )
  {
    memmove_0(v5, (const void *)v7, -*(_QWORD *)a2);
    v8 = *((_QWORD *)a2 + 1);
    v6 = v5 + 1;
    v7 = 0LL;
  }
  else
  {
    v8 = -v7;
  }
  memmove_0(v6, (const void *)v7, v8);
  v9 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    v10 = (*((_QWORD *)a2 + 2) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v10 >= 0x1000 )
    {
      v10 += 39LL;
      if ( (unsigned __int64)v9 - *(v9 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v9 = (_QWORD *)*(v9 - 1);
    }
    operator delete(v9, v10);
  }
  *(_QWORD *)a2 = v5;
  *((_QWORD *)a2 + 1) = v5 + 1;
  *((_QWORD *)a2 + 2) = v5 + 1;
  CFragmentIterator::FindFirst(a2);
  return a2;
}
