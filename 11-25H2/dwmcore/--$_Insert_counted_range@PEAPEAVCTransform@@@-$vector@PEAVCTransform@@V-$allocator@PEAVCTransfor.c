/*
 * XREFs of ??$_Insert_counted_range@PEAPEAVCTransform@@@?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCTransform@@@std@@@std@@@1@PEAPEAVCTransform@@_K@Z @ 0x1801EA9D8
 * Callers:
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x1801EA920 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::vector<CTransform *>::_Insert_counted_range<CTransform * *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rdi
  _BYTE *v6; // r12
  __int64 v8; // rcx
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  size_t v13; // r15
  size_t v14; // r8
  unsigned __int64 v15; // r14
  size_t v16; // r8
  const void *v17; // rdx
  char *v18; // rcx
  char *v19; // rdi
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  SIZE_T size_of; // rax
  char *v24; // r14
  __int64 v25; // [rsp+78h] [rbp+10h]
  unsigned __int64 v27; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = *(_BYTE **)(a1 + 8);
    v6 = *(_BYTE **)a1;
    v8 = *(_QWORD *)(a1 + 16);
    if ( a4 <= (v8 - (__int64)v4) >> 3 )
    {
      v13 = 8 * a4;
      v14 = v4 - a2;
      v15 = (v4 - a2) >> 3;
      if ( a4 >= v15 )
      {
        v19 = &a2[v13];
        memmove_0(&a2[v13], a2, v14);
        *(_QWORD *)(a1 + 8) = &v19[8 * v15];
      }
      else
      {
        memmove_0(v4, &v4[-v13], 8 * a4);
        *(_QWORD *)(a1 + 8) = &v4[v13];
        memmove_0(&a2[8 * a4], a2, (size_t)&v4[-8LL * a4 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v13);
    }
    else
    {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
      v12 = (v4 - v6) >> 3;
      if ( a4 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v20 = v12 + a4;
      v21 = (v8 - (__int64)v6) >> 3;
      v27 = v12 + a4;
      v22 = v21 >> 1;
      if ( v21 <= 0x1FFFFFFFFFFFFFFFLL - (v21 >> 1) )
      {
        v11 = v22 + v21;
        if ( v22 + v21 < v20 )
          v11 = v20;
      }
      size_of = std::_Get_size_of_n<8>(v11);
      v24 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v25 = (a2 - v6) >> 3;
      memmove_0(&v24[8 * v25], a3, 8 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v16 = v4 - v6;
        v17 = v6;
        v18 = v24;
      }
      else
      {
        memmove_0(v24, v6, a2 - v6);
        v16 = v4 - a2;
        v17 = a2;
        v18 = &v24[8 * a4 + 8 * v25];
      }
      memmove_0(v18, v17, v16);
      if ( *(_QWORD *)a1 )
        std::_Deallocate<16,0>(*(_QWORD **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)a1 = v24;
      *(_QWORD *)(a1 + 8) = &v24[8 * v27];
      *(_QWORD *)(a1 + 16) = &v24[8 * v11];
    }
  }
}
