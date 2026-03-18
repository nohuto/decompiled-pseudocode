/*
 * XREFs of ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800ABD60
 * Callers:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180034E40 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038420 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C0020 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcTransform@COffScreenRenderTarget@@IEAAXXZ @ 0x1801592D4 (-CalcTransform@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x180165AE4 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x1801A99C0 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1801A9A4C (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z @ 0x1801FCAC0 (-PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z.c)
 *     ?GetRealizationWorker@CTransformGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801FCD34 (-GetRealizationWorker@CTransformGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18020C964 (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x1802822C4 (-ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVC.c)
 *     ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1802A56FC (-ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ.c)
 * Callees:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800ADB30 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800F4CC0 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct CMILMatrix *__fastcall CTransform3D::GetMatrix(CTransform3D *this, const struct D2D_SIZE_F *a2)
{
  _DWORD *v2; // rsi
  unsigned int *v3; // rdi
  char v4; // r8
  char *v5; // rbx
  void (*v6)(CComponentTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  struct CMILMatrix *v8; // r8

  v2 = (_DWORD *)((char *)this + 40);
  v3 = (unsigned int *)((char *)this + 40);
  v4 = *((_BYTE *)this + 40) & 1;
  if ( a2 )
  {
    if ( (*((_BYTE *)this + 40) & 1) == 0
      && *((_BYTE *)this + 156)
      && (*((float *)this + 37) != a2->width || *((float *)this + 38) != a2->height) )
    {
      v4 = 1;
    }
    v3 = (unsigned int *)((char *)this + 40);
    *(struct D2D_SIZE_F *)((char *)this + 148) = *a2;
  }
  v5 = (char *)this + 80;
  if ( v4 )
  {
    v6 = *(void (**)(CComponentTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)this + 200LL);
    if ( v6 == CComponentTransform3D::GetRealization )
    {
      CComponentTransform3D::GetRealization(this, a2, (CTransform3D *)((char *)this + 80));
    }
    else
    {
      v8 = (CTransform3D *)((char *)this + 80);
      if ( (char *)v6 == (char *)CMatrixTransform::GetRealization )
        CMatrixTransform::GetRealization(this, a2, v8);
      else
        ((void (__fastcall *)(CTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *))v6)(this, a2, v8);
    }
    *v3 = *v2 & 0xFFFFFFFE;
  }
  return (const struct CMILMatrix *)v5;
}
