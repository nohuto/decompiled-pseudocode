/*
 * XREFs of ??$_Insert_counted_range@PEAPEAVCGeometry2D@@@?$vector@PEAVCGeometry2D@@V?$allocator@PEAVCGeometry2D@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCGeometry2D@@@std@@@std@@@1@PEAPEAVCGeometry2D@@_K@Z @ 0x1800770A0
 * Callers:
 *     ?SetOrAppendChildren@?$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@AEAAJAEBV?$span@PEAVCGeometry2D@@$0?0@gsl@@_N@Z @ 0x1800772E8 (-SetOrAppendChildren@-$CGeometry2DGroupGeneratedT@VCGeometry2DGroup@@VCGeometry2D@@@@AEAAJAEBV-$.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180077280 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::vector<CGeometry2D *>::_Insert_counted_range<CGeometry2D * *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rdi
  __int64 v6; // rdx
  _BYTE *v8; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  size_t v13; // r15
  unsigned __int64 v14; // rbp
  size_t v15; // r8
  const void *v16; // rdx
  char *v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  SIZE_T size_of; // rax
  char *v22; // r15
  __int64 v23; // [rsp+78h] [rbp+10h]
  unsigned __int64 v25; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = *(_BYTE **)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 16);
    v8 = *(_BYTE **)a1;
    if ( a4 <= (v6 - (__int64)v4) >> 3 )
    {
      v13 = 8 * a4;
      v14 = (v4 - a2) >> 3;
      if ( a4 >= v14 )
      {
        memmove_0(&a2[v13], a2, v4 - a2);
        *(_QWORD *)(a1 + 8) = &a2[8 * v14 + v13];
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
      v12 = (v4 - v8) >> 3;
      if ( a4 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v18 = v12 + a4;
      v19 = (v6 - (__int64)v8) >> 3;
      v25 = v12 + a4;
      v20 = v19 >> 1;
      if ( v19 <= 0x1FFFFFFFFFFFFFFFLL - (v19 >> 1) )
      {
        v11 = v20 + v19;
        if ( v20 + v19 < v18 )
          v11 = v18;
      }
      size_of = std::_Get_size_of_n<8>(v11);
      v22 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v23 = (a2 - v8) >> 3;
      memmove_0(&v22[8 * v23], a3, 8 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v15 = v4 - v8;
        v16 = v8;
        v17 = v22;
      }
      else
      {
        memmove_0(v22, v8, a2 - v8);
        v15 = v4 - a2;
        v16 = a2;
        v17 = &v22[8 * a4 + 8 * v23];
      }
      memmove_0(v17, v16, v15);
      std::vector<CVectorShape *>::_Change_array(a1, v22, v25, v11);
    }
  }
}
