/*
 * XREFs of ??$_Insert_counted_range@PEBUMilGradientStop@@@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@PEBUMilGradientStop@@_K@Z @ 0x180224CF4
 * Callers:
 *     ??$insert@PEBUMilGradientStop@@$0A@@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMilGradientStop@@@std@@@std@@@1@PEBUMilGradientStop@@1@Z @ 0x180224C78 (--$insert@PEBUMilGradientStop@@$0A@@-$vector@UMilGradientStop@@V-$allocator@UMilGradientStop@@@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1801585E8 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UMilGradientStop@@V?$allocator@UMilGradientStop@@@std@@@std@@AEAAXQEAUMilGradientStop@@_K1@Z @ 0x18022CA30 (-_Change_array@-$vector@UMilGradientStop@@V-$allocator@UMilGradientStop@@@std@@@std@@AEAAXQEAUMi.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall std::vector<MilGradientStop>::_Insert_counted_range<MilGradientStop const *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rsi
  _BYTE *v6; // r12
  __int64 v8; // r9
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rcx
  SIZE_T size_of; // rax
  char *v17; // r14
  size_t v18; // r8
  const void *v19; // rdx
  char *v20; // rcx
  signed __int64 v21; // r12
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // [rsp+20h] [rbp-58h]

  if ( a4 )
  {
    v4 = *(_BYTE **)(a1 + 8);
    v6 = *(_BYTE **)a1;
    v8 = *(_QWORD *)(a1 + 16);
    if ( a4 <= (v8 - (__int64)v4) / 24 )
    {
      v21 = 24 * a4;
      v22 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - a2) >> 3);
      if ( a4 >= v22 )
      {
        memmove_0(&a2[v21], a2, v4 - a2);
        *(_QWORD *)(a1 + 8) = &a2[24 * v22 + v21];
      }
      else
      {
        memmove_0(v4, &v4[-v21], 24 * a4);
        *(_QWORD *)(a1 + 8) = &v4[24 * (v21 / 24)];
        memmove_0(&a2[24 * a4], a2, (size_t)&v4[-24LL * a4 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v21);
    }
    else
    {
      v11 = 0xAAAAAAAAAAAAAAALL;
      v12 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - v6) >> 3);
      if ( a4 > 0xAAAAAAAAAAAAAAALL - v12 )
        std::_Xlength_error("vector too long");
      v13 = v12 + a4;
      v14 = 0xAAAAAAAAAAAAAAABuLL * ((v8 - (__int64)v6) >> 3);
      v23 = v12 + a4;
      v15 = v14 >> 1;
      if ( v14 <= 0xAAAAAAAAAAAAAAALL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<24>(v11);
      v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v17[8 * ((a2 - v6) >> 3)], a3, 24 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v18 = v4 - v6;
        v19 = v6;
        v20 = v17;
      }
      else
      {
        memmove_0(v17, v6, a2 - v6);
        v18 = v4 - a2;
        v19 = a2;
        v20 = &v17[24 * (a4 - 0x5555555555555555LL * ((a2 - v6) >> 3))];
      }
      memmove_0(v20, v19, v18);
      std::vector<MilGradientStop>::_Change_array(a1, v17, v23, v11);
    }
  }
}
