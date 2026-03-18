/*
 * XREFs of ??$_Emplace_one_at_back@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAAEAVCShapeRenderTask@@XZ @ 0x180042B1C
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x180142FF0 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180041E8C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<CShapeRenderTask>::_Emplace_one_at_back<>(char **a1)
{
  char *v1; // rdi
  char *v3; // r8
  char *result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  SIZE_T size_of; // rax
  char *v11; // rbp
  void *v12; // rcx
  char *v13; // r14
  char *v14; // r8
  char *v15; // rdx
  size_t v16; // r8
  char *v17; // rcx
  unsigned __int64 v18; // rdx

  v1 = a1[1];
  v3 = a1[2];
  if ( v1 == v3 )
  {
    v5 = 0x492492492492492LL;
    v6 = (v1 - *a1) / 56;
    if ( v6 == 0x492492492492492LL )
      std::_Xlength_error("vector too long");
    v7 = v6 + 1;
    v8 = 0x6DB6DB6DB6DB6DB7LL * ((v3 - *a1) >> 3);
    v9 = v8 >> 1;
    if ( v8 <= 0x492492492492492LL - (v8 >> 1) )
    {
      v5 = v9 + v8;
      if ( v9 + v8 < v7 )
        v5 = v6 + 1;
    }
    size_of = std::_Get_size_of_n<56>(v5);
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v12 = v11;
    v13 = &v11[56 * v6];
    *(_DWORD *)v13 = 0;
    v14 = a1[1];
    v15 = *a1;
    if ( v1 == v14 )
    {
      v16 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, v1 - *a1);
      v12 = v13 + 56;
      v16 = a1[1] - v1;
      v15 = v1;
    }
    memmove_0(v12, v15, v16);
    v17 = *a1;
    if ( *a1 )
    {
      v18 = 8 * ((a1[2] - v17) >> 3);
      if ( v18 >= 0x1000 )
      {
        v18 += 39LL;
        if ( (unsigned __int64)&v17[-*((_QWORD *)v17 - 1) - 8] > 0x1F )
          _invalid_parameter_noinfo_noreturn();
        v17 = (char *)*((_QWORD *)v17 - 1);
      }
      operator delete(v17, v18);
    }
    *a1 = v11;
    result = v13;
    a1[1] = &v11[56 * v7];
    a1[2] = &v11[56 * v5];
  }
  else
  {
    *(_DWORD *)v1 = 0;
    result = a1[1];
    a1[1] = result + 56;
  }
  return result;
}
