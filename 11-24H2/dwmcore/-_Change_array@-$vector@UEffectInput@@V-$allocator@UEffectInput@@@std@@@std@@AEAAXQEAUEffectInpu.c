/*
 * XREFs of ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x1801E4514
 * Callers:
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801E43CC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAPEA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x18004BBCC (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 */

CDrawListBitmap *__fastcall std::vector<EffectInput>::_Change_array(
        CDrawListBitmap **a1,
        CDrawListBitmap *a2,
        __int64 a3,
        __int64 a4)
{
  CDrawListBitmap *v6; // rcx
  CDrawListBitmap *result; // rax

  v6 = *a1;
  if ( v6 )
  {
    detail::destruct_range<EffectInput>(v6, a1[1]);
    std::_Deallocate<16,0>(*a1, 16 * ((a1[2] - *a1) >> 4));
  }
  *a1 = a2;
  a1[1] = (CDrawListBitmap *)((char *)a2 + 112 * a3);
  result = (CDrawListBitmap *)((char *)a2 + 112 * a4);
  a1[2] = result;
  return result;
}
