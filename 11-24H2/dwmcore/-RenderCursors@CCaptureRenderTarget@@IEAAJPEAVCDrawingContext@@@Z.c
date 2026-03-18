/*
 * XREFs of ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802364E0
 * Callers:
 *     ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180214E20 (-RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x180039AC0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x18017C4C0 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree_____lambda_0e17c6475725e05fea3019b9a50aca17___ @ 0x180281ECC (std--_Global_new_std--_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual.c)
 *     gsl::final_action__lambda_a963e2fac1282037e8b8d37b07854811___::_final_action__lambda_a963e2fac1282037e8b8d37b07854811___ @ 0x180281F34 (gsl--final_action__lambda_a963e2fac1282037e8b8d37b07854811___--_final_action__lambda_a963e2fac12.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x180282460 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderCursors(CCaptureRenderTarget *this, struct CDrawingContext *a2)
{
  bool v2; // zf
  struct CVisualTree *v4; // rbx
  struct CVisualTree *v5; // r11
  __int64 v6; // rsi
  CVisual *v7; // r10
  struct CVisualTree *VisualTreeNoRef; // rax
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  int v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v19[3]; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+48h] [rbp-B8h]
  _QWORD v21[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-38h]
  char v24; // [rsp+D0h] [rbp-30h] BYREF
  int v25; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  char v27; // [rsp+150h] [rbp+50h] BYREF
  struct CDrawingContext *v28; // [rsp+158h] [rbp+58h] BYREF
  char v29; // [rsp+160h] [rbp+60h] BYREF
  struct CVisualTree *RootVisualTree; // [rsp+168h] [rbp+68h] BYREF

  v28 = a2;
  v2 = *((_DWORD *)this + 49) == 1;
  v19[0] = &v29;
  v29 = 0;
  v19[1] = &v28;
  v19[2] = &v27;
  v27 = 0;
  v20 = 1;
  if ( !v2 )
    goto LABEL_13;
  v4 = (struct CVisualTree *)*((_QWORD *)this + 14);
  RootVisualTree = CVisualTree::GetRootVisualTree(v4);
  v5 = RootVisualTree;
  *(_QWORD *)v17 = *((_QWORD *)v4 + 9);
  if ( RootVisualTree == v4 )
  {
    v6 = *((_QWORD *)this + 370);
    if ( v6 )
    {
      v7 = (CVisual *)*((_QWORD *)this + 370);
      do
      {
        VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v7);
        if ( VisualTreeNoRef )
        {
          v5 = VisualTreeNoRef;
          RootVisualTree = VisualTreeNoRef;
        }
        v7 = *(CVisual **)(v9 + 88);
      }
      while ( v7 );
      *(_QWORD *)v17 = v6;
    }
  }
  if ( v5 != v4 && (v10 = 0LL, *((_DWORD *)this + 666)) )
  {
    while ( 1 )
    {
      v11 = *((_QWORD *)this + 330);
      v12 = *((_QWORD *)this + 3);
      v21[0] = this;
      v13 = *(_QWORD *)(v11 + 8 * v10);
      v25 = 0;
      v21[1] = &RootVisualTree;
      v21[2] = &v27;
      v21[3] = v17;
      v21[4] = &v24;
      v21[5] = &v28;
      v21[6] = &v18;
      v18 = v13;
      v21[7] = &v29;
      v23 = std::_Global_new_std::_Func_impl_no_alloc__lambda_0e17c6475725e05fea3019b9a50aca17__long_CVisual___CVisualTree_____lambda_0e17c6475725e05fea3019b9a50aca17___(v21);
      v14 = CComposition::ForEachCursorVisual(v12, v22);
      v15 = v14;
      if ( v14 < 0 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *((_DWORD *)this + 666) )
        goto LABEL_13;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
      (const char *)(unsigned int)v14);
  }
  else
  {
LABEL_13:
    v15 = 0;
  }
  gsl::final_action__lambda_a963e2fac1282037e8b8d37b07854811___::_final_action__lambda_a963e2fac1282037e8b8d37b07854811___(v19);
  return v15;
}
