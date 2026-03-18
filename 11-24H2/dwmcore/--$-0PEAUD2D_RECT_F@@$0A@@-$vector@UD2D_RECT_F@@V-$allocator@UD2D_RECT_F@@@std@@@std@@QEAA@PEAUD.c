/*
 * XREFs of ??$?0PEAUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD2D_RECT_F@@0AEBV?$allocator@UD2D_RECT_F@@@1@@Z @ 0x18028B1D8
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x18028B628 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ @ 0x180263D4C (--1-$_Tidy_guard@V-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_nonzero@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z @ 0x180265C28 (-_Buy_nonzero@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 *std::vector<D2D_RECT_F>::vector<D2D_RECT_F>(__int64 *a1, const void *a2, __int64 a3, ...)
{
  size_t v3; // rbp
  __int64 v4; // rsi
  __int64 v7; // rbx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a3 - (_QWORD)a2;
  a1[2] = 0LL;
  v4 = (a3 - (__int64)a2) >> 4;
  if ( v4 )
  {
    std::vector<D2D_RECT_F>::_Buy_nonzero(a1, (a3 - (__int64)a2) >> 4);
    v7 = *a1;
    memmove_0((void *)*a1, a2, v3);
    v9 = 0LL;
    a1[1] = v7 + 16 * v4;
    std::_Tidy_guard<std::vector<D2D_RECT_F>>::~_Tidy_guard<std::vector<D2D_RECT_F>>((__int64 *)va);
  }
  return a1;
}
