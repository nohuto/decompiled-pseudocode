/*
 * XREFs of ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180117D20
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769C8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180117180 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180117910 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180224290 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1802677DC (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     _lambda_5aff48886c632e43686d56bde1b6617b_::operator() @ 0x18028CDE0 (_lambda_5aff48886c632e43686d56bde1b6617b_--operator().c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C (-RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingCon.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18029A990 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushRenderOptionsInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct MilRenderOptions *a3,
        char a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 result; // rax
  int v17; // ecx
  unsigned int v18; // ebp
  __int64 v19; // rdx
  unsigned int v20; // r14d
  void *v21; // rax
  void *v22; // r15
  __int64 v23; // rbp
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // r15d
  void *v27; // rax
  void *v28; // r12
  __int128 v29; // [rsp+30h] [rbp-48h]
  __int128 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !a4 )
    goto LABEL_6;
  v7 = *((unsigned int *)this + 68);
  v8 = *((unsigned int *)this + 69);
  *(_QWORD *)&v29 = 9LL;
  *((_QWORD *)&v29 + 1) = a2;
  if ( (_DWORD)v7 == (_DWORD)v8 )
  {
    v18 = 2 * v8;
    if ( (unsigned __int64)(2 * v8) <= 0xFFFFFFFF )
    {
      if ( v18 <= 0x40 )
        v18 = 64;
      v20 = 16 * v7;
      if ( (unsigned __int64)(16 * v7) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v18 <= 0x10 )
        {
          v12 = -2147024809;
        }
        else
        {
          v21 = MIDL_user_allocate(16LL * v18);
          v22 = v21;
          if ( v21 )
          {
            memcpy_0(v21, *((const void **)this + 33), v20);
            operator delete(*((void **)this + 33));
            *((_QWORD *)this + 33) = v22;
            *((_DWORD *)this + 69) = v18;
            goto LABEL_3;
          }
          v12 = -2147024882;
        }
        v19 = 104LL;
LABEL_27:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v12);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v12);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x120Bu, 0LL);
        return v12;
      }
      v19 = 101LL;
    }
    else
    {
      v19 = 98LL;
    }
    v12 = -2147024362;
    goto LABEL_27;
  }
LABEL_3:
  *(_OWORD *)(*((_QWORD *)this + 33) + 16LL * *((unsigned int *)this + 68)) = v29;
  v9 = *((_DWORD *)this + 71);
  if ( v9 <= ++*((_DWORD *)this + 68) )
    v9 = *((_DWORD *)this + 68);
  *((_DWORD *)this + 71) = v9;
LABEL_6:
  v10 = *((unsigned int *)this + 182);
  *(_QWORD *)&v30 = *((_QWORD *)this + 30);
  HIDWORD(v30) = *((_DWORD *)this + 62);
  v31 = *(_QWORD *)((char *)this + 252);
  v11 = *((unsigned int *)this + 183);
  DWORD2(v30) = 0;
  if ( (_DWORD)v10 != (_DWORD)v11 )
  {
LABEL_7:
    v12 = 0;
    v13 = 3LL * *((unsigned int *)this + 182);
    v14 = *((_QWORD *)this + 90);
    *(_OWORD *)(v14 + 8 * v13) = v30;
    *(_QWORD *)(v14 + 8 * v13 + 16) = v31;
    v15 = *((_DWORD *)this + 185);
    if ( v15 <= ++*((_DWORD *)this + 182) )
      v15 = *((_DWORD *)this + 182);
    *((_DWORD *)this + 185) = v15;
    goto LABEL_10;
  }
  v23 = 2 * v11;
  if ( (unsigned __int64)(2 * v11) > 0xFFFFFFFF )
  {
    v24 = 98LL;
LABEL_38:
    v12 = -2147024362;
    goto LABEL_39;
  }
  if ( (unsigned int)v23 <= 0x40 )
    v23 = 64LL;
  v26 = 24 * v10;
  if ( (unsigned __int64)(24 * v10) > 0xFFFFFFFF )
  {
    v24 = 101LL;
    goto LABEL_38;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v23 <= 0x18 )
  {
    v12 = -2147024809;
  }
  else
  {
    v27 = MIDL_user_allocate(24 * v23);
    v28 = v27;
    if ( v27 )
    {
      memcpy_0(v27, *((const void **)this + 90), v26);
      operator delete(*((void **)this + 90));
      *((_QWORD *)this + 90) = v28;
      *((_DWORD *)this + 183) = v23;
      goto LABEL_7;
    }
    v12 = -2147024882;
  }
  v24 = 104LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)v12);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)v12);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1219u, 0LL);
  if ( !a4 )
  {
LABEL_10:
    if ( (*(_BYTE *)a3 & 2) != 0 )
    {
      v17 = *((_DWORD *)a3 + 1);
      if ( (v17 & 0xFF000000) == 0xFF000000 )
      {
        *((_DWORD *)this + 60) = v17 & 0xFFFFFF;
      }
      else if ( !*((_BYTE *)this + 7938) )
      {
        *((_DWORD *)this + 60) = v17;
      }
    }
    if ( (*(_BYTE *)a3 & 4) != 0 )
      *((_DWORD *)this + 61) = *((_DWORD *)a3 + 2);
    if ( (*(_BYTE *)a3 & 8) != 0 )
      *((_DWORD *)this + 62) = *((_DWORD *)a3 + 5);
    if ( (*(_BYTE *)a3 & 0x10) != 0 )
      *((_DWORD *)this + 63) = *((_DWORD *)a3 + 6);
    if ( (*(_BYTE *)a3 & 0x20) != 0 )
      *((_DWORD *)this + 64) = *((_DWORD *)a3 + 7);
    return v12;
  }
  v25 = *((_DWORD *)this + 68);
  result = v12;
  if ( v25 )
    *((_DWORD *)this + 68) = v25 - 1;
  return result;
}
