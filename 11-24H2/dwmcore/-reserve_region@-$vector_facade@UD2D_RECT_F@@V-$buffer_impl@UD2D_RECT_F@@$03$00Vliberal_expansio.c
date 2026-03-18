/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801DC714
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801DC834 (-ensure_extra_capacity@-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x18024B91C (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

__int64 __fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // rsi
  _OWORD *v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  _OWORD *v12; // r8
  __int64 v13; // rdi
  _OWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  _OWORD *v17; // rax
  _QWORD v18[4]; // [rsp+20h] [rbp-48h] BYREF
  char v19[32]; // [rsp+40h] [rbp-28h] BYREF

  detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v6 = *a1;
  v7 = (_OWORD *)a1[1];
  v8 = ((__int64)v7 - *a1) >> 4;
  v9 = v8 - a2;
  v10 = *a1 + 16 * v8;
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_11;
  v11 = ((a1[1] - *a1) >> 4) - a2;
  if ( a3 < v9 )
    v11 = a3;
  v12 = &v7[-v11];
  if ( v7 != v12 )
  {
    v15 = v7 - 1;
    v16 = a3;
    v17 = (_OWORD *)(v10 + 16 * a3);
    if ( v10 )
    {
      while ( v16 )
      {
        --v16;
        --v17;
        if ( v16 >= a3 )
          break;
        *v17 = *v15;
        if ( v15 == v12 )
          goto LABEL_7;
        --v15;
      }
    }
    goto LABEL_11;
  }
LABEL_7:
  if ( v9 > a3 )
  {
    if ( !v8 || v6 && v8 >= 0 )
    {
      v13 = 16 * a2;
      v18[1] = v8;
      v18[2] = v8;
      v18[0] = v6;
      ((void (__fastcall *)(char *, __int64, unsigned __int64, _QWORD *))std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>)(
        v19,
        v13 + v6,
        v6 + 16 * (v8 - a3),
        v18);
      goto LABEL_9;
    }
LABEL_11:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = 16 * a2;
LABEL_9:
  a1[1] += 16 * a3;
  return v13 + v6;
}
