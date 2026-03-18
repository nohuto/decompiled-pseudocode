/*
 * XREFs of ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C
 * Callers:
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18023F910 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1801095D0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180117D20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x18018CDD0 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 *     gsl::final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___::_final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___ @ 0x18028CCCC (gsl--final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___--_final_action__lambda_faa70d9ea42.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18028D618 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderCursors_Feature_FixCaptureMagnifierCursors_Off(
        CCaptureRenderTarget *this,
        struct CDrawingContext *a2)
{
  const char *v3; // r9
  bool v4; // zf
  unsigned int v5; // edi
  struct CVisualTree *v6; // rsi
  const struct CVisualTree *v7; // r11
  CVisual *v8; // r15
  CVisual *v9; // r10
  struct CVisualTree *VisualTreeNoRef; // rax
  __int64 v11; // r10
  CTransform3D *v12; // rcx
  const struct CMILMatrix *Matrix; // rax
  int WorldTransform; // eax
  int v15; // ecx
  FLOAT v16; // xmm1_4
  __int64 v17; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  _QWORD *v23; // rcx
  int v24; // eax
  char v26; // [rsp+30h] [rbp-D0h] BYREF
  CDrawingContext *v27; // [rsp+38h] [rbp-C8h] BYREF
  struct CVisualTree *RootVisualTree; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_RECT_F v29; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+68h] [rbp-98h]
  __int128 *v32; // [rsp+78h] [rbp-88h]
  _BYTE v33[48]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+C0h] [rbp-40h]
  __int128 v36; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v37; // [rsp+E0h] [rbp-20h]
  __int128 v38; // [rsp+F0h] [rbp-10h]
  __int128 v39; // [rsp+100h] [rbp+0h]
  int v40; // [rsp+110h] [rbp+10h]
  __int128 v41; // [rsp+120h] [rbp+20h] BYREF
  __int128 v42; // [rsp+130h] [rbp+30h]
  __int128 v43; // [rsp+140h] [rbp+40h]
  __int128 v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+160h] [rbp+60h]
  _QWORD v46[2]; // [rsp+170h] [rbp+70h] BYREF
  char v47; // [rsp+180h] [rbp+80h]
  __int128 v48; // [rsp+188h] [rbp+88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v27 = a2;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
      v3);
  v4 = *((_DWORD *)this + 49) == 1;
  v5 = 0;
  v26 = 0;
  if ( v4 )
  {
    v6 = (struct CVisualTree *)*((_QWORD *)this + 14);
    RootVisualTree = CVisualTree::GetRootVisualTree(v6);
    v7 = RootVisualTree;
    v8 = (CVisual *)*((_QWORD *)v6 + 9);
    if ( RootVisualTree == v6 && *((_QWORD *)this + 370) )
    {
      v9 = (CVisual *)*((_QWORD *)this + 370);
      do
      {
        VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v9);
        if ( VisualTreeNoRef )
        {
          v7 = VisualTreeNoRef;
          RootVisualTree = VisualTreeNoRef;
        }
        v9 = *(CVisual **)(v11 + 88);
      }
      while ( v9 );
      v8 = (CVisual *)*((_QWORD *)this + 370);
    }
    if ( v7 != v6 )
    {
      v12 = (CTransform3D *)*((_QWORD *)this + 25);
      v40 = 0;
      if ( v12 )
      {
        Matrix = CTransform3D::GetMatrix(v12, 0LL);
        v7 = RootVisualTree;
        v36 = *(_OWORD *)Matrix;
        v37 = *((_OWORD *)Matrix + 1);
        v38 = *((_OWORD *)Matrix + 2);
        v39 = *((_OWORD *)Matrix + 3);
        v40 = *((_DWORD *)Matrix + 16);
      }
      else
      {
        v36 = _xmm;
        v37 = _xmm;
        BYTE1(v40) = BYTE1(v40) & 0xC0 | 0x29;
        v38 = _xmm;
        v39 = *(__int128 *)&_xmm.r;
        LOBYTE(v40) = -86;
      }
      v35 = 0;
      v48 = 0LL;
      WorldTransform = CVisual::GetWorldTransform(v8, v7, 0, (__int64)v33, 0LL, 0LL);
      v5 = WorldTransform;
      if ( WorldTransform < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WorldTransform, 0x1F6u, 0LL);
      }
      else
      {
        v15 = *((_DWORD *)this + 30);
        *(_QWORD *)&v29.left = 0LL;
        v16 = (float)*((int *)this + 31);
        v29.right = (float)v15;
        v29.bottom = v16;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v33, &v29, (float *)&v48);
        v41 = *(_OWORD *)v33;
        v42 = *(_OWORD *)&v33[16];
        v43 = *(_OWORD *)&v33[32];
        v44 = v34;
        v45 = v35;
        if ( !CMILMatrix::Invert((CMILMatrix *)&v41, v17, v18) )
        {
          v41 = _xmm;
          v42 = _xmm;
          BYTE1(v45) = BYTE1(v45) & 0xC0 | 0x29;
          v43 = _xmm;
          v44 = *(__int128 *)&_xmm.r;
          LOBYTE(v45) = -86;
        }
        CMILMatrix::Multiply((CMILMatrix *)&v36, (const struct CMILMatrix *)&v41);
        v19 = 0;
        v29 = *(struct D2D_RECT_F *)((char *)this + 140);
        if ( *((_DWORD *)this + 666) )
        {
          while ( 1 )
          {
            v20 = *(_QWORD *)(*((_QWORD *)this + 330) + 8LL * v19);
            v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 144LL))(v20);
            v22 = CDrawingContext::BeginFrame(
                    (__int64)v27,
                    (v21 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v21 >> 64),
                    (__int64)&v36,
                    &v29,
                    4u,
                    0LL);
            v5 = v22;
            if ( v22 < 0 )
              break;
            v46[0] = &v26;
            v47 = 1;
            v46[1] = &v27;
            *(_QWORD *)&v30 = 6LL;
            DWORD2(v30) = 1;
            if ( (int)CDrawingContext::PushRenderOptionsInternal(v27, 0LL, (const struct MilRenderOptions *)&v30, 1) >= 0 )
              v26 = 1;
            v23 = (_QWORD *)*((_QWORD *)this + 3);
            *((_QWORD *)&v30 + 1) = &RootVisualTree;
            *(_QWORD *)&v30 = this;
            *(_QWORD *)&v31 = &v48;
            *((_QWORD *)&v31 + 1) = &v27;
            v32 = &v41;
            *(_QWORD *)v33 = off_180312DD0;
            *(_OWORD *)&v33[8] = v30;
            *((_QWORD *)&v34 + 1) = v33;
            *(_OWORD *)&v33[24] = v31;
            *(_QWORD *)&v33[40] = &v41;
            v24 = CComposition::ForEachCursorVisual(v23, (__int64)v33);
            v5 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x258u, 0LL);
              gsl::final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___::_final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___((__int64)v46);
              goto LABEL_27;
            }
            gsl::final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___::_final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___((__int64)v46);
            if ( ++v19 >= *((_DWORD *)this + 666) )
              goto LABEL_27;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x216u, 0LL);
        }
      }
LABEL_27:
      if ( v26 )
        CDrawingContext::PopRenderOptionsInternal(v27, 1);
    }
  }
  return v5;
}
