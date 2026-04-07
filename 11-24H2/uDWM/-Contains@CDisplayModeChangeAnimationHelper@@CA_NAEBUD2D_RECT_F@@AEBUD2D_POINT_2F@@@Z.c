/*
 * XREFs of ?Contains@CDisplayModeChangeAnimationHelper@@CA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800C0D70
 * Callers:
 *     ?AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@@AEBUD2D_POINTANDSIZE_F@@AEBUD2D_POINT_2F@@PEAU4@@Z @ 0x1800C0C08 (-AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@.c)
 *     ?GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDisplaySet@@AEBUD2D_POINT_2F@@@Z @ 0x1800C14D4 (-GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDispl.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplayModeChangeAnimationHelper::Contains(const struct D2D_RECT_F *a1, const struct D2D_POINT_2F *a2)
{
  float y; // xmm1_4
  bool result; // al

  result = 0;
  if ( a2->x >= a1->left && a1->right >= a2->x )
  {
    y = a2->y;
    if ( y >= a1->top && a1->bottom >= y )
      return 1;
  }
  return result;
}
