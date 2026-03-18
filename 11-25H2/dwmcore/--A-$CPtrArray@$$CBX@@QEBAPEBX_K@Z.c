/*
 * XREFs of ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770
 * Callers:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021130 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800217B0 (-NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021DE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180056CC0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800AF200 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x1800B4150 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800B4E20 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800B8300 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800BA8B0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800E8820 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180108570 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180109750 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x180113838 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180130214 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x180130A48 (-OnSourceModificationsChanged@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1801321F8 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ @ 0x18020F1A8 (-OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1802104B8 (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x18029E26C (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall __A__CPtrArray___CBX__QEBAPEBX_K_Z(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 *result; // rax
  unsigned __int64 v4; // rcx

  v2 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    result = (unsigned __int64 *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v4 = *result;
  }
  else
  {
    v4 = *a1 & 1;
    result = (unsigned __int64 *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( a2 >= v4 )
    return 0LL;
  if ( v4 != 1 )
    return (unsigned __int64 *)result[a2 + 2];
  return result;
}
