/*
 * XREFs of ??$_Insert_counted_range@PEAPEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@PEAPEAVCColorGradientStop@@_K@Z @ 0x1801DDCE0
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801DDBDC (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180064A6C (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?_Calculate_growth@?$vector@_KV?$allocator@_K@std@@@std@@AEBA_K_K@Z @ 0x1801A4E40 (-_Calculate_growth@-$vector@_KV-$allocator@_K@std@@@std@@AEBA_K_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall std::vector<CColorGradientStop *>::_Insert_counted_range<CColorGradientStop * *>(
        _QWORD *a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rdi
  _BYTE *v7; // r12
  __int64 v10; // rcx
  size_t v11; // r15
  size_t v12; // r8
  unsigned __int64 v13; // rbp
  char *v14; // rdi
  SIZE_T size_of; // rax
  char *v16; // r15
  size_t v17; // r8
  const void *v18; // rdx
  char *v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+78h] [rbp+10h]
  __int64 v22; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = (_BYTE *)a1[1];
    v7 = (_BYTE *)*a1;
    if ( a4 <= (__int64)(a1[2] - (_QWORD)v4) >> 3 )
    {
      v11 = 8 * a4;
      v12 = v4 - a2;
      v13 = (v4 - a2) >> 3;
      if ( a4 < v13 )
      {
        memmove_0(v4, &v4[-v11], 8 * a4);
        a1[1] = &v4[v11];
        memmove_0(&a2[8 * a4], a2, (size_t)&v4[-8LL * a4 - (_QWORD)a2]);
      }
      else
      {
        v14 = &a2[v11];
        memmove_0(&a2[v11], a2, v12);
        a1[1] = &v14[8 * v13];
      }
      memmove_0(a2, a3, v11);
    }
    else
    {
      v10 = (v4 - v7) >> 3;
      if ( a4 > 0x1FFFFFFFFFFFFFFFLL - v10 )
        std::_Xlength_error("vector too long");
      v20 = v10 + a4;
      v22 = std::vector<unsigned __int64>::_Calculate_growth(a1, v10 + a4);
      size_of = std::_Get_size_of_n<8>(v22);
      v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v21 = (a2 - v7) >> 3;
      memmove_0(&v16[8 * v21], a3, 8 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v17 = v4 - v7;
        v18 = v7;
        v19 = v16;
      }
      else
      {
        memmove_0(v16, v7, a2 - v7);
        v17 = v4 - a2;
        v18 = a2;
        v19 = &v16[8 * a4 + 8 * v21];
      }
      memmove_0(v19, v18, v17);
      std::vector<CVectorShape *>::_Change_array((__int64)a1, (__int64)v16, v20, v22);
    }
  }
}
