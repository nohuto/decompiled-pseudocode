/*
 * XREFs of ??$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@1@PEBU_DWMCaptureWindowInformation@@_K@Z @ 0x180274058
 * Callers:
 *     ?SetOrAppendWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@AEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@_N@Z @ 0x180279428 (-SetOrAppendWindowInfos@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@AEAAJA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801F65D0 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall std::vector<_DWMCaptureWindowInformation>::_Insert_counted_range<_DWMCaptureWindowInformation const *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rbp
  _BYTE *v6; // r13
  __int64 v8; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  SIZE_T size_of; // rax
  char *v17; // r12
  size_t v18; // r8
  const void *v19; // rdx
  char *v20; // rcx
  __int64 v21; // r12
  unsigned __int64 v22; // r14
  const void *v23; // rdx
  char *v24; // rdi

  if ( a4 )
  {
    v4 = *(_BYTE **)(a1 + 8);
    v6 = *(_BYTE **)a1;
    v8 = *(_QWORD *)(a1 + 16);
    if ( a4 <= (v8 - (__int64)v4) >> 5 )
    {
      v21 = 32 * a4;
      v22 = (v4 - a2) >> 5;
      if ( a4 >= v22 )
      {
        v24 = &a2[v21];
        memmove_0(&a2[v21], a2, v4 - a2);
        v23 = a3;
        *(_QWORD *)(a1 + 8) = &v24[32 * v22];
      }
      else
      {
        memmove_0(v4, &v4[-v21], 32 * a4);
        *(_QWORD *)(a1 + 8) = &v4[v21];
        memmove_0(&a2[32 * a4], a2, (size_t)&v4[-32LL * a4 - (_QWORD)a2]);
        v23 = a3;
      }
      memmove_0(a2, v23, 32 * a4);
    }
    else
    {
      v11 = 0x7FFFFFFFFFFFFFFLL;
      v12 = (v4 - v6) >> 5;
      if ( a4 > 0x7FFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v13 = v12 + a4;
      v14 = (v8 - (__int64)v6) >> 5;
      v15 = v14 >> 1;
      if ( v14 <= 0x7FFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<32>(v11);
      v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v17[32 * ((a2 - v6) >> 5)], a3, 32 * a4);
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
        v20 = &v17[32 * a4 + 32 * ((a2 - v6) >> 5)];
      }
      memmove_0(v20, v19, v18);
      if ( *(_QWORD *)a1 )
        std::_Deallocate<16,0>(*(_QWORD **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 8) = &v17[32 * v13];
      *(_QWORD *)(a1 + 16) = &v17[32 * v11];
    }
  }
}
