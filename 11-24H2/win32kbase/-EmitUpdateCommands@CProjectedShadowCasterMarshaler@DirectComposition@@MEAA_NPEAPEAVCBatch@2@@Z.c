/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140159310
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DA70 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAncestorClipVisual@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402381A4 (-EmitAncestorClipVisual@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitBrush@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140238224 (-EmitBrush@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCastingVisual@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1402382A4 (-EmitCastingVisual@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitMask@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140238324 (-EmitMask@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CProjectedShadowCasterMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CProjectedShadowCasterMarshaler::EmitAncestorClipVisual(this, a2)
    && DirectComposition::CProjectedShadowCasterMarshaler::EmitCastingVisual(this, a2)
    && DirectComposition::CProjectedShadowCasterMarshaler::EmitBrush(this, a2) )
  {
    return DirectComposition::CProjectedShadowCasterMarshaler::EmitMask(this, a2);
  }
  return v4;
}
