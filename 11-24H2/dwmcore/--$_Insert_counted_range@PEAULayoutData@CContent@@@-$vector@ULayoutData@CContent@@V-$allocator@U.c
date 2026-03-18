/*
 * XREFs of ??$_Insert_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@_K@Z @ 0x180293888
 * Callers:
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x180293AA0 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801A60B0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXQEAULayoutData@CContent@@_K1@Z @ 0x18020CD8C (-_Change_array@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEA.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x180294404 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall std::vector<CContent::LayoutData>::_Insert_counted_range<CContent::LayoutData *>(
        _QWORD *a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rdi
  _BYTE *v6; // r12
  unsigned __int64 v10; // rcx
  SIZE_T size_of; // rax
  char *v12; // r14
  size_t v13; // r8
  const void *v14; // rdx
  char *v15; // rcx
  signed __int64 v16; // r12
  unsigned __int64 v17; // r14
  __int64 v18; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+98h] [rbp+20h]

  if ( a4 )
  {
    v4 = (_BYTE *)a1[1];
    v6 = (_BYTE *)*a1;
    if ( a4 <= (a1[2] - (_QWORD)v4) / 40LL )
    {
      v16 = 40 * a4;
      v17 = 0xCCCCCCCCCCCCCCCDuLL * ((v4 - a2) >> 3);
      if ( a4 >= v17 )
      {
        memmove_0(&a2[v16], a2, v4 - a2);
        a1[1] = &a2[40 * v17 + v16];
      }
      else
      {
        memmove_0(v4, &v4[-v16], 40 * a4);
        a1[1] = &v4[40 * (v16 / 40)];
        memmove_0(&a2[40 * a4], a2, (size_t)&v4[-40LL * a4 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v16);
    }
    else
    {
      v10 = 0xCCCCCCCCCCCCCCCDuLL * ((v4 - v6) >> 3);
      if ( a4 > 0x666666666666666LL - v10 )
        std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
      v18 = v10 + a4;
      v20 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v10 + a4);
      size_of = std::_Get_size_of_n<40>(v20);
      v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v12[8 * ((a2 - v6) >> 3)], a3, 40 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v13 = v4 - v6;
        v14 = v6;
        v15 = v12;
      }
      else
      {
        memmove_0(v12, v6, a2 - v6);
        v13 = v4 - a2;
        v14 = a2;
        v15 = &v12[40 * (a4 - 0x3333333333333333LL * ((a2 - v6) >> 3))];
      }
      memmove_0(v15, v14, v13);
      std::vector<CContent::LayoutData>::_Change_array((__int64)a1, (__int64)v12, v18, v20);
    }
  }
}
