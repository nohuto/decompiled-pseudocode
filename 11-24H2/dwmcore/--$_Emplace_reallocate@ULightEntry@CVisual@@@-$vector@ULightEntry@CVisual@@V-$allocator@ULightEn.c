/*
 * XREFs of ??$_Emplace_reallocate@ULightEntry@CVisual@@@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@AEAAPEAULightEntry@CVisual@@QEAU23@$$QEAU23@@Z @ 0x180210C28
 * Callers:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800E9C50 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(
        __int64 a1,
        char *a2,
        _OWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  char *v14; // rbp
  char *v15; // r14
  void *v16; // rcx
  char *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8
  char *result; // rax

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v16 = v13;
  *(_OWORD *)v15 = *a3;
  v17 = *(char **)(a1 + 8);
  v18 = *(_BYTE **)a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v13, v18, (size_t)&a2[-*(_QWORD *)a1]);
    v16 = v15 + 16;
    v19 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = v14;
  result = v15;
  *(_QWORD *)(a1 + 8) = &v14[16 * v9];
  *(_QWORD *)(a1 + 16) = &v14[16 * v3];
  return result;
}
