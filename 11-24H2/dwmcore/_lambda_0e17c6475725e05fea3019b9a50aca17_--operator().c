/*
 * XREFs of _lambda_0e17c6475725e05fea3019b9a50aca17_::operator() @ 0x180281FA0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree___::_Do_call @ 0x180282C60 (std--_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___C_ea_180282C60.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800214B0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180037500 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800F5410 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C6828 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x1802822C4 (-ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_0e17c6475725e05fea3019b9a50aca17_::operator()(
        __int64 *a1,
        struct CVisual *a2,
        struct CVisualTree *a3)
{
  __int64 v3; // r14
  struct CVisualTree **v7; // rbx
  _BYTE *v8; // r15
  struct CMILMatrix *v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  CDrawingContext **v15; // rcx
  CDrawingContext *v16; // rcx
  _QWORD *v17; // rcx
  CDrawingContext **v18; // rax
  __int64 v19; // xmm1_8
  __int64 v20; // rcx
  _DWORD v21[10]; // [rsp+40h] [rbp-39h] BYREF
  struct D2D_RECT_F v22; // [rsp+68h] [rbp-11h] BYREF
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  __int128 v25; // [rsp+80h] [rbp+7h] BYREF
  __int64 v26; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v3 = *a1;
  if ( !CVisualTree::_IsInTree(*(_QWORD *)(*a1 + 112), (__int64)a2, 0) )
  {
    v7 = (struct CVisualTree **)a1[1];
    if ( CVisualTree::_IsInTree((__int64)*v7, (__int64)a2, 0) )
    {
      v8 = (_BYTE *)a1[2];
      if ( !*v8 )
      {
        v9 = (struct CMILMatrix *)a1[4];
        if ( CCaptureRenderTarget::ComputeCursorToDeviceTransform(
               (CCaptureRenderTarget *)v3,
               a2,
               *(struct CVisual **)a1[3],
               *v7,
               v9) )
        {
          v10 = *(_QWORD *)a1[5];
          v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1[6] + 144LL))(*(_QWORD *)a1[6]);
          v12 = CDrawingContext::BeginFrame(
                  v10,
                  (v11 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
                  (__int64)v9,
                  (_OWORD *)(v3 + 140),
                  4u,
                  0LL);
          if ( v12 < 0 )
          {
            v13 = 466LL;
LABEL_7:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v13,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
              (const char *)(unsigned int)v12);
            return (unsigned int)v12;
          }
          v15 = (CDrawingContext **)a1[5];
          v21[1] = 0;
          *v8 = 1;
          v21[0] = 6;
          v16 = *v15;
          v21[2] = 1;
          v12 = CDrawingContext::PushRenderOptionsInternal(v16, 0LL, (const struct MilRenderOptions *)v21, 1);
          if ( v12 < 0 )
          {
            v13 = 476LL;
            goto LABEL_7;
          }
          *(_BYTE *)a1[7] = 1;
        }
      }
      v17 = (_QWORD *)((char *)a3 + 80);
      if ( a2 != *((struct CVisual **)a3 + 9) )
        v17 = (_QWORD *)((char *)a2 + 152);
      v18 = (CDrawingContext **)a1[5];
      v19 = v17[2];
      v25 = *(_OWORD *)v17;
      v26 = v19;
      v12 = CDrawingContext::DrawVisualTree(*v18, a3, (float *)&v25, 0LL, 0, 0, a2);
      if ( v12 < 0 )
      {
        v13 = 488LL;
        goto LABEL_7;
      }
      v20 = a1[4];
      v23 = 0;
      v24 = 0;
      v22 = 0LL;
      CMILMatrix::Transform3DBoundsHelper<0>(v20, (float *)&v25, &v22.left);
      CMergedRectBase<4>::Add((unsigned int *)(v3 + 2768), &v22);
    }
  }
  return 0LL;
}
