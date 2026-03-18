/*
 * XREFs of ?RenderCursors_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DE74
 * Callers:
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18023F910 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1801095D0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x18018CDD0 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_5aff48886c632e43686d56bde1b6617b__long_CVisual___CVisualTree_____lambda_5aff48886c632e43686d56bde1b6617b___ @ 0x18028CC1C (std--_Global_new_std--_Func_impl_no_alloc__lambda_5aff48886c632e43686d56bde1b6617b__long_CVisual.c)
 *     gsl::final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___::_final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___ @ 0x18028CC84 (gsl--final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___--_final_action__lambda_e39790a6e12.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18028D618 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderCursors_Feature_FixCaptureMagnifierCursors_On(
        CCaptureRenderTarget *this,
        struct CDrawingContext *a2)
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
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  int v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v19[3]; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+48h] [rbp-B8h]
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  char *v22; // [rsp+60h] [rbp-A0h]
  int *v23; // [rsp+68h] [rbp-98h]
  char *v24; // [rsp+70h] [rbp-90h]
  struct CDrawingContext **v25; // [rsp+78h] [rbp-88h]
  __int64 *v26; // [rsp+80h] [rbp-80h]
  char *v27; // [rsp+88h] [rbp-78h]
  _BYTE v28[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-38h]
  char v30; // [rsp+D0h] [rbp-30h] BYREF
  int v31; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  char v33; // [rsp+150h] [rbp+50h] BYREF
  struct CDrawingContext *v34; // [rsp+158h] [rbp+58h] BYREF
  char v35; // [rsp+160h] [rbp+60h] BYREF
  struct CVisualTree *RootVisualTree; // [rsp+168h] [rbp+68h] BYREF

  v34 = a2;
  v2 = *((_DWORD *)this + 49) == 1;
  v19[0] = &v35;
  v35 = 0;
  v19[1] = &v34;
  v19[2] = &v33;
  v33 = 0;
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
      v12 = (_QWORD *)*((_QWORD *)this + 3);
      *(_QWORD *)&v21 = this;
      v13 = *(_QWORD *)(v11 + 8 * v10);
      v31 = 0;
      *((_QWORD *)&v21 + 1) = &RootVisualTree;
      v22 = &v33;
      v23 = v17;
      v24 = &v30;
      v25 = &v34;
      v26 = &v18;
      v18 = v13;
      v27 = &v35;
      v29 = std::_Global_new_std::_Func_impl_no_alloc__lambda_5aff48886c632e43686d56bde1b6617b__long_CVisual___CVisualTree_____lambda_5aff48886c632e43686d56bde1b6617b___(&v21);
      v14 = CComposition::ForEachCursorVisual(v12, (__int64)v28);
      v15 = v14;
      if ( v14 < 0 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *((_DWORD *)this + 666) )
        goto LABEL_13;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
      (const char *)(unsigned int)v14);
  }
  else
  {
LABEL_13:
    v15 = 0;
  }
  gsl::final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___::_final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___((__int64)v19);
  return v15;
}
