/*
 * XREFs of ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D07A8
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18007DABC (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800CF300 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0440 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0590 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800D10D0 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800D1450 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180115438 (-GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x180119FA4 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18018C0C0 (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A05AC (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z @ 0x1801DB000 (-CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z.c)
 *     ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18020DA40 (-NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18020DAF0 (-OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18021EFEC (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180229800 (-OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802D6FB0 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 */

void __fastcall wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(CGlobalDrawingContext **a1)
{
  CGlobalDrawingContext *v1; // rdx
  __int64 (__fastcall *v2)(CResource *); // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CDeviceTextureTarget::Release )
    {
      CDeviceTextureTarget::Release(v1);
    }
    else if ( v2 == CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v1);
    }
    else if ( v2 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v1);
    }
    else
    {
      v2(v1);
    }
  }
}
