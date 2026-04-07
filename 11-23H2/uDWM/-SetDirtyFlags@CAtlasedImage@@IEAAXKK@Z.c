/*
 * XREFs of ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000BC44
 * Callers:
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x18000A0E8 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000BD30 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180017BD0 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180017E30 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001AAA0 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180043880 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180045020 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18006B514 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?InternalSetOpacity@CAtlasedImage@@IEAAXH@Z @ 0x1800AC16C (-InternalSetOpacity@CAtlasedImage@@IEAAXH@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800AC1A8 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800AC200 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x1800AC248 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800AC2D0 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x1800ACB2C (-SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetDirtyFlags(CAtlasedImage *this, int a2, unsigned int a3)
{
  __int64 v3; // rcx

  *((_DWORD *)this + 24) |= a2;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, a3);
}
