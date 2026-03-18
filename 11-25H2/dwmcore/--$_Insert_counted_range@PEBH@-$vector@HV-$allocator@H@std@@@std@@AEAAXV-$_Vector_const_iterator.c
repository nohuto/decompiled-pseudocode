/*
 * XREFs of ??$_Insert_counted_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@1@PEBH_K@Z @ 0x180213570
 * Callers:
 *     ?AppendTriangleIndices@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x1802134CC (-AppendTriangleIndices@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV-$.c)
 *     ?SetOrAppendTriangleIndices@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJAEBV?$span@$$CBH$0?0@gsl@@_N@Z @ 0x180213510 (-SetOrAppendTriangleIndices@-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@AEAAJA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1802136D0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@HV?$allocator@H@std@@@std@@AEAAXQEAH_K1@Z @ 0x180213700 (-_Change_array@-$vector@HV-$allocator@H@std@@@std@@AEAAXQEAH_K1@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::vector<int>::_Insert_counted_range<int const *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rdi
  __int64 v6; // rdx
  _BYTE *v8; // r12
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  SIZE_T size_of; // rax
  char *v17; // r15
  size_t v18; // r8
  const void *v19; // rdx
  char *v20; // rcx
  size_t v21; // r15
  unsigned __int64 v22; // rbp
  __int64 v23; // [rsp+78h] [rbp+10h]
  unsigned __int64 v25; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = *(_BYTE **)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 16);
    v8 = *(_BYTE **)a1;
    if ( a4 <= (v6 - (__int64)v4) >> 2 )
    {
      v21 = 4 * a4;
      v22 = (v4 - a2) >> 2;
      if ( a4 >= v22 )
      {
        memmove_0(&a2[v21], a2, v4 - a2);
        *(_QWORD *)(a1 + 8) = &a2[4 * v22 + v21];
      }
      else
      {
        memmove_0(v4, &v4[-v21], 4 * a4);
        *(_QWORD *)(a1 + 8) = &v4[v21];
        memmove_0(&a2[4 * a4], a2, (size_t)&v4[-4LL * a4 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v21);
    }
    else
    {
      v11 = 0x3FFFFFFFFFFFFFFFLL;
      v12 = (v4 - v8) >> 2;
      if ( a4 > 0x3FFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v13 = v12 + a4;
      v14 = (v6 - (__int64)v8) >> 2;
      v25 = v12 + a4;
      v15 = v14 >> 1;
      if ( v14 <= 0x3FFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<4>(v11);
      v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v23 = (a2 - v8) >> 2;
      memmove_0(&v17[4 * v23], a3, 4 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v18 = v4 - v8;
        v19 = v8;
        v20 = v17;
      }
      else
      {
        memmove_0(v17, v8, a2 - v8);
        v18 = v4 - a2;
        v19 = a2;
        v20 = &v17[4 * a4 + 4 * v23];
      }
      memmove_0(v20, v19, v18);
      std::vector<int>::_Change_array(a1, v17, v25, v11);
    }
  }
}
