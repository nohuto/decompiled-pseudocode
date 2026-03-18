/*
 * XREFs of ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801DC96C
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@Z @ 0x1801CC6C4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r8
  const void *v9; // rbx
  signed __int64 v10; // rsi
  void *v11; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  v7 = a2 + a3;
  v8 = (a1[1] - v6) >> 4;
  if ( v7 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = v6 + 16 * v8;
    if ( v7 == v8 )
      goto LABEL_3;
  }
  if ( a2 && (!v6 || a2 < 0 || v8 < a2) )
    _invalid_parameter_noinfo_noreturn();
  v12[2] = a2;
  v12[0] = v6;
  v9 = (const void *)(v6 + 16 * v7);
  v12[1] = v8;
  v10 = v3 - (_QWORD)v9;
  v11 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(
                  v12,
                  v10 >> 4);
  memmove_0(v11, v9, v10);
LABEL_3:
  a1[1] += -16 * a3;
}
