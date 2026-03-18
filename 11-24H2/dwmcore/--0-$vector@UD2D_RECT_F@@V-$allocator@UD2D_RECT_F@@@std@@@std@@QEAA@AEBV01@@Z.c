/*
 * XREFs of ??0?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180263CB8
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180264314 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ @ 0x180263D4C (--1-$_Tidy_guard@V-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_nonzero@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z @ 0x180265C28 (-_Buy_nonzero@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 *__fastcall std::vector<D2D_RECT_F>::vector<D2D_RECT_F>(__int64 *a1, __int64 a2)
{
  size_t v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4 )
  {
    std::vector<D2D_RECT_F>::_Buy_nonzero();
    v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v5 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v4);
    v7 = 0LL;
    a1[1] = v5 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
    std::_Tidy_guard<std::vector<D2D_RECT_F>>::~_Tidy_guard<std::vector<D2D_RECT_F>>(&v7);
  }
  return a1;
}
