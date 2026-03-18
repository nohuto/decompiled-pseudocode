/*
 * XREFs of ?EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetEndPointCommand@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02179E8 (-EmitSetEndPointCommand@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetStartPointCommand@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021A34C (-EmitSetStartPointCommand@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEA.c)
 *     ?EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021B6AC (-EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CGradientLegacyMilBrushMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CLinearGradientLegacyMilBrushMarshaler::EmitSetStartPointCommand(this, a2) )
  {
    return DirectComposition::CLinearGradientLegacyMilBrushMarshaler::EmitSetEndPointCommand(this, a2) != 0;
  }
  return v4;
}
