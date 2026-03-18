/*
 * XREFs of ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x180081A90
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800815F4 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800813DC (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x180081C70 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x180081EA0 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800824E0 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z @ 0x180195AA0 (-GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CSubDrawingContext::BeginFrame(CSubDrawingContext *this, const struct CMILMatrix *a2)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v10; // rbx
  CVisual *CurrentVisual; // rax
  __int64 v12; // rcx
  CCpuClippingData *CpuClippingData; // rax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v17; // [rsp+50h] [rbp+8h] BYREF

  CScopedClipStack::DuplicateScopeToClipStack(
    (CScopedClipStack *)(*(_QWORD *)this + 744LL),
    (struct CScopedClipStack *)(*((_QWORD *)this + 1) + 744LL),
    a2);
  v4 = 0LL;
  v5 = CDrawingContext::BeginFrame(*((_QWORD *)this + 1), *(_QWORD *)(*(_QWORD *)this + 32LL), a2, 0LL, 0, 0LL);
  if ( v5 < 0 )
  {
    v14 = 88LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\subdrawingcontext.cpp",
      (const char *)(unsigned int)v5,
      v15);
    return (unsigned int)v5;
  }
  v6 = *(_QWORD *)this;
  *((_BYTE *)this + 88) = 1;
  v17 = 1065353216;
  v7 = *(_DWORD *)(v6 + 3168);
  if ( v7 )
    v17 = *(_DWORD *)(*(_QWORD *)(v6 + 3160) + 4LL * (unsigned int)(v7 - 1));
  v5 = CWatermarkStack<float,64,2,10>::Push(*((_QWORD *)this + 1) + 3160LL, &v17);
  if ( v5 < 0 )
  {
    v14 = 94LL;
    goto LABEL_12;
  }
  v8 = *((_QWORD *)this + 1);
  if ( CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(v8 + 744)) )
  {
    v10 = *(_QWORD *)(v8 + 752);
    CurrentVisual = CDrawingContext::GetCurrentVisual(*(CDrawingContext **)this);
    CpuClippingData = CVisual::GetCpuClippingData(CurrentVisual, *(const struct CVisualTree **)(v12 + 7944));
    if ( CCpuClippingData::TransformToDifferentScope(
           CpuClippingData,
           (CSubDrawingContext *)((char *)this + 16),
           (const struct CMILMatrix *)(v10 - 84),
           a2) )
    {
      *(_QWORD *)(*((_QWORD *)this + 1) + 216LL) = (char *)this + 16;
    }
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 200LL) = *(_QWORD *)(*(_QWORD *)this + 200LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 240LL) = *(_DWORD *)(*(_QWORD *)this + 240LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 244LL) = *(_DWORD *)(*(_QWORD *)this + 244LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 248LL) = *(_DWORD *)(*(_QWORD *)this + 248LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 252LL) = *(_DWORD *)(*(_QWORD *)this + 252LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 256LL) = *(_DWORD *)(*(_QWORD *)this + 256LL);
  do
  {
    *(_BYTE *)(*((_QWORD *)this + 1) + v4 + 8065) = *(_BYTE *)(*(_QWORD *)this + v4 + 8065);
    ++v4;
  }
  while ( v4 < 2 );
  return 0LL;
}
