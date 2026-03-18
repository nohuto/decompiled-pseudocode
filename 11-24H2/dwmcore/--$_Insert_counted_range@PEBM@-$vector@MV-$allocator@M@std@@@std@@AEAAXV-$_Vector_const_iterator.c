/*
 * XREFs of ??$_Insert_counted_range@PEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM_K@Z @ 0x18022F824
 * Callers:
 *     ??$insert@V?$span_iterator@$$CBM@details@gsl@@$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@$$CBM@details@gsl@@1@Z @ 0x18024BB2C (--$insert@V-$span_iterator@$$CBM@details@gsl@@$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180206D1C (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@MV?$allocator@M@std@@@std@@AEAAXQEAM_K1@Z @ 0x180206DB8 (-_Change_array@-$vector@MV-$allocator@M@std@@@std@@AEAAXQEAM_K1@Z.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x18022B640 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall std::vector<float>::_Insert_counted_range<float const *>(
        _QWORD *a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rdi
  _BYTE *v7; // r12
  __int64 v10; // rcx
  SIZE_T size_of; // rax
  char *v12; // r15
  size_t v13; // r8
  const void *v14; // rdx
  char *v15; // rcx
  size_t v16; // r15
  size_t v17; // r8
  unsigned __int64 v18; // rbp
  char *v19; // rdi
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+78h] [rbp+10h]
  __int64 v22; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = (_BYTE *)a1[1];
    v7 = (_BYTE *)*a1;
    if ( a4 <= (__int64)(a1[2] - (_QWORD)v4) >> 2 )
    {
      v16 = 4 * a4;
      v17 = v4 - a2;
      v18 = (v4 - a2) >> 2;
      if ( a4 >= v18 )
      {
        v19 = &a2[v16];
        memmove_0(&a2[v16], a2, v17);
        a1[1] = &v19[4 * v18];
      }
      else
      {
        memmove_0(v4, &v4[-v16], 4 * a4);
        a1[1] = &v4[v16];
        memmove_0(&a2[4 * a4], a2, (size_t)&v4[-4LL * a4 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v16);
    }
    else
    {
      v10 = (v4 - v7) >> 2;
      if ( a4 > 0x3FFFFFFFFFFFFFFFLL - v10 )
        std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(v10);
      v20 = v10 + a4;
      v22 = std::vector<float>::_Calculate_growth(a1, v10 + a4);
      size_of = std::_Get_size_of_n<4>(v22);
      v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v21 = (a2 - v7) >> 2;
      memmove_0(&v12[4 * v21], a3, 4 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v13 = v4 - v7;
        v14 = v7;
        v15 = v12;
      }
      else
      {
        memmove_0(v12, v7, a2 - v7);
        v13 = v4 - a2;
        v14 = a2;
        v15 = &v12[4 * a4 + 4 * v21];
      }
      memmove_0(v15, v14, v13);
      std::vector<float>::_Change_array((__int64)a1, (__int64)v12, v20, v22);
    }
  }
}
