/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z @ 0x180136274
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x180135A9C (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x18004BBCC (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 *     ??$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z @ 0x1801371EC (--$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802461D8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<EffectInput>::_Reallocate<0>(char **a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  char *v6; // r15
  char *v7; // rsi
  char *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdi
  char *result; // rax

  v3 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 4);
  if ( (unsigned __int64)*a2 > 0x249249249249249LL )
    std::_Throw_bad_array_new_length();
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(112 * *a2);
  v6 = a1[1];
  v7 = (char *)v5;
  v8 = *a1;
  v9 = v5;
  while ( v8 != v6 )
  {
    detail::construct<EffectInput,EffectInput>(v9, v8);
    v9 += 112LL;
    v8 += 112;
  }
  v10 = *a2;
  if ( *a1 )
  {
    detail::destruct_range<EffectInput>((CDrawListBitmap *)*a1, (CDrawListBitmap *)a1[1]);
    std::_Deallocate<16,0>(*a1, 16 * ((a1[2] - *a1) >> 4));
  }
  *a1 = v7;
  a1[1] = &v7[112 * v3];
  result = &v7[112 * v10];
  a1[2] = result;
  return result;
}
