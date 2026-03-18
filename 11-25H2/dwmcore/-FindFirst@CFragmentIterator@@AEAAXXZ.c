/*
 * XREFs of ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006C2B0
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180069FE0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006DC54 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006E5C4 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ @ 0x18014A530 (-GetFragmentIterator@CRenderingTechnique@@AEBA-AVCFragmentIterator@@XZ.c)
 *     ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x1801EE920 (-GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1801EEB28 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1801EEBB4 (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18006BBB0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall CFragmentIterator::FindFirst(CFragmentIterator *this)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rcx
  char *v8; // rbp
  char *v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  SIZE_T size_of; // rax
  __int64 v16; // rdi
  char *v17; // r15
  char *v18; // rcx
  char *v19; // r8
  char *v20; // rdx
  size_t v21; // r8
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  __int128 v24; // [rsp+20h] [rbp-28h]

LABEL_1:
  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v2 - 16);
  v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_DWORD *)(v2 - 8);
  v7 = (v5 - v4) >> 4;
  while ( v6 < (unsigned int)v7 )
  {
    if ( *(_QWORD *)(v4 + 16LL * v6 + 8) )
    {
      *(_DWORD *)(v2 - 8) = v6;
      v8 = (char *)*((_QWORD *)this + 1);
      v9 = (char *)*((_QWORD *)this + 2);
      *(_QWORD *)&v24 = *(_QWORD *)(v4 + 16LL * v6 + 8);
      DWORD2(v24) = 0;
      if ( v8 == v9 )
      {
        v10 = (__int64)&v8[-*(_QWORD *)this] >> 4;
        if ( v10 == 0xFFFFFFFFFFFFFFFLL )
          std::_Xlength_error("vector too long");
        v11 = v10 + 1;
        v12 = (__int64)&v9[-*(_QWORD *)this] >> 4;
        v13 = v12 >> 1;
        if ( v12 > 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
        {
          v14 = 0xFFFFFFFFFFFFFFFLL;
        }
        else
        {
          v14 = v13 + v12;
          if ( v13 + v12 < v11 )
            v14 = v10 + 1;
        }
        size_of = std::_Get_size_of_n<16>(v14);
        v16 = 16 * v10;
        v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
        v18 = v17;
        *(_OWORD *)&v17[v16] = v24;
        v19 = (char *)*((_QWORD *)this + 1);
        v20 = *(char **)this;
        if ( v8 == v19 )
        {
          v21 = v19 - v20;
        }
        else
        {
          memmove_0(v17, v20, v8 - v20);
          v21 = *((_QWORD *)this + 1) - (_QWORD)v8;
          v20 = v8;
          v18 = &v17[v16 + 16];
        }
        memmove_0(v18, v20, v21);
        v22 = *(_QWORD **)this;
        if ( *(_QWORD *)this )
        {
          v23 = (*((_QWORD *)this + 2) - (_QWORD)v22) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v23 >= 0x1000 )
          {
            v23 += 39LL;
            if ( (unsigned __int64)v22 - *(v22 - 1) - 8 > 0x1F )
              _invalid_parameter_noinfo_noreturn();
            v22 = (_QWORD *)*(v22 - 1);
          }
          operator delete(v22, v23);
        }
        *(_QWORD *)this = v17;
        *((_QWORD *)this + 1) = &v17[16 * v11];
        *((_QWORD *)this + 2) = &v17[16 * v14];
      }
      else
      {
        *(_OWORD *)v8 = v24;
        *((_QWORD *)this + 1) += 16LL;
      }
      goto LABEL_1;
    }
    ++v6;
  }
}
