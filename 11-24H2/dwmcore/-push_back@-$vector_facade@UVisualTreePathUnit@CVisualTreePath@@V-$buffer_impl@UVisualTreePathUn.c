/*
 * XREFs of ?push_back@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUVisualTreePathUnit@CVisualTreePath@@@Z @ 0x180007E90
 * Callers:
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AB78 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800F7980 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180230200 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@Z @ 0x180008E64 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::push_back(
        detail::liberal_expansion_policy *a1,
        _OWORD *a2)
{
  __int64 v2; // r8
  _OWORD *v4; // rsi
  unsigned __int64 v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  _OWORD *v9; // rbx
  __int64 v10; // rcx
  _OWORD *v11; // r10
  signed __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  void *v15; // rax
  _OWORD *v16; // rbx
  __int64 v17; // rdi
  void *v18; // rbp
  signed __int64 v19; // rdi
  void *v20; // rsi
  void *v21; // rax
  _OWORD *v22; // rdx
  bool v23; // zf
  __int64 v24; // r14
  _OWORD *v25; // r8
  __int128 v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int128 v28; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+50h] [rbp-38h]

  v2 = *((_QWORD *)a1 + 1);
  v4 = *(_OWORD **)a1;
  v6 = (v2 - *(_QWORD *)a1) >> 4;
  if ( !((*((_QWORD *)a1 + 2) - v2) >> 4) )
  {
    if ( v6 + 1 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800080F3LL);
    }
    v14 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v4) >> 4, v6 + 1);
    v15 = operator new[](saturated_mul(v14, 0x10uLL));
    v16 = *(_OWORD **)a1;
    v17 = *((_QWORD *)a1 + 1);
    v18 = 0LL;
    *(_QWORD *)&v26 = v15;
    v19 = v17 - (_QWORD)v16;
    *((_QWORD *)&v26 + 1) = v6;
    v27 = 0LL;
    v20 = v15;
    v28 = v26;
    v29 = 0LL;
    v21 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                    &v28,
                    v19 >> 4);
    memmove_0(v21, v16, v19);
    v22 = *(_OWORD **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( !v23 )
      v18 = v22;
    operator delete(v18);
    v4 = *(_OWORD **)a1;
    v2 = *(_QWORD *)a1 + 16 * v6;
    v24 = *(_QWORD *)a1 + 16 * v14;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v24;
  }
  result = (v2 - (__int64)v4) >> 4;
  v8 = result - v6;
  v9 = &v4[result];
  if ( !v9 )
    goto LABEL_8;
  v10 = ((v2 - (__int64)v4) >> 4) - v6;
  if ( v8 > 1 )
    v10 = 1LL;
  v11 = (_OWORD *)(v2 - 16 * v10);
  if ( (_OWORD *)v2 != v11 )
  {
    v25 = (_OWORD *)(v2 - 16);
    *v9 = *v25;
    if ( v25 != v11 )
LABEL_8:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( result && (!v4 || result < 0) )
      goto LABEL_8;
    *(_QWORD *)&v26 = v4;
    *((_QWORD *)&v26 + 1) = result;
    v27 = result;
    v12 = 16 * result - 16 - 16 * v6;
    v13 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
            &v26,
            -(v12 >> 4));
    result = (__int64)memmove_0((void *)(v13 - v12), &v4[v6], v12);
  }
  *((_QWORD *)a1 + 1) += 16LL;
  v4[v6] = *a2;
  return result;
}
