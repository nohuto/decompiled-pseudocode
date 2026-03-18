/*
 * XREFs of ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140194880
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007CA00 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetContentRelativeClientRectCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F4D44 (-EmitSetContentRelativeClientRectCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetContentRelativeWindowRectCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F4E80 (-EmitSetContentRelativeWindowRectCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetContentSizeCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F70AC (-EmitSetContentSizeCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAlphaMarginsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFD80 (-EmitSetAlphaMarginsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSpriteClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140104390 (-EmitSetSpriteClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSpriteBitmapCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401049C4 (-EmitSetSpriteBitmapCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetFlipExSurfaceCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140105C18 (-EmitSetFlipExSurfaceCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIsClipToDirtyCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140105CC0 (-EmitSetIsClipToDirtyCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSourceModificationsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010626C (-EmitSetSourceModificationsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetFlipExSurfaceClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401063FC (-EmitSetFlipExSurfaceClipCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetMaximizedClipMarginsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140107120 (-EmitSetMaximizedClipMarginsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetExtendedBoundsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140107370 (-EmitSetExtendedBoundsCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSpriteHandleCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010812C (-EmitSetSpriteHandleCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIsLayoutRTLCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010A504 (-EmitSetIsLayoutRTLCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetProcessAttributionCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010A580 (-EmitSetProcessAttributionCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetIsComposeOnceCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010AA2C (-EmitSetIsComposeOnceCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetWindowHandleCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14010AE44 (-EmitSetWindowHandleCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetIsCursorCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402263A0 (-EmitSetIsCursorCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CWindowNodeMarshaler::EmitUpdateCommands(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetAlphaMarginsCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetContentRelativeClientRectCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetContentRelativeWindowRectCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetContentSizeCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetExtendedBoundsCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetFlipExSurfaceCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetFlipExSurfaceClipCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetIsClipToDirtyCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetIsComposeOnceCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetIsCursorCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetIsLayoutRTLCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetMaximizedClipMarginsCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetProcessAttributionCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetSourceModificationsCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetSpriteBitmapCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetSpriteClipCommand(this, a2)
    && DirectComposition::CWindowNodeMarshaler::EmitSetSpriteHandleCommand(this, a2) )
  {
    return DirectComposition::CWindowNodeMarshaler::EmitSetWindowHandleCommand(this, a2) != 0;
  }
  return v4;
}
