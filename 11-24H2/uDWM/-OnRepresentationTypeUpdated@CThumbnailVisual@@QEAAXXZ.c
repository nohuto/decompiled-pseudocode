/*
 * XREFs of ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800DA880
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180061124 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C624C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001E410 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180067B90 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800D0C38 (-OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 */

void __fastcall CThumbnailVisual::OnRepresentationTypeUpdated(CSecondaryWindowRepresentation **this)
{
  CSecondaryWindowRepresentation *v2; // rcx

  if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
  {
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 4096);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x10000);
  }
  v2 = this[42];
  if ( v2 )
    CSecondaryWindowRepresentation::OnRepresentationTypeUpdated(v2);
}
